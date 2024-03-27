#pragma once
/* ------------------ */

#include <_SLIST_HEADER.h>
#include <_NPAGED_LOOKASIDE_LIST.h>
#include <_RTL_BITMAP_EX.h>
#include <_MI_CACHED_PTES.h>
#include <_MI_SYSTEM_PTE_TYPE.h>
#include <_MI_QUEUED_DEADSTACK_WORKITEM.h>

//0x180 bytes (sizeof)
struct _MI_SYSTEM_PTE_STATE
{
    union _SLIST_HEADER DeadPteTrackerSListHead;                            //0x0
    ULONGLONG PteTrackerLock;                                               //0x10
    struct _NPAGED_LOOKASIDE_LIST MdlTrackerLookaside;                      //0x40
    struct _RTL_BITMAP_EX PteTrackingBitmap;                                //0xc0
    struct _MI_CACHED_PTES* CachedPteHeads;                                 //0xd0
    struct _MI_SYSTEM_PTE_TYPE SystemViewPteInfo;                           //0xd8
    UCHAR KernelStackPages;                                                 //0x138
    union _SLIST_HEADER QueuedStacks;                                       //0x140
    ULONG StackGrowthFailures;                                              //0x150
    UCHAR TrackPtesAborted;                                                 //0x154
    UCHAR AdjustCounter;                                                    //0x155
    struct _MI_QUEUED_DEADSTACK_WORKITEM QueuedStacksWorkItem;              //0x158
};
/* Used in */
// _MI_SYSTEM_INFORMATION

