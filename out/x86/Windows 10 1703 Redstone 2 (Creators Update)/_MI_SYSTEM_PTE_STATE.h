#pragma once
/* ------------------ */

#include <_NPAGED_LOOKASIDE_LIST.h>
#include <_SLIST_HEADER.h>
#include <_RTL_BITMAP.h>
#include <_MI_CACHED_PTES.h>
#include <_MI_SYSTEM_PTE_TYPE.h>
#include <_RTL_AVL_TREE.h>
#include <_MMPFN.h>

//0x140 bytes (sizeof)
struct _MI_SYSTEM_PTE_STATE
{
    struct _NPAGED_LOOKASIDE_LIST MdlTrackerLookaside;                      //0x0
    union _SLIST_HEADER DeadPteTrackerSListHead;                            //0xc0
    ULONG PteTrackerLock;                                                   //0xc8
    struct _RTL_BITMAP PteTrackingBitmap;                                   //0xcc
    struct _MI_CACHED_PTES* CachedPteHeads;                                 //0xd4
    struct _MI_SYSTEM_PTE_TYPE SystemViewPteInfo;                           //0xd8
    ULONG StackGrowthFailures;                                              //0x110
    UCHAR KernelStackPages;                                                 //0x114
    UCHAR TrackPtesAborted;                                                 //0x115
    UCHAR AdjustCounter;                                                    //0x116
    volatile LONG ReservedMappingLock;                                      //0x118
    struct _RTL_AVL_TREE ReservedMappingTree;                               //0x11c
    struct _MMPFN* ReservedMappingPageTablePfns;                            //0x120
    struct _RTL_AVL_TREE OutswappedKernelStackRoot;                         //0x124
    volatile LONG OutswappedKernelStackLock;                                //0x128
};
/* Used in */
// _MI_SYSTEM_INFORMATION

