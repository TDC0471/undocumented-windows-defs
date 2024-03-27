#pragma once
/* ------------------ */

#include <_THREAD_PERFORMANCE_DATA.h>
#include <_COUNTER_READING.h>

//0x1a8 bytes (sizeof)
struct _KTHREAD_COUNTERS
{
    ULONGLONG WaitReasonBitMap;                                             //0x0
    struct _THREAD_PERFORMANCE_DATA* UserData;                              //0x8
    ULONG Flags;                                                            //0xc
    ULONG ContextSwitches;                                                  //0x10
    ULONGLONG CycleTimeBias;                                                //0x18
    ULONGLONG HardwareCounters;                                             //0x20
    struct _COUNTER_READING HwCounter[16];                                  //0x28
};
/* Used in */
// _KTHREAD

