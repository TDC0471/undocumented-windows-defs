#pragma once
/* ------------------ */

#include <_KCLOCK_TIMER_ONE_SHOT_STATE.h>
#include <_KCLOCK_TIMER_DEADLINE_TYPE.h>
#include <_KCLOCK_TIMER_DEADLINE_ENTRY.h>
#include <_KCLOCK_TICK_TRACE.h>
#include <_KCLOCK_INCREMENT_TRACE.h>

//0x518 bytes (sizeof)
struct _KCLOCK_TIMER_STATE
{
    ULONGLONG NextTickDueTime;                                              //0x0
    ULONG TimeIncrement;                                                    //0x8
    ULONG LastRequestedTimeIncrement;                                       //0xc
    enum _KCLOCK_TIMER_ONE_SHOT_STATE OneShotState;                         //0x10
    enum _KCLOCK_TIMER_DEADLINE_TYPE ExpectedWakeReason;                    //0x14
    struct _KCLOCK_TIMER_DEADLINE_ENTRY ClockTimerEntries[7];               //0x18
    UCHAR ClockActive;                                                      //0x88
    ULONG ClockTickTraceIndex;                                              //0x8c
    ULONG ClockIncrementTraceIndex;                                         //0x90
    struct _KCLOCK_TICK_TRACE ClockTickTraces[16];                          //0x98
    struct _KCLOCK_INCREMENT_TRACE ClockIncrementTraces[16];                //0x318
};
/* Used in */
// _KPRCB

