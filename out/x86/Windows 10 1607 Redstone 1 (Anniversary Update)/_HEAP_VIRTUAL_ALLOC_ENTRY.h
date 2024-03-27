#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_HEAP_ENTRY_EXTRA.h>
#include <_HEAP_ENTRY.h>

//0x20 bytes (sizeof)
struct _HEAP_VIRTUAL_ALLOC_ENTRY
{
    struct _LIST_ENTRY Entry;                                               //0x0
    struct _HEAP_ENTRY_EXTRA ExtraStuff;                                    //0x8
    ULONG CommitSize;                                                       //0x10
    ULONG ReserveSize;                                                      //0x14
    struct _HEAP_ENTRY BusyBlock;                                           //0x18
};
