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

//0x180 bytes (sizeof)
struct _PROCESSOR_POWER_STATE
{
    struct _PPM_IDLE_STATES* IdleStates;                                    //0x0
    struct _PROC_IDLE_ACCOUNTING* IdleAccounting;                           //0x4
    struct _PLATFORM_IDLE_ACCOUNTING* PlatformIdleAccounting;               //0x8
    ULONGLONG IdleTimeLast;                                                 //0x10
    ULONGLONG IdleTimeTotal;                                                //0x18
    ULONGLONG IdleTimeEntry;                                                //0x20
    ULONGLONG Reserved;                                                     //0x28
    struct _PROC_IDLE_POLICY IdlePolicy;                                    //0x30
    unionvolatile _PPM_IDLE_SYNCHRONIZATION_STATE Synchronization;          //0x38
    struct _PROC_FEEDBACK PerfFeedback;                                     //0x40
    enum _PROC_HYPERVISOR_STATE Hypervisor;                                 //0xa8
    ULONG LastSysTime;                                                      //0xac
    ULONG WmiDispatchPtr;                                                   //0xb0
    LONG WmiInterfaceEnabled;                                               //0xb4
    struct _PPM_FFH_THROTTLE_STATE_INFO FFHThrottleStateInfo;               //0xb8
    struct _KDPC PerfActionDpc;                                             //0xd8
    volatile LONG PerfActionMask;                                           //0xf8
    struct _PROC_IDLE_SNAP HvIdleCheck;                                     //0x100
    struct _PROC_PERF_SNAP PerfCheck;                                       //0x110
    struct _PROC_PERF_DOMAIN* Domain;                                       //0x150
    struct _PROC_PERF_CONSTRAINT* PerfConstraint;                           //0x154
    struct _PPM_CONCURRENCY_ACCOUNTING* Concurrency;                        //0x158
    struct _PROC_PERF_LOAD* Load;                                           //0x15c
    struct _PROC_PERF_HISTORY* PerfHistory;                                 //0x160
    UCHAR GuaranteedPerformancePercent;                                     //0x164
    UCHAR HvTargetState;                                                    //0x165
    UCHAR Parked;                                                           //0x166
    UCHAR OverUtilized;                                                     //0x167
    ULONG LatestPerformancePercent;                                         //0x168
    ULONG AveragePerformancePercent;                                        //0x16c
    ULONG LatestAffinitizedPercent;                                         //0x170
    ULONG Utility;                                                          //0x174
    ULONG AffinitizedUtility;                                               //0x178
};
/* Used in */
// _KPRCB

