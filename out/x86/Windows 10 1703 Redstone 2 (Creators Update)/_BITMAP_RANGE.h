#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>

//0x20 bytes (sizeof)
struct _BITMAP_RANGE
{
    struct _LIST_ENTRY Links;                                               //0x0
    LONGLONG BasePage;                                                      //0x8
    ULONG FirstDirtyPage;                                                   //0x10
    ULONG LastDirtyPage;                                                    //0x14
    ULONG DirtyPages;                                                       //0x18
    ULONG* Bitmap;                                                          //0x1c
};
/* Used in */
// _MBCB

