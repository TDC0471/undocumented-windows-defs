#pragma once
/* ------------------ */

#include <_PPM_IDLE_STATES.h>
#include <_PROC_IDLE_ACCOUNTING.h>
#include <_PROC_IDLE_POLICY.h>
#include <_PPM_IDLE_SYNCHRONIZATION_STATE.h>
#include <_PROC_FEEDBACK.h>
#include <_PROC_HYPERVISOR_STATE.h>
#include <_PPM_FFH_THROTTLE_STATE_INFO.h>
#include <_KDPC.h>
#include <_PROC_IDLE_SNAP.h>
#include <_PROC_PERF_CHECK.h>
#include <_PROC_PERF_DOMAIN.h>
#include <_PROC_PERF_CONSTRAINT.h>
#include <_PPM_CONCURRENCY_ACCOUNTING.h>
#include <_PROC_PERF_LOAD.h>
#include <_PROC_PERF_HISTORY.h>

//0x1d8 bytes (sizeof)
struct _PROCESSOR_POWER_STATE
{
    struct _PPM_IDLE_STATES* IdleStates;                                    //0x0
    struct _PROC_IDLE_ACCOUNTING* IdleAccounting;                           //0x8
    ULONGLONG IdleTimeLast;                                                 //0x10
    ULONGLONG IdleTimeTotal;                                                //0x18
    volatile ULONGLONG IdleTimeEntry;                                       //0x20
    ULONGLONG IdleTimeExpiration;                                           //0x28
    UCHAR NonInterruptibleTransition;                                       //0x30
    UCHAR PepWokenTransition;                                               //0x31
    UCHAR EfficiencyClass;                                                  //0x32
    UCHAR SchedulingClass;                                                  //0x33
    ULONG TargetIdleState;                                                  //0x34
    struct _PROC_IDLE_POLICY IdlePolicy;                                    //0x38
    unionvolatile _PPM_IDLE_SYNCHRONIZATION_STATE Synchronization;          //0x40
    struct _PROC_FEEDBACK PerfFeedback;                                     //0x48
    enum _PROC_HYPERVISOR_STATE Hypervisor;                                 //0xd8
    ULONG LastSysTime;                                                      //0xdc
    ULONGLONG WmiDispatchPtr;                                               //0xe0
    LONG WmiInterfaceEnabled;                                               //0xe8
    struct _PPM_FFH_THROTTLE_STATE_INFO FFHThrottleStateInfo;               //0xf0
    struct _KDPC PerfActionDpc;                                             //0x110
    volatile LONG PerfActionMask;                                           //0x150
    struct _PROC_IDLE_SNAP HvIdleCheck;                                     //0x158
    struct _PROC_PERF_CHECK* PerfCheck;                                     //0x168
    struct _PROC_PERF_DOMAIN* Domain;                                       //0x170
    struct _PROC_PERF_CONSTRAINT* PerfConstraint;                           //0x178
    struct _PPM_CONCURRENCY_ACCOUNTING* Concurrency;                        //0x180
    struct _PPM_CONCURRENCY_ACCOUNTING* ClassConcurrency;                   //0x188
    struct _PROC_PERF_LOAD* Load;                                           //0x190
    struct _PROC_PERF_HISTORY* PerfHistory;                                 //0x198
    UCHAR GuaranteedPerformancePercent;                                     //0x1a0
    UCHAR HvTargetState;                                                    //0x1a1
    UCHAR Parked;                                                           //0x1a2
    ULONG LatestPerformancePercent;                                         //0x1a4
    ULONG AveragePerformancePercent;                                        //0x1a8
    ULONG LatestAffinitizedPercent;                                         //0x1ac
    ULONG RelativePerformance;                                              //0x1b0
    ULONG Utility;                                                          //0x1b4
    ULONG AffinitizedUtility;                                               //0x1b8
    union
    {
        ULONGLONG SnapTimeLast;                                             //0x1c0
        ULONGLONG EnergyConsumed;                                           //0x1c0
    };
    ULONGLONG ActiveTime;                                                   //0x1c8
    ULONGLONG TotalTime;                                                    //0x1d0
};
/* Used in */
// _KPRCB

