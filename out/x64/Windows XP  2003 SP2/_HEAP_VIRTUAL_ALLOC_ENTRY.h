#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_HEAP_ENTRY_EXTRA.h>
#include <_HEAP_ENTRY.h>

//0x40 bytes (sizeof)
struct _HEAP_VIRTUAL_ALLOC_ENTRY
{
    struct _LIST_ENTRY Entry;                                               //0x0
    struct _HEAP_ENTRY_EXTRA ExtraStuff;                                    //0x10
    ULONGLONG CommitSize;                                                   //0x20
    ULONGLONG ReserveSize;                                                  //0x28
    struct _HEAP_ENTRY BusyBlock;                                           //0x30
};
