#pragma once
/* ------------------ */

#include <_NPAGED_LOOKASIDE_LIST.h>
#include <_SLIST_HEADER.h>
#include <_RTL_BITMAP_EX.h>
#include <_MI_CACHED_PTES.h>
#include <_MI_SYSTEM_PTE_TYPE.h>
#include <_RTL_AVL_TREE.h>
#include <_MMPFN.h>

//0x180 bytes (sizeof)
struct _MI_SYSTEM_PTE_STATE
{
    struct _NPAGED_LOOKASIDE_LIST MdlTrackerLookaside;                      //0x0
    union _SLIST_HEADER DeadPteTrackerSListHead;                            //0x80
    ULONGLONG PteTrackerLock;                                               //0x90
    struct _RTL_BITMAP_EX PteTrackingBitmap;                                //0x98
    struct _MI_CACHED_PTES* CachedPteHeads;                                 //0xa8
    struct _MI_SYSTEM_PTE_TYPE SystemViewPteInfo;                           //0xb0
    ULONG StackGrowthFailures;                                              //0x118
    UCHAR KernelStackPages;                                                 //0x11c
    UCHAR TrackPtesAborted;                                                 //0x11d
    UCHAR AdjustCounter;                                                    //0x11e
    volatile LONG ReservedMappingLock;                                      //0x120
    struct _RTL_AVL_TREE ReservedMappingTree;                               //0x128
    struct _MMPFN* ReservedMappingPageTablePfns;                            //0x130
    struct _RTL_AVL_TREE OutswappedKernelStackRoot;                         //0x138
    volatile LONG OutswappedKernelStackLock;                                //0x140
};
/* Used in */
// _MI_SYSTEM_INFORMATION

