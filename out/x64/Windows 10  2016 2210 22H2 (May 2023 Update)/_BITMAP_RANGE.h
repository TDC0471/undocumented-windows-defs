#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>

//0x30 bytes (sizeof)
struct _BITMAP_RANGE
{
    struct _LIST_ENTRY Links;                                               //0x0
    LONGLONG BasePage;                                                      //0x10
    ULONG FirstDirtyPage;                                                   //0x18
    ULONG LastDirtyPage;                                                    //0x1c
    ULONG DirtyPages;                                                       //0x20
    ULONG* Bitmap;                                                          //0x28
};
/* Used in */
// _MBCB

