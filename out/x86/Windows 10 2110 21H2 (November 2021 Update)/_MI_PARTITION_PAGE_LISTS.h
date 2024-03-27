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
#include <_MI_SLAB_ALLOCATOR_CONTEXT.h>

//0x840 bytes (sizeof)
struct _MI_PARTITION_PAGE_LISTS
{
    struct _MMPFNLIST* FreePagesByColor[2];                                 //0x0
    struct _MMPFNLIST ZeroedPageListHead;                                   //0x40
    struct _MMPFNLIST FreePageListHead;                                     //0x80
    struct _MMPFNLIST StandbyPageListHead;                                  //0xc0
    struct _MMPFNLIST StandbyPageListByPriority[8];                         //0x100
    struct _MMPFNLIST ModifiedPageListNoReservation;                        //0x1c0
    struct _MMPFNLIST ModifiedPageListByReservation[16];                    //0x200
    struct _MMPFNLIST MappedPageListHead[4];                                //0x340
    struct _MMPFNLIST BadPageListHead;                                      //0x3c0
    struct _MMPFNLIST EnclavePageListHead;                                  //0x400
    union _SLIST_HEADER* FreePageSlist[2];                                  //0x414
    struct _MMPFNLIST* PageLocationList[8];                                 //0x41c
    volatile ULONG StandbyRepurposedByPriority[8];                          //0x43c
    volatile ULONG TransitionSharedPages;                                   //0x480
    ULONG TransitionSharedPagesPeak[6];                                     //0x484
    struct _KEVENT MappedPageListHeadEvent[4];                              //0x49c
    struct _MI_DECAY_TIMER_LINK DecayClusterTimerHeads[4];                  //0x4dc
    ULONG DecayHand;                                                        //0x4ec
    UCHAR StandbyListDiscard;                                               //0x4f0
    UCHAR FreeListDiscard;                                                  //0x4f1
    UCHAR PfnBitMapsReady;                                                  //0x4f2
    ULONGLONG LastDecayHandUpdateTime;                                      //0x4f8
    struct _MI_LDW_WORK_CONTEXT LastChanceLdwContext;                       //0x500
    ULONG AvailableEventsLock;                                              //0x540
    struct _MI_AVAILABLE_PAGE_WAIT_STATES AvailablePageWaitStates[3];       //0x544
    VOID* MirrorListLocks;                                                  //0x580
    volatile ULONG TransitionPrivatePages;                                  //0x5c0
    struct _RTL_BITMAP LargePfnBitMap[1];                                   //0x5c4
    struct _MI_FREE_LARGE_PAGE_LIST* LargePageListHeads;                    //0x5cc
    UCHAR* MediumPagesOnFreeZeroList;                                       //0x5d0
    struct _RTL_BITMAP LargePageRebuildCandidates;                          //0x5d4
    struct _KEVENT LargePageCandidatesExistEvent;                           //0x5dc
    ULONG LowMemoryThreshold;                                               //0x5ec
    ULONG HighMemoryThreshold;                                              //0x5f0
    struct _MI_SLAB_ALLOCATOR_CONTEXT SlabContexts[2][4];                   //0x5f8
    struct _RTL_BITMAP SlabPfnBitMap;                                       //0x838
};
/* Used in */
// _MI_PARTITION

