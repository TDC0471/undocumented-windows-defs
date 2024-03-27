#pragma once
/* ------------------ */


//0x10 bytes (sizeof)
struct _MM_SYSTEM_PAGE_COUNTS
{
    volatile ULONG SystemCodePage;                                          //0x0
    volatile ULONG SystemDriverPage;                                        //0x4
    volatile LONG TotalSystemCodePages;                                     //0x8
    volatile LONG TotalSystemDriverPages;                                   //0xc
};
/* Used in */
// _MI_SYSTEM_IMAGE_STATE

