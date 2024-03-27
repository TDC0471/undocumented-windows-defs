#pragma once
/* ------------------ */

#include <_NPAGED_LOOKASIDE_LIST.h>
#include <_SLIST_HEADER.h>
#include <_RTL_BITMAP_EX.h>
#include <_MI_CACHED_PTES.h>
#include <_MI_SYSTEM_PTE_TYPE.h>
#include <_RTL_AVL_TREE.h>
#include <_MMPFN.h>
#include <_MI_ULTRA_VA_CONTEXT.h>
#include <_MI_ULTRA_MDL_NODE.h>

//0x240 bytes (sizeof)
struct _MI_SYSTEM_PTE_STATE
{
    struct _NPAGED_LOOKASIDE_LIST MdlTrackerLookaside;                      //0x0
    union _SLIST_HEADER DeadPteTrackerSListHead;                            //0x80
    ULONGLONG PteTrackerLock;                                               //0x90
    struct _RTL_BITMAP_EX PteTrackingBitmap;                                //0x98
    struct _MI_CACHED_PTES* CachedPteHeads;                                 //0xa8
    struct _MI_CACHED_PTES* CachedKernelStackPteHeads;                      //0xb0
    struct _MI_SYSTEM_PTE_TYPE SystemViewPteInfo;                           //0xb8
    struct _MI_SYSTEM_PTE_TYPE KernelStackPteInfo;                          //0x120
    ULONG StackGrowthFailures;                                              //0x188
    UCHAR KernelStackPages;                                                 //0x18c
    UCHAR TrackPtesAborted;                                                 //0x18d
    UCHAR AdjustCounter;                                                    //0x18e
    volatile LONG ReservedMappingLock;                                      //0x190
    struct _RTL_AVL_TREE ReservedMappingTree;                               //0x198
    struct _MMPFN* ReservedMappingPageTablePfns;                            //0x1a0
    struct _RTL_AVL_TREE OutswappedKernelStackRoot;                         //0x1a8
    volatile LONG OutswappedKernelStackLock;                                //0x1b0
    struct _MI_ULTRA_VA_CONTEXT UltraSpaceContext;                          //0x1b8
    ULONG NumberOfUltraMdlMaps;                                             //0x1f8
    struct _MI_ULTRA_MDL_NODE* UltraMdlNodeMappings;                        //0x200
};
/* Used in */
// _MI_SYSTEM_INFORMATION

