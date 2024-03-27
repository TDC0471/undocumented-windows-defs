#pragma once
/* ------------------ */

#include <_PROC_FEEDBACK_COUNTER.h>

//0x90 bytes (sizeof)
struct _PROC_FEEDBACK
{
    ULONGLONG Lock;                                                         //0x0
    ULONGLONG CyclesLast;                                                   //0x8
    ULONGLONG CyclesActive;                                                 //0x10
    struct _PROC_FEEDBACK_COUNTER* Counters[2];                             //0x18
    ULONGLONG LastUpdateTime;                                               //0x28
    ULONGLONG UnscaledTime;                                                 //0x30
    volatile LONGLONG UnaccountedTime;                                      //0x38
    ULONGLONG ScaledTime[2];                                                //0x40
    ULONGLONG UnaccountedKernelTime;                                        //0x50
    ULONGLONG PerformanceScaledKernelTime;                                  //0x58
    ULONG UserTimeLast;                                                     //0x60
    ULONG KernelTimeLast;                                                   //0x64
    ULONGLONG IdleGenerationNumberLast;                                     //0x68
    ULONGLONG HvActiveTimeLast;                                             //0x70
    ULONGLONG StallCyclesLast;                                              //0x78
    ULONGLONG StallTime;                                                    //0x80
    UCHAR KernelTimesIndex;                                                 //0x88
    UCHAR CounterDiscardsIdleTime;                                          //0x89
    UCHAR CounterReadOptimize;                                              //0x8a
};
/* Used in */
// _PROCESSOR_POWER_STATE

