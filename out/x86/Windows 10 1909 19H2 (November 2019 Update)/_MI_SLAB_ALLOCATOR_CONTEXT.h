#pragma once
/* ------------------ */

#include <_RTL_RB_TREE.h>
#include <_MI_SLAB_ALLOCATOR_ENTRY.h>
#include <_MI_SLAB_ALLOCATOR_TYPE.h>
#include <_MI_SLAB_ALLOCATOR_PROTECTION.h>
#include <_MMPFNLIST.h>

//0x48 bytes (sizeof)
struct _MI_SLAB_ALLOCATOR_CONTEXT
{
    struct _RTL_RB_TREE AllocationsTree;                                    //0x0
    volatile LONG Lock;                                                     //0x8
    struct _MI_SLAB_ALLOCATOR_ENTRY* SlabEntryHint;                         //0xc
    ULONG FreePageCount;                                                    //0x10
    ULONG SlabEntryCount;                                                   //0x14
    enum _MI_SLAB_ALLOCATOR_TYPE Type;                                      //0x18
    enum _MI_SLAB_ALLOCATOR_PROTECTION Protection;                          //0x1c
    union
    {
        ULONG EntryBecameEmpty:1;                                           //0x20
        ULONG Spare:31;                                                     //0x20
        ULONG AllFlags;                                                     //0x20
    } Flags;                                                                //0x20
    struct _MMPFNLIST StandbyList;                                          //0x24
    ULONGLONG LastReplenishTime;                                            //0x38
    ULONGLONG LastFailureTime;                                              //0x40
};
/* Used in */
// _MI_PARTITION_PAGE_LISTS

