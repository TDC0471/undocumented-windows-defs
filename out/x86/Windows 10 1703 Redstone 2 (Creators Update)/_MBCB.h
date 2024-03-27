#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_BITMAP_RANGE.h>

//0x88 bytes (sizeof)
struct _MBCB
{
    SHORT NodeTypeCode;                                                     //0x0
    SHORT NodeIsInZone;                                                     //0x2
    ULONG PagesToWrite;                                                     //0x4
    ULONG DirtyPages;                                                       //0x8
    ULONG Reserved;                                                         //0xc
    struct _LIST_ENTRY BitmapRanges;                                        //0x10
    LONGLONG ResumeWritePage;                                               //0x18
    LONGLONG MostRecentlyDirtiedPage;                                       //0x20
    struct _BITMAP_RANGE BitmapRange1;                                      //0x28
    struct _BITMAP_RANGE BitmapRange2;                                      //0x48
    struct _BITMAP_RANGE BitmapRange3;                                      //0x68
};
/* Used in */
// _SHARED_CACHE_MAP

