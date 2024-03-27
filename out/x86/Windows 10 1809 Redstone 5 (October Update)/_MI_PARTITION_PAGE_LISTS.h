#pragma once
/* ------------------ */

#include <_MMPFNLIST.h>
#include <_SLIST_HEADER.h>
#include <_KEVENT.h>
#include <_MI_DECAY_TIMER_LINK.h>
#include <_MI_LDW_WORK_CONTEXT.h>
#include <_MI_AVAILABLE_PAGE_WAIT_STATES.h>
#include <_RTL_BITMAP.h>
#include <_MI_FREE_LARGE_PAGE_LIST.h>
#include <_MI_LARGE_PAGE_CANDIDATES.h>
#include <_WORK_QUEUE_ITEM.h>
#include <_MI_SLAB_ALLOCATOR_CONTEXT.h>

//0x940 bytes (sizeof)
struct _MI_PARTITION_PAGE_LISTS
{
    struct _MMPFNLIST* FreePagesByColor[2];                                 //0x0
    struct _MMPFNLIST ZeroedPageListHead;                                   //0x40
    struct _MMPFNLIST FreePageListHead;                                     //0x80
    struct _MMPFNLIST StandbyPageListHead;                                  //0xc0
    struct _MMPFNLIST StandbyPageListByPriority[8];                         //0x100
    struct _MMPFNLIST ModifiedPageListNoReservation;                        //0x1c0
    struct _MMPFNLIST ModifiedPageListByReservation[16];                    //0x200
    struct _MMPFNLIST MappedPageListHead[16];                               //0x340
    struct _MMPFNLIST BadPageListHead;                                      //0x480
    struct _MMPFNLIST EnclavePageListHead;                                  //0x4c0
    union _SLIST_HEADER* FreePageSlist[2];                                  //0x4d4
    struct _MMPFNLIST* PageLocationList[8];                                 //0x4dc
    volatile ULONG StandbyRepurposedByPriority[8];                          //0x4fc
    volatile ULONG TransitionSharedPages;                                   //0x540
    ULONG TransitionSharedPagesPeak[6];                                     //0x544
    struct _KEVENT MappedPageListHeadEvent[16];                             //0x55c
    struct _MI_DECAY_TIMER_LINK DecayClusterTimerHeads[4];                  //0x65c
    ULONG DecayHand;                                                        //0x66c
    UCHAR StandbyListDiscard;                                               //0x670
    UCHAR FreeListDiscard;                                                  //0x671
    UCHAR PfnBitMapsReady;                                                  //0x672
    ULONGLONG LastDecayHandUpdateTime;                                      //0x678
    struct _MI_LDW_WORK_CONTEXT LastChanceLdwContext;                       //0x680
    ULONG AvailableEventsLock;                                              //0x6c0
    struct _MI_AVAILABLE_PAGE_WAIT_STATES AvailablePageWaitStates[3];       //0x6c4
    VOID* MirrorListLocks;                                                  //0x700
    volatile ULONG TransitionPrivatePages;                                  //0x740
    struct _RTL_BITMAP LargePfnBitMap[1];                                   //0x744
    struct _MI_FREE_LARGE_PAGE_LIST* LargePageListHeads;                    //0x74c
    struct _MI_LARGE_PAGE_CANDIDATES LargePageCandidates[1];                //0x750
    struct _WORK_QUEUE_ITEM RebuildLargePageWorkItem;                       //0x858
    UCHAR RebuildLargePageActive;                                           //0x868
    volatile LONG LargePageRebuildLock;                                     //0x86c
    ULONG LowMemoryThreshold;                                               //0x870
    ULONG HighMemoryThreshold;                                              //0x874
    struct _MI_SLAB_ALLOCATOR_CONTEXT SlabContexts[3];                      //0x878
    struct _RTL_BITMAP SlabPfnBitMap;                                       //0x908
};
/* Used in */
// _MI_PARTITION

