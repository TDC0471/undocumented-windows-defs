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
#include <_PROC_PERF_SNAP.h>
#include <_PROC_PERF_DOMAIN.h>
#include <_PROC_PERF_CONSTRAINT.h>
#include <_PPM_CONCURRENCY_ACCOUNTING.h>
#include <_PROC_PERF_LOAD.h>
#include <_PROC_PERF_HISTORY.h>
#include <_PROC_PERF_UTILITY.h>

//0x1e0 bytes (sizeof)
struct _PROCESSOR_POWER_STATE
{
    struct _PPM_IDLE_STATES* IdleStates;                                    //0x0
    struct _PROC_IDLE_ACCOUNTING* IdleAccounting;                           //0x8
    ULONGLONG IdleTimeLast;                                                 //0x10
    ULONGLONG IdleTimeTotal;                                                //0x18
    ULONGLONG IdleTimeEntry;                                                //0x20
    ULONGLONG Reserved;                                                     //0x28
    struct _PROC_IDLE_POLICY IdlePolicy;                                    //0x30
    unionvolatile _PPM_IDLE_SYNCHRONIZATION_STATE Synchronization;          //0x38
    struct _PROC_FEEDBACK PerfFeedback;                                     //0x40
    enum _PROC_HYPERVISOR_STATE Hypervisor;                                 //0xb0
    ULONG LastSysTime;                                                      //0xb4
    ULONGLONG WmiDispatchPtr;                                               //0xb8
    LONG WmiInterfaceEnabled;                                               //0xc0
    struct _PPM_FFH_THROTTLE_STATE_INFO FFHThrottleStateInfo;               //0xc8
    struct _KDPC PerfActionDpc;                                             //0xe8
    volatile LONG PerfActionMask;                                           //0x128
    struct _PROC_IDLE_SNAP HvIdleCheck;                                     //0x130
    struct _PROC_PERF_SNAP PerfCheck;                                       //0x140
    struct _PROC_PERF_DOMAIN* Domain;                                       //0x180
    struct _PROC_PERF_CONSTRAINT* PerfConstraint;                           //0x188
    struct _PPM_CONCURRENCY_ACCOUNTING* Concurrency;                        //0x190
    struct _PROC_PERF_LOAD* Load;                                           //0x198
    struct _PROC_PERF_HISTORY* PerfHistory;                                 //0x1a0
    UCHAR GuaranteedPerformancePercent;                                     //0x1a8
    UCHAR HvTargetState;                                                    //0x1a9
    UCHAR Parked;                                                           //0x1aa
    UCHAR OverUtilized;                                                     //0x1ab
    ULONG LatestPerformancePercent;                                         //0x1ac
    ULONG LatestAffinitizedPercent;                                         //0x1b0
    ULONG ExpectedUtility;                                                  //0x1b4
    struct _PROC_PERF_UTILITY Utility[3];                                   //0x1b8
};
/* Used in */
// _KPRCB

