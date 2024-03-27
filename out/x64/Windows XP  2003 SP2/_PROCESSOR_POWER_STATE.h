#pragma once
/* ------------------ */

#include <_PROCESSOR_POWER_STATE.h>
#include <PROCESSOR_IDLE_TIMES.h>
#include <_LARGE_INTEGER.h>
#include <_KTIMER.h>
#include <_KDPC.h>
#include <PROCESSOR_PERF_STATE.h>

//0x170 bytes (sizeof)
struct _PROCESSOR_POWER_STATE
{
    VOID (*IdleFunction)(struct _PROCESSOR_POWER_STATE* arg1);              //0x0
    ULONG Idle0KernelTimeLimit;                                             //0x8
    ULONG Idle0LastTime;                                                    //0xc
    VOID* IdleHandlers;                                                     //0x10
    VOID* IdleState;                                                        //0x18
    ULONG IdleHandlersCount;                                                //0x20
    ULONGLONG LastCheck;                                                    //0x28
    struct PROCESSOR_IDLE_TIMES IdleTimes;                                  //0x30
    ULONG IdleTime1;                                                        //0x50
    ULONG PromotionCheck;                                                   //0x54
    ULONG IdleTime2;                                                        //0x58
    UCHAR CurrentThrottle;                                                  //0x5c
    UCHAR ThermalThrottleLimit;                                             //0x5d
    UCHAR CurrentThrottleIndex;                                             //0x5e
    UCHAR ThermalThrottleIndex;                                             //0x5f
    ULONG LastKernelUserTime;                                               //0x60
    ULONG LastIdleThreadKernelTime;                                         //0x64
    ULONG PackageIdleStartTime;                                             //0x68
    ULONG PackageIdleTime;                                                  //0x6c
    ULONG DebugCount;                                                       //0x70
    ULONG LastSysTime;                                                      //0x74
    ULONGLONG TotalIdleStateTime[3];                                        //0x78
    ULONG TotalIdleTransitions[3];                                          //0x90
    ULONGLONG PreviousC3StateTime;                                          //0xa0
    UCHAR KneeThrottleIndex;                                                //0xa8
    UCHAR ThrottleLimitIndex;                                               //0xa9
    UCHAR PerfStatesCount;                                                  //0xaa
    UCHAR ProcessorMinThrottle;                                             //0xab
    UCHAR ProcessorMaxThrottle;                                             //0xac
    UCHAR EnableIdleAccounting;                                             //0xad
    UCHAR LastC3Percentage;                                                 //0xae
    UCHAR LastAdjustedBusyPercentage;                                       //0xaf
    ULONG PromotionCount;                                                   //0xb0
    ULONG DemotionCount;                                                    //0xb4
    ULONG ErrorCount;                                                       //0xb8
    ULONG RetryCount;                                                       //0xbc
    ULONG Flags;                                                            //0xc0
    union _LARGE_INTEGER PerfCounterFrequency;                              //0xc8
    ULONG PerfTickCount;                                                    //0xd0
    struct _KTIMER PerfTimer;                                               //0xd8
    struct _KDPC PerfDpc;                                                   //0x118
    struct PROCESSOR_PERF_STATE* PerfStates;                                //0x158
    LONG (*PerfSetThrottle)(UCHAR arg1);                                    //0x160
    ULONG LastC3KernelUserTime;                                             //0x168
    ULONG LastPackageIdleTime;                                              //0x16c
};
/* Used in */
// _KPRCB
// _PROCESSOR_POWER_STATE

