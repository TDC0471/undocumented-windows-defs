#pragma once
/* ------------------ */

#include <_MMPFNLIST.h>
#include <_SLIST_HEADER.h>
#include <_KEVENT.h>
#include <_MI_DECAY_TIMER_LINK.h>
#include <_MI_LDW_WORK_CONTEXT.h>
#include <_MI_AVAILABLE_PAGE_WAIT_STATES.h>
#include <_RTL_BITMAP.h>

//0x7c0 bytes (sizeof)
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
    ULONG TransitionSharedPagesPeak[3];                                     //0x544
    struct _KEVENT MappedPageListHeadEvent[16];                             //0x550
    struct _MI_DECAY_TIMER_LINK DecayClusterTimerHeads[4];                  //0x650
    ULONG DecayHand;                                                        //0x660
    UCHAR StandbyListDiscard;                                               //0x664
    UCHAR FreeListDiscard;                                                  //0x665
    UCHAR LargePfnBitMapsReady;                                             //0x666
    ULONGLONG LastDecayHandUpdateTime;                                      //0x668
    struct _MI_LDW_WORK_CONTEXT LastChanceLdwContext;                       //0x670
    ULONG AvailableEventsLock;                                              //0x6c0
    struct _MI_AVAILABLE_PAGE_WAIT_STATES AvailablePageWaitStates[3];       //0x6c4
    VOID* MirrorListLocks;                                                  //0x700
    volatile ULONG TransitionPrivatePages;                                  //0x740
    struct _RTL_BITMAP LargePfnBitMap[1];                                   //0x744
    ULONG LowMemoryThreshold;                                               //0x74c
    ULONG HighMemoryThreshold;                                              //0x750
    ULONG LargePfnBitMapLock;                                               //0x780
};
/* Used in */
// _MI_PARTITION

