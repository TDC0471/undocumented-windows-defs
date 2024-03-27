#pragma once
/* ------------------ */

#include <_MMPFNLIST.h>
#include <_SLIST_HEADER.h>
#include <_KEVENT.h>
#include <_MI_STANDBY_LOOKASIDE.h>
#include <_MI_DECAY_TIMER_LINK.h>
#include <_MI_LDW_WORK_CONTEXT.h>
#include <_MI_AVAILABLE_PAGE_WAIT_STATES.h>
#include <_RTL_BITMAP_EX.h>
#include <_MI_FREE_LARGE_PAGE_LIST.h>
#include <_LIST_ENTRY.h>

//0x3500 bytes (sizeof)
struct _MI_PARTITION_PAGE_LISTS
{
    struct _MMPFNLIST* FreePagesByColor[2];                                 //0x0
    struct _MMPFNLIST ZeroedPageListHead;                                   //0x40
    struct _MMPFNLIST FreePageListHead;                                     //0xc0
    struct _MMPFNLIST StandbyPageListHead;                                  //0x140
    struct _MMPFNLIST StandbyPageListByPriority[8];                         //0x1c0
    struct _MMPFNLIST ModifiedPageListNoReservation;                        //0x480
    struct _MMPFNLIST ModifiedPageListByReservation[16];                    //0x500
    struct _MMPFNLIST MappedPageListHead[16];                               //0xa80
    struct _MMPFNLIST BadPageListHead;                                      //0x1000
    union _SLIST_HEADER* FreePageSlist[2];                                  //0x1058
    struct _MMPFNLIST* PageLocationList[8];                                 //0x1068
    volatile ULONG StandbyRepurposedByPriority[8];                          //0x10a8
    volatile ULONGLONG TransitionSharedPages;                               //0x1100
    ULONGLONG TransitionSharedPagesPeak[6];                                 //0x1108
    struct _KEVENT MappedPageListHeadEvent[16];                             //0x1138
    struct _MI_STANDBY_LOOKASIDE OldestStandbyPageCache[8];                 //0x12c0
    struct _MI_STANDBY_LOOKASIDE NewestStandbyPageCache[8];                 //0x22c0
    ULONGLONG NewestStandbyPageCacheInserts[2][8];                          //0x32c0
    struct _MI_DECAY_TIMER_LINK DecayClusterTimerHeads[4];                  //0x3340
    ULONG DecayHand;                                                        //0x3360
    UCHAR StandbyListDiscard;                                               //0x3364
    UCHAR FreeListDiscard;                                                  //0x3365
    UCHAR PfnBitMapsReady;                                                  //0x3366
    ULONGLONG LastDecayHandUpdateTime;                                      //0x3368
    struct _MI_LDW_WORK_CONTEXT LastChanceLdwContext;                       //0x3370
    ULONGLONG AvailableEventsLock;                                          //0x33c0
    struct _MI_AVAILABLE_PAGE_WAIT_STATES AvailablePageWaitStates[3];       //0x33c8
    volatile ULONGLONG TransitionPrivatePages;                              //0x3440
    struct _RTL_BITMAP_EX LargePfnBitMap[2];                                //0x3448
    struct _MI_FREE_LARGE_PAGE_LIST* LargePageListHeads;                    //0x3468
    volatile CHAR* MediumPagesOnFreeZeroList;                               //0x3470
    struct _RTL_BITMAP_EX LargePageRebuildCandidates;                       //0x3478
    volatile SHORT* LargePagesOnFreeZeroList;                               //0x3488
    volatile LONG HugePageRebuildCandidatesExist;                           //0x3490
    volatile LONG ProcessLargePageCacheLock;                                //0x3494
    struct _LIST_ENTRY ProcessLargePageCacheLinks;                          //0x3498
    ULONG ProcessLargePageCachePeriodicCount;                               //0x34a8
    struct _KEVENT LargePageCandidatesExistEvent;                           //0x34b0
    ULONGLONG LowMemoryThreshold;                                           //0x34c8
    ULONGLONG HighMemoryThreshold;                                          //0x34d0
    struct _RTL_BITMAP_EX SlabPfnBitMap;                                    //0x34d8
    UCHAR SlabPagesNotAvailable[7];                                         //0x34e8
    VOID* HugePfnLists;                                                     //0x34f0
    ULONGLONG AvailableHugeIoRanges;                                        //0x34f8
};
/* Used in */
// _MI_PARTITION

