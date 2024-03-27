#pragma once
/* ------------------ */

#include <_RTL_RB_TREE.h>
#include <_RTL_BALANCED_NODE.h>
#include <_KTIMER.h>
#include <_KDPC.h>

//0xc8 bytes (sizeof)
struct _MI_DRIVER_PAGES_ALLOCATE_STATE
{
    volatile LONG Lock;                                                     //0x0
    ULONG RangeBasedAllocationActive;                                       //0x4
    struct _RTL_RB_TREE RangesTree;                                         //0x8
    ULONGLONG CurrentRangePage;                                             //0x18
    ULONGLONG RangeRemainingPageCount;                                      //0x20
    struct _RTL_BALANCED_NODE* RangeEntryNodeCache;                         //0x28
    ULONGLONG NegativeCacheBasePage;                                        //0x30
    struct _KTIMER FinishTimer;                                             //0x38
    struct _KDPC FinishTimerDpc;                                            //0x78
    ULONGLONG PageCount;                                                    //0xb8
    ULONGLONG LastPage;                                                     //0xc0
};
/* Used in */
// _MI_SYSTEM_IMAGE_STATE

