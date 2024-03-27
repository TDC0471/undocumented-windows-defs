#pragma once
/* ------------------ */

#include <_MMPFNLIST.h>
#include <_SLIST_HEADER.h>
#include <_KEVENT.h>
#include <_MI_DECAY_TIMER_LINK.h>
#include <_MI_LDW_WORK_CONTEXT.h>
#include <_MI_AVAILABLE_PAGE_WAIT_STATES.h>
#include <_MI_REBUILD_LARGE_PAGES.h>

//0x6c0 bytes (sizeof)
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
    struct _MMPFNLIST* PageLocationList[8];                                 //0x494
    volatile ULONG StandbyRepurposedByPriority[8];                          //0x4b4
    struct _KEVENT MappedPageListHeadEvent[16];                             //0x4d4
    struct _MI_DECAY_TIMER_LINK DecayClusterTimerHeads[4];                  //0x5d4
    ULONG DecayHand;                                                        //0x5e4
    ULONGLONG LastDecayHandUpdateTime;                                      //0x5e8
    struct _MI_LDW_WORK_CONTEXT LastChanceLdwContext;                       //0x5f0
    ULONG AvailableEventsLock;                                              //0x640
    struct _MI_AVAILABLE_PAGE_WAIT_STATES AvailablePageWaitStates[2];       //0x644
    ULONG LowMemoryThreshold;                                               //0x66c
    ULONG HighMemoryThreshold;                                              //0x670
    volatile ULONG TransitionPrivatePages;                                  //0x680
    UCHAR RebuildLargePagesInitialized;                                     //0x684
    struct _MI_REBUILD_LARGE_PAGES RebuildLargePagesItem;                   //0x688
};
/* Used in */
// _MI_PARTITION

