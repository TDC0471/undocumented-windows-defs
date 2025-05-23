#pragma once
/* ------------------ */

#include <_RTL_RB_TREE.h>
#include <_MI_SLAB_ALLOCATOR_ENTRY.h>
#include <_MI_SLAB_ALLOCATOR_TYPE.h>
#include <_MMPFNLIST.h>

//0xa8 bytes (sizeof)
struct _MI_SLAB_ALLOCATOR_CONTEXT
{
    struct _RTL_RB_TREE AllocationsTree;                                    //0x0
    volatile LONG Lock;                                                     //0x10
    struct _MI_SLAB_ALLOCATOR_ENTRY* SlabEntryHint;                         //0x18
    ULONGLONG FreePageCount;                                                //0x20
    ULONGLONG SlabEntryCount;                                               //0x28
    enum _MI_SLAB_ALLOCATOR_TYPE Type;                                      //0x30
    ULONG NumaNodeIndex;                                                    //0x34
    union
    {
        ULONG EntryBecameEmpty:1;                                           //0x38
        ULONG Spare:31;                                                     //0x38
        ULONG AllFlags;                                                     //0x38
    } Flags;                                                                //0x38
    struct _MMPFNLIST StandbyList;                                          //0x40
    ULONGLONG LastReplenishTime;                                            //0x98
    ULONGLONG LastFailureTime;                                              //0xa0
};
/* Used in */
// _MI_NODE_INFORMATION

