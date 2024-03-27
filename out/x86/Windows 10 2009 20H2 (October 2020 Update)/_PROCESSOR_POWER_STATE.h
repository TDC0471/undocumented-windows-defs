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
    UCHAR SoftParked;                                                       //0x2b
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
    struct _PROC_PERF_CHECK_CONTEXT CheckContext;                           //0x130
    struct _PPM_CONCURRENCY_ACCOUNTING* Concurrency;                        //0x158
    struct _PPM_CONCURRENCY_ACCOUNTING* ClassConcurrency;                   //0x15c
    UCHAR ArchitecturalEfficiencyClass;                                     //0x160
    UCHAR PerformanceSchedulingClass;                                       //0x161
    UCHAR EfficiencySchedulingClass;                                        //0x162
    UCHAR Unused;                                                           //0x163
    UCHAR Parked;                                                           //0x164
    UCHAR LongPriorQosPeriod;                                               //0x165
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

