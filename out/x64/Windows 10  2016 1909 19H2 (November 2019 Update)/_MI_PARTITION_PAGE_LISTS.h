#pragma once
/* ------------------ */

#include <_MMPFNLIST.h>
#include <_SLIST_HEADER.h>
#include <_KEVENT.h>
#include <_MI_DECAY_TIMER_LINK.h>
#include <_MI_LDW_WORK_CONTEXT.h>
#include <_MI_AVAILABLE_PAGE_WAIT_STATES.h>
#include <_RTL_BITMAP_EX.h>
#include <_MI_FREE_LARGE_PAGE_LIST.h>
#include <_MI_LARGE_PAGE_CANDIDATES.h>
#include <_WORK_QUEUE_ITEM.h>
#include <_MI_SLAB_ALLOCATOR_CONTEXT.h>

//0x13c0 bytes (sizeof)
struct _MI_PARTITION_PAGE_LISTS
{
    struct _MMPFNLIST* FreePagesByColor[2];                                 //0x0
    struct _MMPFNLIST ZeroedPageListHead;                                   //0x40
    struct _MMPFNLIST FreePageListHead;                                     //0x80
    struct _MMPFNLIST StandbyPageListHead;                                  //0xc0
    struct _MMPFNLIST StandbyPageListByPriority[8];                         //0x100
    struct _MMPFNLIST ModifiedPageListNoReservation;                        //0x240
    struct _MMPFNLIST ModifiedPageListByReservation[16];                    //0x280
    struct _MMPFNLIST MappedPageListHead[16];                               //0x500
    struct _MMPFNLIST BadPageListHead;                                      //0x780
    struct _MMPFNLIST EnclavePageListHead;                                  //0x7c0
    union _SLIST_HEADER* FreePageSlist[2];                                  //0x7e8
    struct _MMPFNLIST* PageLocationList[8];                                 //0x7f8
    volatile ULONG StandbyRepurposedByPriority[8];                          //0x838
    volatile ULONGLONG TransitionSharedPages;                               //0x880
    ULONGLONG TransitionSharedPagesPeak[6];                                 //0x888
    struct _KEVENT MappedPageListHeadEvent[16];                             //0x8b8
    struct _MI_DECAY_TIMER_LINK DecayClusterTimerHeads[4];                  //0xa38
    ULONG DecayHand;                                                        //0xa58
    UCHAR StandbyListDiscard;                                               //0xa5c
    UCHAR FreeListDiscard;                                                  //0xa5d
    UCHAR PfnBitMapsReady;                                                  //0xa5e
    ULONGLONG LastDecayHandUpdateTime;                                      //0xa60
    struct _MI_LDW_WORK_CONTEXT LastChanceLdwContext;                       //0xa68
    ULONGLONG AvailableEventsLock;                                          //0xac0
    struct _MI_AVAILABLE_PAGE_WAIT_STATES AvailablePageWaitStates[3];       //0xac8
    VOID* MirrorListLocks;                                                  //0xb28
    volatile ULONGLONG TransitionPrivatePages;                              //0xb40
    struct _RTL_BITMAP_EX LargePfnBitMap[2];                                //0xb48
    struct _MI_FREE_LARGE_PAGE_LIST* LargePageListHeads;                    //0xb68
    struct _MI_LARGE_PAGE_CANDIDATES LargePageCandidates[2];                //0xb70
    struct _WORK_QUEUE_ITEM RebuildLargePageWorkItem;                       //0xf80
    UCHAR RebuildLargePageCandidates;                                       //0xfa0
    UCHAR RebuildLargePageActive;                                           //0xfa1
    volatile LONG LargePageRebuildLock;                                     //0xfa4
    ULONGLONG LowMemoryThreshold;                                           //0xfa8
    ULONGLONG HighMemoryThreshold;                                          //0xfb0
    struct _MI_SLAB_ALLOCATOR_CONTEXT SlabContexts[2][4];                   //0xfb8
    struct _RTL_BITMAP_EX SlabPfnBitMap;                                    //0x1378
    VOID* HugePfnLists;                                                     //0x1388
    ULONGLONG AvailableHugeIoRanges;                                        //0x1390
};
/* Used in */
// _MI_PARTITION
