#pragma once
/* ------------------ */

#include <_PPM_IDLE_STATES.h>
#include <_PROC_IDLE_ACCOUNTING.h>
#include <_PLATFORM_IDLE_ACCOUNTING.h>
#include <_PROC_IDLE_POLICY.h>
#include <_PPM_IDLE_SYNCHRONIZATION_STATE.h>
#include <_PROC_FEEDBACK.h>
#include <_PROC_HYPERVISOR_STATE.h>
#include <_PPM_FFH_THROTTLE_STATE_INFO.h>
#include <_KDPC.h>
#include <_PROC_IDLE_SNAP.h>
#include <_PROC_PERF_SNAP.h>
#include <_PROC_PERF_DOMAIN.h>
#include <_PROC_PERF_CONSTRAINT.h>
#include <_PPM_CONCURRENCY_ACCOUNTING.h>
#include <_PROC_PERF_LOAD.h>
#include <_PROC_PERF_HISTORY.h>

//0x1c8 bytes (sizeof)
struct _PROCESSOR_POWER_STATE
{
    struct _PPM_IDLE_STATES* IdleStates;                                    //0x0
    struct _PROC_IDLE_ACCOUNTING* IdleAccounting;                           //0x8
    struct _PLATFORM_IDLE_ACCOUNTING* PlatformIdleAccounting;               //0x10
    ULONGLONG IdleTimeLast;                                                 //0x18
    ULONGLONG IdleTimeTotal;                                                //0x20
    ULONGLONG IdleTimeEntry;                                                //0x28
    ULONGLONG Reserved;                                                     //0x30
    struct _PROC_IDLE_POLICY IdlePolicy;                                    //0x38
    unionvolatile _PPM_IDLE_SYNCHRONIZATION_STATE Synchronization;          //0x40
    struct _PROC_FEEDBACK PerfFeedback;                                     //0x48
    enum _PROC_HYPERVISOR_STATE Hypervisor;                                 //0xb8
    ULONG LastSysTime;                                                      //0xbc
    ULONGLONG WmiDispatchPtr;                                               //0xc0
    LONG WmiInterfaceEnabled;                                               //0xc8
    struct _PPM_FFH_THROTTLE_STATE_INFO FFHThrottleStateInfo;               //0xd0
    struct _KDPC PerfActionDpc;                                             //0xf0
    volatile LONG PerfActionMask;                                           //0x130
    struct _PROC_IDLE_SNAP HvIdleCheck;                                     //0x138
    struct _PROC_PERF_SNAP PerfCheck;                                       //0x148
    struct _PROC_PERF_DOMAIN* Domain;                                       //0x188
    struct _PROC_PERF_CONSTRAINT* PerfConstraint;                           //0x190
    struct _PPM_CONCURRENCY_ACCOUNTING* Concurrency;                        //0x198
    struct _PROC_PERF_LOAD* Load;                                           //0x1a0
    struct _PROC_PERF_HISTORY* PerfHistory;                                 //0x1a8
    UCHAR GuaranteedPerformancePercent;                                     //0x1b0
    UCHAR HvTargetState;                                                    //0x1b1
    UCHAR Parked;                                                           //0x1b2
    UCHAR OverUtilized;                                                     //0x1b3
    ULONG LatestPerformancePercent;                                         //0x1b4
    ULONG AveragePerformancePercent;                                        //0x1b8
    ULONG LatestAffinitizedPercent;                                         //0x1bc
    ULONG Utility;                                                          //0x1c0
    ULONG AffinitizedUtility;                                               //0x1c4
};
/* Used in */
// _KPRCB

