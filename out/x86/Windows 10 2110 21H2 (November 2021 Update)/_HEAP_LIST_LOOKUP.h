#pragma once
/* ------------------ */

#include <_HEAP_LIST_LOOKUP.h>
#include <_LIST_ENTRY.h>

//0x24 bytes (sizeof)
struct _HEAP_LIST_LOOKUP
{
    struct _HEAP_LIST_LOOKUP* ExtendedLookup;                               //0x0
    ULONG ArraySize;                                                        //0x4
    ULONG ExtraItem;                                                        //0x8
    ULONG ItemCount;                                                        //0xc
    ULONG OutOfRangeItems;                                                  //0x10
    ULONG BaseIndex;                                                        //0x14
    struct _LIST_ENTRY* ListHead;                                           //0x18
    ULONG* ListsInUseUlong;                                                 //0x1c
    struct _LIST_ENTRY** ListHints;                                         //0x20
};
/* Used in */
// _HEAP_LIST_LOOKUP

