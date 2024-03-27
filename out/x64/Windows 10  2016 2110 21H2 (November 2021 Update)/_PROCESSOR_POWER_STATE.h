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

//0x200 bytes (sizeof)
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
    UCHAR HvTargetState;                                                    //0x32
    UCHAR SoftParked;                                                       //0x33
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
    struct _PROC_PERF_CHECK_CONTEXT CheckContext;                           //0x168
    struct _PPM_CONCURRENCY_ACCOUNTING* Concurrency;                        //0x1a8
    struct _PPM_CONCURRENCY_ACCOUNTING* ClassConcurrency;                   //0x1b0
    UCHAR ArchitecturalEfficiencyClass;                                     //0x1b8
    UCHAR PerformanceSchedulingClass;                                       //0x1b9
    UCHAR EfficiencySchedulingClass;                                        //0x1ba
    UCHAR Unused;                                                           //0x1bb
    UCHAR Parked;                                                           //0x1bc
    UCHAR LongPriorQosPeriod;                                               //0x1bd
    union
    {
        ULONGLONG SnapTimeLast;                                             //0x1c0
        ULONGLONG EnergyConsumed;                                           //0x1c0
    };
    ULONGLONG ActiveTime;                                                   //0x1c8
    ULONGLONG TotalTime;                                                    //0x1d0
    struct _POP_FX_DEVICE* FxDevice;                                        //0x1d8
    ULONGLONG LastQosTranstionTsc;                                          //0x1e0
    ULONGLONG QosTransitionHysteresis;                                      //0x1e8
    enum _KHETERO_CPU_QOS RequestedQosClass;                                //0x1f0
    enum _KHETERO_CPU_QOS ResolvedQosClass;                                 //0x1f4
    USHORT QosEquivalencyMask;                                              //0x1f8
    USHORT HwFeedbackTableIndex;                                            //0x1fa
    UCHAR HwFeedbackParkHint;                                               //0x1fc
    UCHAR HwFeedbackPerformanceClass;                                       //0x1fd
    UCHAR HwFeedbackEfficiencyClass;                                        //0x1fe
    UCHAR HeteroCoreType;                                                   //0x1ff
};
/* Used in */
// _KPRCB

