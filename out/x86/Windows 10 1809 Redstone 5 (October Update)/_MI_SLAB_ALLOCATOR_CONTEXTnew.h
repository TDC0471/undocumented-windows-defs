#pragma once
/* ------------------ */

#include <_RTL_RB_TREE.h>
#include <_MI_SLAB_ALLOCATOR_ENTRY.h>
#include <_MI_SLAB_ALLOCATOR_PROTECTION.h>

//0x30 bytes (sizeof)
struct _MI_SLAB_ALLOCATOR_CONTEXT
{
    struct _RTL_RB_TREE AllocationsTree;                                    //0x0
    volatile LONG Lock;                                                     //0x8
    struct _MI_SLAB_ALLOCATOR_ENTRY* SlabEntryHint;                         //0xc
    ULONG FreePageCount;                                                    //0x10
    ULONG SlabEntryCount;                                                   //0x14
    enum _MI_SLAB_ALLOCATOR_PROTECTION Protection;                          //0x18
    union
    {
        ULONG EntryBecameEmpty:1;                                           //0x1c
        ULONG Spare:31;                                                     //0x1c
        ULONG AllFlags;                                                     //0x1c
    } Flags;                                                                //0x1c
    ULONGLONG LastReplenishTime;                                            //0x20
    ULONGLONG LastFailureTime;                                              //0x28
};
/* Used in */
// _MI_PARTITION_PAGE_LISTS

