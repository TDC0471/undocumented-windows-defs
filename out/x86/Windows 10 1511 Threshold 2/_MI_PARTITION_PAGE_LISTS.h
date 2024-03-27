#pragma once
/* ------------------ */

#include <_MMPFNLIST.h>
#include <_SLIST_HEADER.h>
#include <_KEVENT.h>
#include <_MI_DECAY_TIMER_LINK.h>
#include <_MI_LDW_WORK_CONTEXT.h>
#include <_MI_AVAILABLE_PAGE_WAIT_STATES.h>
#include <_MI_REBUILD_LARGE_PAGES.h>

//0x780 bytes (sizeof)
struct _MI_PARTITION_PAGE_LISTS
{
    struct _MMPFNLIST* FreePagesByColor[2];                                 //0x0
    union _SLIST_HEADER* FreePageSlist[2];                                  //0x8
    struct _MMPFNLIST ZeroedPageListHead;                                   //0x40
    struct _MMPFNLIST FreePageListHead;                                     //0x80
    struct _MMPFNLIST StandbyPageListHead;                                  //0xc0
    struct _MMPFNLIST StandbyPageListByPriority[8];                         //0x100
    struct _MMPFNLIST ModifiedPageListNoReservation;                        //0x1c0
    struct _MMPFNLIST ModifiedPageListByReservation[16];                    //0x200
    struct _MMPFNLIST MappedPageListHead[16];                               //0x340
    struct _MMPFNLIST BadPageListHead;                                      //0x480
    struct _MMPFNLIST EnclavePageListHead;                                  //0x4c0
    struct _MMPFNLIST* PageLocationList[8];                                 //0x4d4
    volatile ULONG StandbyRepurposedByPriority[8];                          //0x4f4
    struct _KEVENT MappedPageListHeadEvent[16];                             //0x514
    struct _MI_DECAY_TIMER_LINK DecayClusterTimerHeads[4];                  //0x614
    ULONG DecayHand;                                                        //0x624
    ULONGLONG LastDecayHandUpdateTime;                                      //0x628
    struct _MI_LDW_WORK_CONTEXT LastChanceLdwContext;                       //0x630
    ULONG AvailableEventsLock;                                              //0x680
    struct _MI_AVAILABLE_PAGE_WAIT_STATES AvailablePageWaitStates[3];       //0x684
    ULONG LowMemoryThreshold;                                               //0x6c0
    ULONG HighMemoryThreshold;                                              //0x6c4
    volatile ULONG TransitionPrivatePages;                                  //0x700
    ULONG StandbyListDiscard;                                               //0x704
    UCHAR FreeListDiscard;                                                  //0x708
    UCHAR RebuildLargePagesInitialized;                                     //0x709
    struct _MI_REBUILD_LARGE_PAGES RebuildLargePagesItem;                   //0x70c
    VOID* MirrorListLocks;                                                  //0x740
};
/* Used in */
// _MI_PARTITION

