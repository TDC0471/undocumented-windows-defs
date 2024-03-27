#pragma once
/* ------------------ */

#include <_PROFILE_PARAMETER_BLOCK.h>
#include <_HEADLESS_LOADER_BLOCK.h>
#include <_SMBIOS_TABLE_HEADER.h>
#include <_NETWORK_LOADER_BLOCK.h>
#include <_LIST_ENTRY.h>
#include <_LOADER_PERFORMANCE_DATA.h>
#include <_GUID.h>

//0xc8 bytes (sizeof)
struct _LOADER_PARAMETER_EXTENSION
{
    ULONG Size;                                                             //0x0
    struct _PROFILE_PARAMETER_BLOCK Profile;                                //0x4
    ULONG MajorVersion;                                                     //0x14
    ULONG MinorVersion;                                                     //0x18
    VOID* EmInfFileImage;                                                   //0x20
    ULONG EmInfFileSize;                                                    //0x28
    VOID* TriageDumpBlock;                                                  //0x30
    ULONGLONG LoaderPagesSpanned;                                           //0x38
    struct _HEADLESS_LOADER_BLOCK* HeadlessLoaderBlock;                     //0x40
    struct _SMBIOS_TABLE_HEADER* SMBiosEPSHeader;                           //0x48
    VOID* DrvDBImage;                                                       //0x50
    ULONG DrvDBSize;                                                        //0x58
    struct _NETWORK_LOADER_BLOCK* NetworkLoaderBlock;                       //0x60
    struct _LIST_ENTRY FirmwareDescriptorListHead;                          //0x68
    VOID* AcpiTable;                                                        //0x78
    ULONG AcpiTableSize;                                                    //0x80
    ULONG BootViaWinload:1;                                                 //0x84
    ULONG Reserved:31;                                                      //0x84
    struct _LOADER_PERFORMANCE_DATA* LoaderPerformanceData;                 //0x88
    struct _LIST_ENTRY BootApplicationPersistentData;                       //0x90
    VOID* WmdTestResult;                                                    //0xa0
    struct _GUID BootIdentifier;                                            //0xa8
    ULONG ResumePages;                                                      //0xb8
    VOID* DumpHeader;                                                       //0xc0
};
/* Used in */
// _LOADER_PARAMETER_BLOCK

