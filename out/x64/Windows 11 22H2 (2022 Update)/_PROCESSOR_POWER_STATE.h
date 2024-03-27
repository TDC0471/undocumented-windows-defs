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
#include <_PROC_PERF_CHECK_CONTEXT.h>
#include <_PPM_CONCURRENCY_ACCOUNTING.h>
#include <_POP_FX_DEVICE.h>
#include <_KHETERO_CPU_QOS.h>
#include <_KHETRO_HWFEEDBACK_TYPE.h>
#include <_PROCESSOR_CYCLES_WORKLOAD_CLASS.h>

//0x230 bytes (sizeof)
struct _PROCESSOR_POWER_STATE
{
    struct _PPM_IDLE_STATES* IdleStates;                                    //0x0
    struct _PROC_IDLE_ACCOUNTING* IdleAccounting;                           //0x8
    ULONGLONG IdleTimeLast;                                                 //0x10
    ULONGLONG IdleTimeTotal;                                                //0x18
    volatile ULONGLONG IdleSequenceNumber;                                  //0x20
    ULONGLONG IdleTimeEntry;                                                //0x28
    union
    {
        ULONGLONG IdleTimeExpiration;                                       //0x30
        volatile LONGLONG IdleWakeTime;                                     //0x30
    };
    UCHAR NonInterruptibleTransition;                                       //0x38
    UCHAR PepWokenTransition;                                               //0x39
    UCHAR HvTargetState;                                                    //0x3a
    UCHAR SoftParked;                                                       //0x3b
    ULONG TargetIdleState;                                                  //0x3c
    struct _PROC_IDLE_POLICY IdlePolicy;                                    //0x40
    unionvolatile _PPM_IDLE_SYNCHRONIZATION_STATE Synchronization;          //0x48
    struct _PROC_FEEDBACK PerfFeedback;                                     //0x50
    enum _PROC_HYPERVISOR_STATE Hypervisor;                                 //0xe0
    ULONG LastSysTime;                                                      //0xe4
    ULONGLONG WmiDispatchPtr;                                               //0xe8
    LONG WmiInterfaceEnabled;                                               //0xf0
    struct _PPM_FFH_THROTTLE_STATE_INFO FFHThrottleStateInfo;               //0xf8
    struct _KDPC PerfActionDpc;                                             //0x118
    volatile LONG PerfActionMask;                                           //0x158
    struct _PROC_IDLE_SNAP HvIdleCheck;                                     //0x160
    struct _PROC_PERF_CHECK_CONTEXT CheckContext;                           //0x170
    struct _PPM_CONCURRENCY_ACCOUNTING* Concurrency;                        //0x1b8
    struct _PPM_CONCURRENCY_ACCOUNTING* ClassConcurrency;                   //0x1c0
    UCHAR ArchitecturalEfficiencyClass;                                     //0x1c8
    UCHAR PerformanceSchedulingClass;                                       //0x1c9
    UCHAR EfficiencySchedulingClass;                                        //0x1ca
    UCHAR EarlyBootArchitecturalEfficiencyClass;                            //0x1cb
    UCHAR Parked;                                                           //0x1cc
    UCHAR LongPriorQosPeriod;                                               //0x1cd
    union
    {
        ULONGLONG SnapTimeLast;                                             //0x1d0
        ULONGLONG EnergyConsumed;                                           //0x1d0
    };
    ULONGLONG ActiveTime;                                                   //0x1d8
    ULONGLONG TotalTime;                                                    //0x1e0
    struct _POP_FX_DEVICE* FxDevice;                                        //0x1e8
    ULONGLONG LastQosTranstionTsc;                                          //0x1f0
    ULONGLONG QosTransitionHysteresis;                                      //0x1f8
    enum _KHETERO_CPU_QOS RequestedQosClass;                                //0x200
    enum _KHETERO_CPU_QOS ResolvedQosClass;                                 //0x204
    USHORT QosEquivalencyMask;                                              //0x208
    USHORT HwFeedbackTableOffset;                                           //0x20a
    UCHAR HwFeedbackParkHint;                                               //0x20c
    UCHAR HeteroCoreType;                                                   //0x20d
    USHORT HwFeedbackTableIndex;                                            //0x20e
    struct _KHETRO_HWFEEDBACK_TYPE* HwFeedbackClassList;                    //0x210
    struct _PROCESSOR_CYCLES_WORKLOAD_CLASS* EeCyclesWorkloadClassList;     //0x218
    struct _PROCESSOR_CYCLES_WORKLOAD_CLASS* PerfCyclesWorkloadClassList;   //0x220
    UCHAR NotUsed;                                                          //0x228
};
/* Used in */
// _KPRCB

