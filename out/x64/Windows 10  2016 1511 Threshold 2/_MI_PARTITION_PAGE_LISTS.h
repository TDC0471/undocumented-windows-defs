#pragma once
/* ------------------ */

#include <_MMPFNLIST.h>
#include <_SLIST_HEADER.h>
#include <_KEVENT.h>
#include <_MI_DECAY_TIMER_LINK.h>
#include <_MI_LDW_WORK_CONTEXT.h>
#include <_MI_AVAILABLE_PAGE_WAIT_STATES.h>
#include <_MI_REBUILD_LARGE_PAGES.h>

//0xd00 bytes (sizeof)
struct _MI_PARTITION_PAGE_LISTS
{
    struct _MMPFNLIST* FreePagesByColor[2];                                 //0x0
    union _SLIST_HEADER* FreePageSlist[2];                                  //0x10
    struct _MMPFNLIST ZeroedPageListHead;                                   //0x40
    struct _MMPFNLIST FreePageListHead;                                     //0x80
    struct _MMPFNLIST StandbyPageListHead;                                  //0xc0
    struct _MMPFNLIST StandbyPageListByPriority[8];                         //0x100
    struct _MMPFNLIST ModifiedPageListNoReservation;                        //0x240
    struct _MMPFNLIST ModifiedPageListByReservation[16];                    //0x280
    struct _MMPFNLIST MappedPageListHead[16];                               //0x500
    struct _MMPFNLIST BadPageListHead;                                      //0x780
    struct _MMPFNLIST EnclavePageListHead;                                  //0x7c0
    struct _MMPFNLIST* PageLocationList[8];                                 //0x7e8
    volatile ULONG StandbyRepurposedByPriority[8];                          //0x828
    struct _KEVENT MappedPageListHeadEvent[16];                             //0x848
    struct _MI_DECAY_TIMER_LINK DecayClusterTimerHeads[4];                  //0x9c8
    ULONG DecayHand;                                                        //0x9e8
    ULONGLONG LastDecayHandUpdateTime;                                      //0x9f0
    struct _MI_LDW_WORK_CONTEXT LastChanceLdwContext;                       //0x9f8
    ULONGLONG AvailableEventsLock;                                          //0xa40
    struct _MI_AVAILABLE_PAGE_WAIT_STATES AvailablePageWaitStates[3];       //0xa48
    ULONGLONG LowMemoryThreshold;                                           //0xaa8
    ULONGLONG HighMemoryThreshold;                                          //0xab0
    volatile ULONGLONG TransitionPrivatePages;                              //0xac0
    ULONG StandbyListDiscard;                                               //0xac8
    UCHAR FreeListDiscard;                                                  //0xacc
    UCHAR RebuildLargePagesInitialized;                                     //0xacd
    struct _MI_REBUILD_LARGE_PAGES RebuildLargePagesItem;                   //0xad0
    VOID* MirrorListLocks;                                                  //0xcf8
};
/* Used in */
// _MI_PARTITION

