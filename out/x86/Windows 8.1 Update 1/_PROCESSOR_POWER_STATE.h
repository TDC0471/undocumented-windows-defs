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

//0x190 bytes (sizeof)
struct _PROCESSOR_POWER_STATE
{
    struct _PPM_IDLE_STATES* IdleStates;                                    //0x0
    struct _PROC_IDLE_ACCOUNTING* IdleAccounting;                           //0x4
    ULONGLONG IdleTimeLast;                                                 //0x8
    ULONGLONG IdleTimeTotal;                                                //0x10
    ULONGLONG IdleTimeEntry;                                                //0x18
    ULONGLONG Reserved;                                                     //0x20
    struct _PROC_IDLE_POLICY IdlePolicy;                                    //0x28
    unionvolatile _PPM_IDLE_SYNCHRONIZATION_STATE Synchronization;          //0x30
    struct _PROC_FEEDBACK PerfFeedback;                                     //0x38
    enum _PROC_HYPERVISOR_STATE Hypervisor;                                 //0xa0
    ULONG LastSysTime;                                                      //0xa4
    ULONG WmiDispatchPtr;                                                   //0xa8
    LONG WmiInterfaceEnabled;                                               //0xac
    struct _PPM_FFH_THROTTLE_STATE_INFO FFHThrottleStateInfo;               //0xb0
    struct _KDPC PerfActionDpc;                                             //0xd0
    volatile LONG PerfActionMask;                                           //0xf0
    struct _PROC_IDLE_SNAP HvIdleCheck;                                     //0xf8
    struct _PROC_PERF_SNAP PerfCheck;                                       //0x108
    struct _PROC_PERF_DOMAIN* Domain;                                       //0x148
    struct _PROC_PERF_CONSTRAINT* PerfConstraint;                           //0x14c
    struct _PPM_CONCURRENCY_ACCOUNTING* Concurrency;                        //0x150
    struct _PROC_PERF_LOAD* Load;                                           //0x154
    struct _PROC_PERF_HISTORY* PerfHistory;                                 //0x158
    UCHAR GuaranteedPerformancePercent;                                     //0x15c
    UCHAR HvTargetState;                                                    //0x15d
    UCHAR Parked;                                                           //0x15e
    UCHAR OverUtilized;                                                     //0x15f
    ULONG LatestPerformancePercent;                                         //0x160
    ULONG LatestAffinitizedPercent;                                         //0x164
    ULONG ExpectedUtility;                                                  //0x168
    struct _PROC_PERF_UTILITY Utility[3];                                   //0x16c
};
/* Used in */
// _KPRCB

