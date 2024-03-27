#pragma once
/* ------------------ */

#include <_HMAP_DIRECTORY.h>
#include <_HMAP_TABLE.h>
#include <_RTL_BITMAP.h>
#include <_LIST_ENTRY.h>

//0xdc bytes (sizeof)
struct _DUAL
{
    ULONG Length;                                                           //0x0
    struct _HMAP_DIRECTORY* Map;                                            //0x4
    struct _HMAP_TABLE* SmallDir;                                           //0x8
    ULONG Guard;                                                            //0xc
    struct _RTL_BITMAP FreeDisplay[24];                                     //0x10
    ULONG FreeSummary;                                                      //0xd0
    struct _LIST_ENTRY FreeBins;                                            //0xd4
};
/* Used in */
// _HHIVE

