#pragma once
/* ------------------ */

#include <_PROCESSOR_NUMBER.h>
#include <_COUNTER_READING.h>

//0x1c0 bytes (sizeof)
struct _THREAD_PERFORMANCE_DATA
{
    USHORT Size;                                                            //0x0
    USHORT Version;                                                         //0x2
    struct _PROCESSOR_NUMBER ProcessorNumber;                               //0x4
    ULONG ContextSwitches;                                                  //0x8
    ULONG HwCountersCount;                                                  //0xc
    volatile ULONGLONG UpdateCount;                                         //0x10
    ULONGLONG WaitReasonBitMap;                                             //0x18
    ULONGLONG HardwareCounters;                                             //0x20
    struct _COUNTER_READING CycleTime;                                      //0x28
    struct _COUNTER_READING HwCounters[16];                                 //0x40
};
/* Used in */
// _KTHREAD_COUNTERS

