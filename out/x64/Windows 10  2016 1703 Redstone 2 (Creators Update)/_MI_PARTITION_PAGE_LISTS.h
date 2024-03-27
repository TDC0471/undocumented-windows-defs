#pragma once
/* ------------------ */

#include <_MMPFNLIST.h>
#include <_SLIST_HEADER.h>
#include <_KEVENT.h>
#include <_MI_DECAY_TIMER_LINK.h>
#include <_MI_LDW_WORK_CONTEXT.h>
#include <_MI_AVAILABLE_PAGE_WAIT_STATES.h>
#include <_RTL_BITMAP_EX.h>

//0xbc0 bytes (sizeof)
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
    ULONGLONG TransitionSharedPagesPeak[3];                                 //0x888
    struct _KEVENT MappedPageListHeadEvent[16];                             //0x8a0
    struct _MI_DECAY_TIMER_LINK DecayClusterTimerHeads[4];                  //0xa20
    ULONG DecayHand;                                                        //0xa40
    UCHAR StandbyListDiscard;                                               //0xa44
    UCHAR FreeListDiscard;                                                  //0xa45
    UCHAR LargePfnBitMapsReady;                                             //0xa46
    ULONGLONG LastDecayHandUpdateTime;                                      //0xa48
    struct _MI_LDW_WORK_CONTEXT LastChanceLdwContext;                       //0xa50
    ULONGLONG AvailableEventsLock;                                          //0xac0
    struct _MI_AVAILABLE_PAGE_WAIT_STATES AvailablePageWaitStates[3];       //0xac8
    VOID* MirrorListLocks;                                                  //0xb28
    volatile ULONGLONG TransitionPrivatePages;                              //0xb40
    struct _RTL_BITMAP_EX LargePfnBitMap[2];                                //0xb48
    ULONGLONG LowMemoryThreshold;                                           //0xb68
    ULONGLONG HighMemoryThreshold;                                          //0xb70
    ULONGLONG LargePfnBitMapLock;                                           //0xb80
};
/* Used in */
// _MI_PARTITION

