#pragma once
/* ------------------ */

#include <_RTL_RB_TREE.h>
#include <_MI_PARTITION.h>
#include <_MI_SLAB_ALLOCATOR_ENTRY.h>
#include <_MI_SLAB_ALLOCATOR_TYPE.h>
#include <_MI_NODE_NUMBER_ZERO_BASED.h>
#include <_MMPFNLIST.h>
#include <_WORK_QUEUE_ITEM.h>
#include <_LIST_ENTRY.h>

//0x108 bytes (sizeof)
struct _MI_SLAB_ALLOCATOR_CONTEXT
{
    struct _RTL_RB_TREE AllocationsTree;                                    //0x0
    volatile LONG Lock;                                                     //0x10
    struct _MI_PARTITION* Partition;                                        //0x18
    struct _MI_SLAB_ALLOCATOR_ENTRY* SlabEntryAllocationHint;               //0x20
    struct _MI_SLAB_ALLOCATOR_ENTRY* SlabEntryFreeHint;                     //0x28
    ULONGLONG FreePageCount;                                                //0x30
    ULONGLONG AvailablePagesGoal;                                           //0x38
    ULONGLONG ChargedPageCount;                                             //0x40
    ULONGLONG SlabEntryCount;                                               //0x48
    enum _MI_SLAB_ALLOCATOR_TYPE Type;                                      //0x50
    struct _MI_NODE_NUMBER_ZERO_BASED NumaNodeIndex;                        //0x54
    union
    {
        ULONG EntryBecameEmpty:1;                                           //0x58
        ULONG DemoteInProgress:1;                                           //0x58
        ULONG ZeroedPages:1;                                                //0x58
        ULONG Spare:29;                                                     //0x58
        ULONG AllFlags;                                                     //0x58
    } Flags;                                                                //0x58
    ULONG SlabEntriesAllocated;                                             //0x5c
    ULONG SlabEntriesDemoted;                                               //0x60
    ULONG SlabEntriesFailedFast;                                            //0x64
    ULONG SlabEntriesFailedSlow;                                            //0x68
    ULONG SlabPagesFreedNonZeroed;                                          //0x6c
    struct _MMPFNLIST StandbyList;                                          //0x70
    ULONGLONG LastReplenishTime;                                            //0xc8
    ULONGLONG LastFailureTime;                                              //0xd0
    struct _WORK_QUEUE_ITEM ReplenishWorkItem;                              //0xd8
    struct _LIST_ENTRY ReplenishWaitList;                                   //0xf8
};
/* Used in */
// _MI_NODE_INFORMATION

