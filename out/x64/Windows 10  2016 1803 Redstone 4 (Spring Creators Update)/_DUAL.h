#pragma once
/* ------------------ */

#include <_HMAP_DIRECTORY.h>
#include <_HMAP_TABLE.h>
#include <_FREE_DISPLAY.h>
#include <_LIST_ENTRY.h>

//0x278 bytes (sizeof)
struct _DUAL
{
    ULONG Length;                                                           //0x0
    struct _HMAP_DIRECTORY* Map;                                            //0x8
    struct _HMAP_TABLE* SmallDir;                                           //0x10
    ULONG Guard;                                                            //0x18
    struct _FREE_DISPLAY FreeDisplay[24];                                   //0x20
    struct _LIST_ENTRY FreeBins;                                            //0x260
    ULONG FreeSummary;                                                      //0x270
};
/* Used in */
// _HHIVE

