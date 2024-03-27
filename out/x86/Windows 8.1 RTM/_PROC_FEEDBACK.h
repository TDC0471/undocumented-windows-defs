#pragma once
/* ------------------ */

#include <_PROC_FEEDBACK_COUNTER.h>

//0x68 bytes (sizeof)
struct _PROC_FEEDBACK
{
    ULONG Lock;                                                             //0x0
    ULONGLONG CyclesLast;                                                   //0x8
    ULONGLONG CyclesActive;                                                 //0x10
    struct _PROC_FEEDBACK_COUNTER* Counters[2];                             //0x18
    ULONGLONG LastUpdateTime;                                               //0x20
    ULONGLONG UnscaledTime;                                                 //0x28
    volatile LONGLONG UnaccountedTime;                                      //0x30
    ULONGLONG ScaledTime[2];                                                //0x38
    ULONGLONG UnaccountedKernelTime;                                        //0x48
    ULONGLONG PerformanceScaledKernelTime;                                  //0x50
    ULONG UserTimeLast;                                                     //0x58
    ULONG KernelTimeLast;                                                   //0x5c
    UCHAR KernelTimesIndex;                                                 //0x60
};
/* Used in */
// _PROCESSOR_POWER_STATE

