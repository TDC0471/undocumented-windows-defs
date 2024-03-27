#pragma once
/* ------------------ */

#include <_HEAP_LIST_LOOKUP.h>
#include <_LIST_ENTRY.h>

//0x38 bytes (sizeof)
struct _HEAP_LIST_LOOKUP
{
    struct _HEAP_LIST_LOOKUP* ExtendedLookup;                               //0x0
    ULONG ArraySize;                                                        //0x8
    ULONG ExtraItem;                                                        //0xc
    ULONG ItemCount;                                                        //0x10
    ULONG OutOfRangeItems;                                                  //0x14
    ULONG BaseIndex;                                                        //0x18
    struct _LIST_ENTRY* ListHead;                                           //0x20
    ULONG* ListsInUseUlong;                                                 //0x28
    struct _LIST_ENTRY** ListHints;                                         //0x30
};
/* Used in */
// _HEAP_LIST_LOOKUP

