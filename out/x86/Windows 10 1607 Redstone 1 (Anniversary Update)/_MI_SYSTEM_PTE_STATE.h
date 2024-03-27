#pragma once
/* ------------------ */

#include <_SLIST_HEADER.h>
#include <_NPAGED_LOOKASIDE_LIST.h>
#include <_RTL_BITMAP.h>
#include <_MI_CACHED_PTES.h>
#include <_MI_SYSTEM_PTE_TYPE.h>
#include <_RTL_AVL_TREE.h>
#include <_MMPFN.h>
#include <_MI_QUEUED_DEADSTACK_WORKITEM.h>

//0x180 bytes (sizeof)
struct _MI_SYSTEM_PTE_STATE
{
    union _SLIST_HEADER DeadPteTrackerSListHead;                            //0x0
    ULONG PteTrackerLock;                                                   //0x8
    struct _NPAGED_LOOKASIDE_LIST MdlTrackerLookaside;                      //0x40
    struct _RTL_BITMAP PteTrackingBitmap;                                   //0x100
    struct _MI_CACHED_PTES* CachedPteHeads;                                 //0x108
    struct _MI_SYSTEM_PTE_TYPE SystemViewPteInfo;                           //0x10c
    UCHAR KernelStackPages;                                                 //0x144
    union _SLIST_HEADER QueuedStacks;                                       //0x148
    ULONG StackGrowthFailures;                                              //0x150
    UCHAR TrackPtesAborted;                                                 //0x154
    UCHAR AdjustCounter;                                                    //0x155
    volatile LONG ReservedMappingLock;                                      //0x158
    struct _RTL_AVL_TREE ReservedMappingTree;                               //0x15c
    struct _MMPFN* ReservedMappingPageTablePfns;                            //0x160
    struct _MI_QUEUED_DEADSTACK_WORKITEM QueuedStacksWorkItem;              //0x164
};
/* Used in */
// _MI_SYSTEM_INFORMATION

