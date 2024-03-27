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

//0x3640 bytes (sizeof)
struct _MI_PARTITION_PAGE_LISTS
{
    struct _MMPFNLIST* FreePagesByColor[2];                                 //0x0
    struct _MMPFNLIST ZeroedPageListHead;                                   //0x40
    struct _MMPFNLIST FreePageListHead;                                     //0xc0
    struct _MMPFNLIST StandbyPageListHead;                                  //0x140
    struct _MMPFNLIST StandbyPageListByPriority[8];                         //0x1c0
    struct _MMPFNLIST ModifiedPageListNoReservation;                        //0x480
    struct _MMPFNLIST ModifiedPageListNoReservationCompress;                //0x500
    struct _MMPFNLIST ModifiedPageListByReservation[16];                    //0x580
    struct _MMPFNLIST MappedPageListHead[16];                               //0xb00
    struct _MMPFNLIST BadPageListHead;                                      //0x1080
    union _SLIST_HEADER* FreePageSlist[2];                                  //0x10d8
    struct _MMPFNLIST* PageLocationList[8];                                 //0x10e8
    volatile ULONG StandbyRepurposedByPriority[8];                          //0x1128
    volatile ULONGLONG TransitionSharedPages;                               //0x1180
    ULONGLONG TransitionSharedPagesPeak[6];                                 //0x1188
    struct _KEVENT MappedPageListHeadEvent[16];                             //0x11b8
    struct _MI_STANDBY_LOOKASIDE OldestStandbyPageCache[8];                 //0x1340
    struct _MI_STANDBY_LOOKASIDE NewestStandbyPageCache[8];                 //0x2340
    ULONGLONG NewestStandbyPageCacheInserts[2][8];                          //0x3340
    struct _MI_DECAY_TIMER_LINK DecayClusterTimerHeads[4];                  //0x33c0
    ULONG DecayHand;                                                        //0x33e0
    UCHAR StandbyListDiscard;                                               //0x33e4
    UCHAR FreeListDiscard;                                                  //0x33e5
    UCHAR PfnBitMapsReady;                                                  //0x33e6
    ULONGLONG LastDecayHandUpdateTime;                                      //0x33e8
    struct _MI_LDW_WORK_CONTEXT LastChanceLdwContext;                       //0x33f0
    ULONGLONG AvailableEventsLock;                                          //0x3440
    struct _MI_AVAILABLE_PAGE_WAIT_STATES AvailablePageWaitStates[3];       //0x3448
    volatile ULONGLONG TransitionPrivatePages;                              //0x34c0
    struct _RTL_BITMAP_EX LargePfnBitMap[2];                                //0x34c8
    struct _MI_FREE_LARGE_PAGE_LIST* LargePageListHeads;                    //0x34e8
    volatile CHAR* MediumPagesOnFreeZeroList;                               //0x34f0
    struct _RTL_BITMAP_EX LargePageRebuildCandidates;                       //0x34f8
    volatile SHORT* LargePagesOnFreeZeroList;                               //0x3508
    volatile LONG HugePageRebuildCandidatesExist;                           //0x3510
    volatile LONG ProcessLargePageCacheLock;                                //0x3514
    struct _LIST_ENTRY ProcessLargePageCacheLinks;                          //0x3518
    ULONG ProcessLargePageCachePeriodicCount;                               //0x3528
    struct _KEVENT LargePageCandidatesExistEvent;                           //0x3530
    ULONGLONG LowMemoryConfiguredThreshold;                                 //0x3548
    ULONGLONG HighMemoryConfiguredThreshold;                                //0x3550
    ULONGLONG LowMemoryThreshold;                                           //0x3558
    ULONGLONG HighMemoryThreshold;                                          //0x3560
    struct _RTL_BITMAP_EX SlabPfnBitMap[2];                                 //0x3568
    UCHAR SlabPagesNotAvailable[7];                                         //0x3588
    VOID* HugePfnLists;                                                     //0x3590
    ULONGLONG AvailableHugeIoRanges;                                        //0x3598
    ULONGLONG SlabEntriesDemoted;                                           //0x35a0
    volatile LONG SlabDemoteInProgress;                                     //0x35a8
    ULONG SlabTypeAcquiresCharges;                                          //0x35ac
    ULONGLONG DriverPageCount;                                              //0x35b0
    ULONGLONG DriverLastPage;                                               //0x35b8
    ULONGLONG DriverNonSlabAttempted;                                       //0x35c0
    ULONGLONG DriverSlabLastFailTime;                                       //0x35c8
    ULONGLONG MdlPagesByListsTotal;                                         //0x35d0
    ULONGLONG MdlPagesByListsFromSlab;                                      //0x35d8
    ULONGLONG MdlPagesByListsSlabNotEligible;                               //0x35e0
    ULONGLONG MdlPagesPreferContiguousSlabEligible;                         //0x35e8
    ULONGLONG MdlPagesPreferContiguousFromSlab;                             //0x35f0
    ULONGLONG MdlSlabPagesFreeZeroedTotal;                                  //0x35f8
    ULONG MdlSlabPagesFreeZeroedBuckets[4];                                 //0x3600
    ULONGLONG SystemPageTablePagesNoSlab;                                   //0x3610
};
/* Used in */
// _MI_PARTITION

