#pragma once
/* ------------------ */

#include <_SLIST_HEADER.h>
#include <_NPAGED_LOOKASIDE_LIST.h>
#include <_RTL_BITMAP_EX.h>
#include <_MI_CACHED_PTES.h>
#include <_MI_SYSTEM_PTE_TYPE.h>
#include <_RTL_AVL_TREE.h>
#include <_MMPFN.h>
#include <_MI_QUEUED_DEADSTACK_WORKITEM.h>

//0x1c0 bytes (sizeof)
struct _MI_SYSTEM_PTE_STATE
{
    union _SLIST_HEADER DeadPteTrackerSListHead;                            //0x0
    ULONGLONG PteTrackerLock;                                               //0x10
    struct _NPAGED_LOOKASIDE_LIST MdlTrackerLookaside;                      //0x40
    struct _RTL_BITMAP_EX PteTrackingBitmap;                                //0xc0
    struct _MI_CACHED_PTES* CachedPteHeads;                                 //0xd0
    struct _MI_SYSTEM_PTE_TYPE SystemViewPteInfo;                           //0xd8
    UCHAR KernelStackPages;                                                 //0x140
    union _SLIST_HEADER QueuedStacks;                                       //0x150
    ULONG StackGrowthFailures;                                              //0x160
    UCHAR TrackPtesAborted;                                                 //0x164
    UCHAR AdjustCounter;                                                    //0x165
    volatile LONG ReservedMappingLock;                                      //0x168
    struct _RTL_AVL_TREE ReservedMappingTree;                               //0x170
    struct _MMPFN* ReservedMappingPageTablePfns;                            //0x178
    struct _MI_QUEUED_DEADSTACK_WORKITEM QueuedStacksWorkItem;              //0x180
};
/* Used in */
// _MI_SYSTEM_INFORMATION

