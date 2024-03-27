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
#include <_POP_FX_DEVICE.h>
#include <_KHETERO_CPU_QOS.h>

//0x1a8 bytes (sizeof)
struct _PROCESSOR_POWER_STATE
{
    struct _PPM_IDLE_STATES* IdleStates;                                    //0x0
    struct _PROC_IDLE_ACCOUNTING* IdleAccounting;                           //0x4
    ULONGLONG IdleTimeLast;                                                 //0x8
    ULONGLONG IdleTimeTotal;                                                //0x10
    volatile ULONGLONG IdleTimeEntry;                                       //0x18
    ULONGLONG IdleTimeExpiration;                                           //0x20
    UCHAR NonInterruptibleTransition;                                       //0x28
    UCHAR PepWokenTransition;                                               //0x29
    UCHAR HvTargetState;                                                    //0x2a
    UCHAR Reserved;                                                         //0x2b
    ULONG TargetIdleState;                                                  //0x2c
    struct _PROC_IDLE_POLICY IdlePolicy;                                    //0x30
    unionvolatile _PPM_IDLE_SYNCHRONIZATION_STATE Synchronization;          //0x38
    struct _PROC_FEEDBACK PerfFeedback;                                     //0x40
    enum _PROC_HYPERVISOR_STATE Hypervisor;                                 //0xc8
    ULONG LastSysTime;                                                      //0xcc
    ULONG WmiDispatchPtr;                                                   //0xd0
    LONG WmiInterfaceEnabled;                                               //0xd4
    struct _PPM_FFH_THROTTLE_STATE_INFO FFHThrottleStateInfo;               //0xd8
    struct _KDPC PerfActionDpc;                                             //0xf8
    volatile LONG PerfActionMask;                                           //0x118
    struct _PROC_IDLE_SNAP HvIdleCheck;                                     //0x120
    struct _PROC_PERF_CHECK* PerfCheck;                                     //0x130
    struct _PROC_PERF_DOMAIN* Domain;                                       //0x134
    struct _PROC_PERF_CONSTRAINT* PerfConstraint;                           //0x138
    struct _PPM_CONCURRENCY_ACCOUNTING* Concurrency;                        //0x13c
    struct _PPM_CONCURRENCY_ACCOUNTING* ClassConcurrency;                   //0x140
    struct _PROC_PERF_LOAD* Load;                                           //0x144
    struct _PROC_PERF_HISTORY* PerfHistory;                                 //0x148
    UCHAR ArchitecturalEfficiencyClass;                                     //0x14c
    UCHAR PerformanceSchedulingClass;                                       //0x14d
    UCHAR EfficiencySchedulingClass;                                        //0x14e
    UCHAR GuaranteedPerformancePercent;                                     //0x14f
    UCHAR Parked;                                                           //0x150
    UCHAR LongPriorQosPeriod;                                               //0x151
    USHORT LatestAffinitizedPercent;                                        //0x152
    ULONG LatestPerformancePercent;                                         //0x154
    ULONG AveragePerformancePercent;                                        //0x158
    ULONG RelativePerformance;                                              //0x15c
    ULONG Utility;                                                          //0x160
    ULONG AffinitizedUtility;                                               //0x164
    union
    {
        ULONGLONG SnapTimeLast;                                             //0x168
        ULONGLONG EnergyConsumed;                                           //0x168
    };
    ULONGLONG ActiveTime;                                                   //0x170
    ULONGLONG TotalTime;                                                    //0x178
    struct _POP_FX_DEVICE* FxDevice;                                        //0x180
    ULONGLONG LastQosTranstionTsc;                                          //0x188
    ULONGLONG QosTransitionHysteresis;                                      //0x190
    enum _KHETERO_CPU_QOS RequestedQosClass;                                //0x198
    enum _KHETERO_CPU_QOS ResolvedQosClass;                                 //0x19c
    USHORT QosEquivalencyMask;                                              //0x1a0
    USHORT HwFeedbackTableIndex;                                            //0x1a2
    UCHAR HwFeedbackParkHint;                                               //0x1a4
    UCHAR HwFeedbackPerformanceClass;                                       //0x1a5
    UCHAR HwFeedbackEfficiencyClass;                                        //0x1a6
    UCHAR HeteroCoreType;                                                   //0x1a7
};
/* Used in */
// _KPRCB

