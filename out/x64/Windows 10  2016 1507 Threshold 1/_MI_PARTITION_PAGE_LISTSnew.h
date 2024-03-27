#pragma once
/* ------------------ */

#include <_MMPFNLIST.h>
#include <_SLIST_HEADER.h>
#include <_KEVENT.h>
#include <_MI_DECAY_TIMER_LINK.h>
#include <_MI_LDW_WORK_CONTEXT.h>
#include <_MI_AVAILABLE_PAGE_WAIT_STATES.h>
#include <_MI_REBUILD_LARGE_PAGES.h>

//0xcc0 bytes (sizeof)
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
    struct _MMPFNLIST* PageLocationList[8];                                 //0x7a8
    volatile ULONG StandbyRepurposedByPriority[8];                          //0x7e8
    struct _KEVENT MappedPageListHeadEvent[16];                             //0x808
    struct _MI_DECAY_TIMER_LINK DecayClusterTimerHeads[4];                  //0x988
    ULONG DecayHand;                                                        //0x9a8
    ULONGLONG LastDecayHandUpdateTime;                                      //0x9b0
    struct _MI_LDW_WORK_CONTEXT LastChanceLdwContext;                       //0x9b8
    ULONGLONG AvailableEventsLock;                                          //0xa00
    struct _MI_AVAILABLE_PAGE_WAIT_STATES AvailablePageWaitStates[2];       //0xa08
    ULONGLONG LowMemoryThreshold;                                           //0xa48
    ULONGLONG HighMemoryThreshold;                                          //0xa50
    volatile ULONGLONG TransitionPrivatePages;                              //0xa80
    UCHAR RebuildLargePagesInitialized;                                     //0xa88
    struct _MI_REBUILD_LARGE_PAGES RebuildLargePagesItem;                   //0xa90
};
/* Used in */
// _MI_PARTITION

