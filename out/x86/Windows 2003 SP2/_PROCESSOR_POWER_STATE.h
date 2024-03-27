#pragma once
/* ------------------ */

#include <_PROCESSOR_POWER_STATE.h>
#include <PROCESSOR_IDLE_TIMES.h>
#include <_LARGE_INTEGER.h>
#include <_KTIMER.h>
#include <_KDPC.h>
#include <PROCESSOR_PERF_STATE.h>

//0x120 bytes (sizeof)
struct _PROCESSOR_POWER_STATE
{
    VOID (*IdleFunction)(struct _PROCESSOR_POWER_STATE* arg1);              //0x0
    ULONG Idle0KernelTimeLimit;                                             //0x4
    ULONG Idle0LastTime;                                                    //0x8
    VOID* IdleHandlers;                                                     //0xc
    VOID* IdleState;                                                        //0x10
    ULONG IdleHandlersCount;                                                //0x14
    ULONGLONG LastCheck;                                                    //0x18
    struct PROCESSOR_IDLE_TIMES IdleTimes;                                  //0x20
    ULONG IdleTime1;                                                        //0x40
    ULONG PromotionCheck;                                                   //0x44
    ULONG IdleTime2;                                                        //0x48
    UCHAR CurrentThrottle;                                                  //0x4c
    UCHAR ThermalThrottleLimit;                                             //0x4d
    UCHAR CurrentThrottleIndex;                                             //0x4e
    UCHAR ThermalThrottleIndex;                                             //0x4f
    ULONG LastKernelUserTime;                                               //0x50
    ULONG LastIdleThreadKernelTime;                                         //0x54
    ULONG PackageIdleStartTime;                                             //0x58
    ULONG PackageIdleTime;                                                  //0x5c
    ULONG DebugCount;                                                       //0x60
    ULONG LastSysTime;                                                      //0x64
    ULONGLONG TotalIdleStateTime[3];                                        //0x68
    ULONG TotalIdleTransitions[3];                                          //0x80
    ULONGLONG PreviousC3StateTime;                                          //0x90
    UCHAR KneeThrottleIndex;                                                //0x98
    UCHAR ThrottleLimitIndex;                                               //0x99
    UCHAR PerfStatesCount;                                                  //0x9a
    UCHAR ProcessorMinThrottle;                                             //0x9b
    UCHAR ProcessorMaxThrottle;                                             //0x9c
    UCHAR EnableIdleAccounting;                                             //0x9d
    UCHAR LastC3Percentage;                                                 //0x9e
    UCHAR LastAdjustedBusyPercentage;                                       //0x9f
    ULONG PromotionCount;                                                   //0xa0
    ULONG DemotionCount;                                                    //0xa4
    ULONG ErrorCount;                                                       //0xa8
    ULONG RetryCount;                                                       //0xac
    ULONG Flags;                                                            //0xb0
    union _LARGE_INTEGER PerfCounterFrequency;                              //0xb8
    ULONG PerfTickCount;                                                    //0xc0
    struct _KTIMER PerfTimer;                                               //0xc8
    struct _KDPC PerfDpc;                                                   //0xf0
    struct PROCESSOR_PERF_STATE* PerfStates;                                //0x110
    LONG (*PerfSetThrottle)(UCHAR arg1);                                    //0x114
    ULONG LastC3KernelUserTime;                                             //0x118
    ULONG LastPackageIdleTime;                                              //0x11c
};
/* Used in */
// _KPRCB
// _PROCESSOR_POWER_STATE

