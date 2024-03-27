#pragma once
/* ------------------ */

#include <_NPAGED_LOOKASIDE_LIST.h>
#include <_SLIST_HEADER.h>
#include <_RTL_BITMAP.h>
#include <_MI_CACHED_PTES.h>
#include <_MI_SYSTEM_PTE_TYPE.h>
#include <_RTL_AVL_TREE.h>
#include <_MMPFN.h>

//0x180 bytes (sizeof)
struct _MI_SYSTEM_PTE_STATE
{
    struct _NPAGED_LOOKASIDE_LIST MdlTrackerLookaside;                      //0x0
    union _SLIST_HEADER DeadPteTrackerSListHead;                            //0xc0
    ULONG PteTrackerLock;                                                   //0xc8
    struct _RTL_BITMAP PteTrackingBitmap;                                   //0xcc
    struct _MI_CACHED_PTES* CachedPteHeads;                                 //0xd4
    struct _MI_CACHED_PTES* CachedKernelStackPteHeads;                      //0xd8
    struct _MI_SYSTEM_PTE_TYPE SystemViewPteInfo;                           //0xdc
    struct _MI_SYSTEM_PTE_TYPE KernelStackPteInfo;                          //0x114
    ULONG StackGrowthFailures;                                              //0x14c
    UCHAR KernelStackPages;                                                 //0x150
    UCHAR TrackPtesAborted;                                                 //0x151
    UCHAR AdjustCounter;                                                    //0x152
    volatile LONG ReservedMappingLock;                                      //0x154
    struct _RTL_AVL_TREE ReservedMappingTree;                               //0x158
    struct _MMPFN* ReservedMappingPageTablePfns;                            //0x15c
    struct _RTL_AVL_TREE OutswappedKernelStackRoot;                         //0x160
    volatile LONG OutswappedKernelStackLock;                                //0x164
};
/* Used in */
// _MI_SYSTEM_INFORMATION

