#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_BITMAP_RANGE.h>

//0xc0 bytes (sizeof)
struct _MBCB
{
    SHORT NodeTypeCode;                                                     //0x0
    SHORT NodeIsInZone;                                                     //0x2
    ULONG PagesToWrite;                                                     //0x4
    ULONG DirtyPages;                                                       //0x8
    ULONG Reserved;                                                         //0xc
    struct _LIST_ENTRY BitmapRanges;                                        //0x10
    LONGLONG ResumeWritePage;                                               //0x20
    LONGLONG MostRecentlyDirtiedPage;                                       //0x28
    struct _BITMAP_RANGE BitmapRange1;                                      //0x30
    struct _BITMAP_RANGE BitmapRange2;                                      //0x60
    struct _BITMAP_RANGE BitmapRange3;                                      //0x90
};
/* Used in */
// _BCB
// _SHARED_CACHE_MAP

