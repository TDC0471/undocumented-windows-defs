#pragma once
/* ------------------ */

#include <_PROC_FEEDBACK_COUNTER.h>

//0x88 bytes (sizeof)
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
    ULONGLONG IdleGenerationNumberLast;                                     //0x60
    ULONGLONG HvActiveTimeLast;                                             //0x68
    ULONGLONG StallCyclesLast;                                              //0x70
    ULONGLONG StallTime;                                                    //0x78
    UCHAR KernelTimesIndex;                                                 //0x80
};
/* Used in */
// _PROCESSOR_POWER_STATE

