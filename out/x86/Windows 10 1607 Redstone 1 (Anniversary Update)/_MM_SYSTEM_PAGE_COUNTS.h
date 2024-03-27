#pragma once
/* ------------------ */


//0x10 bytes (sizeof)
struct _MM_SYSTEM_PAGE_COUNTS
{
    ULONG SystemCodePage;                                                   //0x0
    ULONG SystemDriverPage;                                                 //0x4
    LONG TotalSystemCodePages;                                              //0x8
    LONG TotalSystemDriverPages;                                            //0xc
};
/* Used in */
// _MI_SYSTEM_IMAGE_STATE

