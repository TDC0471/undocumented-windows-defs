use scraper::{Html, Selector};
use reqwest::Client;
use std::collections::HashSet;
use std::time::Duration;
use tokio::fs;
use tokio::fs::File;
use tokio::io::AsyncWriteExt;
use tokio::time::sleep;
use futures_util::future::try_join_all;


async fn fetch_with_retry(url: &str, retries: usize) -> Result<String, reqwest::Error> {
    let client = Client::new();
    let mut retry_count = 0;

    loop {
        match client.get(url).send().await {
            Ok(response) => {
                match response.text().await {
                    Ok(text) => return Ok(text),
                    Err(e) => {
                        println!("Failed to read response body: {}", e);
                        return Err(e.into());
                    }
                }
            }
            Err(e) => {
                println!("Failed to fetch from {}: {}", url, e);
                retry_count += 1;
                if retry_count >= retries {
                    return Err(e);
                }
                println!("Retrying ({}/{})", retry_count, retries);
                sleep(Duration::from_secs(1)).await; // Add a delay before retrying
            }
        }
    }
}

async fn fetch(url: &str) -> Result<String, reqwest::Error> {
    fetch_with_retry(url, 3).await
}

fn remove_invalid_chars_for_folder_name(name: &str) -> String {
    let invalid_chars = r#"\/:*?"<>|"#; // Remove the second backslash
    name.chars().filter(|c| !invalid_chars.contains(*c)).collect()
}

async fn parse_with_retry(url: &str, folder_spec: &str, name: &str) -> Result<(), Box<dyn std::error::Error>> {
    let mut retry_count = 0;

    loop {
        match parse(url, folder_spec, name).await {
            Ok(()) => return Ok(()),
            Err(e) => {
                println!("Error parsing {}: {}", url, e);
                retry_count += 1;
                if retry_count >= 3 {
                    return Err(e);
                }
                println!("Retrying ({}/3)", retry_count);
            }
        }
    }
}

async fn parse(url: &str, folder_spec: &str, name: &str) -> Result<(), Box<dyn std::error::Error>> {
    let html = fetch(url).await?;
    let fragment = Html::parse_document(&html);

    let header_files_paths = format!("out/{}/{}", folder_spec, remove_invalid_chars_for_folder_name(name));
    fs::create_dir_all(&header_files_paths).await?;

    let enums = fragment.select(&Selector::parse("a.list-link").unwrap()).collect::<Vec<_>>();

    let mut tasks = Vec::new();

    for enum_link in &enums {
        let enum_url = format!("{}{}", "https://www.vergiliusproject.com", enum_link.value().attr("href").unwrap());
        let enum_name = enum_link.text().collect::<String>().trim().to_string();

        let header_files_paths_clone = header_files_paths.clone();
        let task = async move {
            if let Ok(enum_html) = fetch(&enum_url).await {
                let enum_fragment = Html::parse_document(&enum_html);

                if let Some(code_block) = enum_fragment.select(&Selector::parse("div#copyblock").unwrap()).next() {
                    let code_text = code_block.text().collect::<String>().trim().to_string();
                    let links = code_block.select(&Selector::parse("a.str-link").unwrap()).collect::<Vec<_>>();

                    let mut included_files = HashSet::new();
                    let cuh = remove_invalid_chars_for_folder_name(&enum_name);
                    let header_file_path = format!("{}/{}.h", header_files_paths_clone, cuh);

                    let mut header_file = File::create(header_file_path).await?;

                    header_file.write_all(b"#pragma once\n/* ------------------ */\n\n").await?;

                    for link in &links {
                        if let Some(link_url) = link.value().attr("href") {
                            if included_files.contains(link_url) || link_url.contains(name) {
                                continue;
                            }

                            let last_backslash_index = link_url.rfind('/');
                            if let Some(index) = last_backslash_index {
                                let substring_from_last_backslash = &link_url[index + 1..];
                                included_files.insert(link_url.to_string());
                                header_file.write_all(format!("#include <{}.h>\n", substring_from_last_backslash).as_bytes()).await?;
                            } else {
                                println!("not found: {}", link_url);
                                header_file.write_all(format!("\n{}\n", link_url).as_bytes()).await?;
                            }
                        }
                    }

                    header_file.write_all(format!("\n{}\n", code_text).as_bytes()).await?;

                    if let Some(used_in) = enum_fragment.select(&Selector::parse("div.used-in-block").unwrap()).next() {
                        let used_in_list = used_in.select(&Selector::parse("a.related").unwrap()).collect::<Vec<_>>();

                        header_file.write_all(b"/* Used in */\n").await?;

                        for used_in_structure in &used_in_list {
                            let used_in_name = used_in_structure.text().collect::<String>().trim().to_string();
                            header_file.write_all(format!("// {}\n", used_in_name).as_bytes()).await?;
                        }

                        header_file.write_all(b"\n").await?;
                    }

                    println!("Created file for {}", enum_name);
                } else {
                    println!("Unable to find code block for {}", enum_name);
                }
            } else {
                println!("Failed to fetch enum HTML for {}", enum_name);
            }
            Ok::<(), Box<dyn std::error::Error>>(())
        };
        tasks.push(task);
    }

    try_join_all(tasks).await?;

    Ok(())
}

async fn sigma(cuh: &str, namespec: &str) -> Result<(), Box<dyn std::error::Error>> {
    let html = fetch(cuh).await?;
    let fragment = Html::parse_document(&html);

    let archs = fragment.select(&Selector::parse("a.arch-link").unwrap()).collect::<Vec<_>>();

    let mut tasks = Vec::new();

    for arch in &archs {
        let arch_url = format!("{}{}", "https://www.vergiliusproject.com", arch.value().attr("href").unwrap());

        let task = async move {
            let arch_html = fetch(&arch_url).await?;
            let arch_fragment = Html::parse_document(&arch_html);

            let families = arch_fragment.select(&Selector::parse("a.fam-link").unwrap()).collect::<Vec<_>>();

            let mut family_tasks = Vec::new();

            for family in &families {
                let family_url = format!("{}{}", "https://www.vergiliusproject.com", family.value().attr("href").unwrap());
                let family_url_clone = family_url.clone(); // Clone family_url

                println!("{}/{}", arch_url, family_url_clone);

                let family_task = async move { // Use async move to capture

                    parse(&family_url_clone, namespec, &family.text().collect::<String>().trim()).await
                };

                family_tasks.push(family_task);
            }

            try_join_all(family_tasks).await?;
            Result::<(), Box<dyn std::error::Error>>::Ok(())
        };

        tasks.push(task);
    }

    try_join_all(tasks).await?;

    Ok(())
}

#[tokio::main]
async fn main() -> Result<(), Box<dyn std::error::Error>> {
    let base_url = "https://www.vergiliusproject.com";
    let x64 = format!("{}/kernels/x64", base_url);
    let x86 = format!("{}/kernels/x86", base_url);

    sigma(&x64, "x64").await?;
    sigma(&x86, "x86").await?;

    Ok(())
}
