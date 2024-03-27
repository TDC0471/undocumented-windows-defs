#pragma once
/* ------------------ */

#include <_RTL_RB_TREE.h>
#include <_MI_SLAB_ALLOCATOR_ENTRY.h>
#include <_MI_SLAB_ALLOCATOR_PROTECTION.h>

//0x48 bytes (sizeof)
struct _MI_SLAB_ALLOCATOR_CONTEXT
{
    struct _RTL_RB_TREE AllocationsTree;                                    //0x0
    volatile LONG Lock;                                                     //0x10
    struct _MI_SLAB_ALLOCATOR_ENTRY* SlabEntryHint;                         //0x18
    ULONGLONG FreePageCount;                                                //0x20
    ULONGLONG SlabEntryCount;                                               //0x28
    enum _MI_SLAB_ALLOCATOR_PROTECTION Protection;                          //0x30
    union
    {
        ULONG EntryBecameEmpty:1;                                           //0x34
        ULONG Spare:31;                                                     //0x34
        ULONG AllFlags;                                                     //0x34
    } Flags;                                                                //0x34
    ULONGLONG LastReplenishTime;                                            //0x38
    ULONGLONG LastFailureTime;                                              //0x40
};
/* Used in */
// _MI_PARTITION_PAGE_LISTS

