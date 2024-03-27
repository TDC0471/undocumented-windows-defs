#pragma once
/* ------------------ */

#include <_HMAP_DIRECTORY.h>
#include <_HMAP_TABLE.h>
#include <_FREE_DISPLAY.h>
#include <_LIST_ENTRY.h>

//0x13c bytes (sizeof)
struct _DUAL
{
    ULONG Length;                                                           //0x0
    struct _HMAP_DIRECTORY* Map;                                            //0x4
    struct _HMAP_TABLE* SmallDir;                                           //0x8
    ULONG Guard;                                                            //0xc
    struct _FREE_DISPLAY FreeDisplay[24];                                   //0x10
    ULONG FreeSummary;                                                      //0x130
    struct _LIST_ENTRY FreeBins;                                            //0x134
};
/* Used in */
// _HHIVE

