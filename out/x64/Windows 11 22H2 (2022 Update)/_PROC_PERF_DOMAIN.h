#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_PROC_PERF_CHECK_CONTEXT.h>
#include <_KAFFINITY_EX.h>
#include <_PROCESSOR_PRESENCE.h>
#include <_PROC_PERF_CONSTRAINT.h>
#include <_PERF_CONTROL_STATE_SELECTION.h>
#include <_PROC_PERF_QOS_CLASS_POLICY.h>

//0x428 bytes (sizeof)
struct _PROC_PERF_DOMAIN
{
    struct _LIST_ENTRY Link;                                                //0x0
    struct _PROC_PERF_CHECK_CONTEXT* Master;                                //0x10
    struct _KAFFINITY_EX Members;                                           //0x18
    ULONGLONG DomainContext;                                                //0x120
    ULONG ProcessorCount;                                                   //0x128
    UCHAR EfficiencyClass;                                                  //0x12c
    UCHAR NominalPerformanceClass;                                          //0x12d
    UCHAR HighestPerformanceClass;                                          //0x12e
    enum _PROCESSOR_PRESENCE Presence;                                      //0x130
    struct _PROC_PERF_CONSTRAINT* Processors;                               //0x138
    VOID (*GetFFHThrottleState)(ULONGLONG* arg1);                           //0x140
    VOID (*TimeWindowHandler)(ULONGLONG arg1, ULONG arg2);                  //0x148
    VOID (*BoostPolicyHandler)(ULONGLONG arg1, ULONG arg2);                 //0x150
    VOID (*BoostModeHandler)(ULONGLONG arg1, ULONG arg2);                   //0x158
    VOID (*AutonomousActivityWindowHandler)(ULONGLONG arg1, ULONG arg2);    //0x160
    VOID (*AutonomousModeHandler)(ULONGLONG arg1, ULONG arg2);              //0x168
    VOID (*ReinitializeHandler)(ULONGLONG arg1);                            //0x170
    ULONG (*PerfSelectionHandler)(ULONGLONG arg1, ULONG arg2, ULONG arg3, ULONG arg4, ULONG arg5, ULONG arg6, ULONG arg7, ULONG* arg8, ULONGLONG* arg9); //0x178
    VOID (*PerfControlHandler)(ULONGLONG arg1, struct _PERF_CONTROL_STATE_SELECTION* arg2, UCHAR arg3, UCHAR arg4); //0x180
    VOID (*PerfControlHandlerHidden)(ULONGLONG arg1, struct _PERF_CONTROL_STATE_SELECTION* arg2, UCHAR arg3, UCHAR arg4); //0x188
    VOID (*DomainPerfControlHandler)(ULONGLONG arg1, struct _PERF_CONTROL_STATE_SELECTION* arg2, UCHAR arg3, UCHAR arg4); //0x190
    VOID (*PerfUpdateHwDebugData)(ULONGLONG arg1, ULONGLONG arg2, UCHAR arg3); //0x198
    ULONG (*PerfQueryProcMeasurementCapabilities)();                        //0x1a0
    LONG (*PerfQueryProcMeasurementValues)(ULONG arg1, ULONG* arg2, VOID* arg3, ULONG arg4); //0x1a8
    ULONG Id;                                                               //0x1b0
    ULONG MaxFrequency;                                                     //0x1b4
    ULONG NominalFrequency;                                                 //0x1b8
    ULONG MaxPercent;                                                       //0x1bc
    ULONG MinPerfPercent;                                                   //0x1c0
    ULONG MinThrottlePercent;                                               //0x1c4
    ULONG AdvertizedMaximumFrequency;                                       //0x1c8
    ULONGLONG MinimumRelativePerformance;                                   //0x1d0
    ULONGLONG NominalRelativePerformance;                                   //0x1d8
    UCHAR NominalRelativePerformancePercent;                                //0x1e0
    UCHAR Coordination;                                                     //0x1e1
    UCHAR HardPlatformCap;                                                  //0x1e2
    UCHAR AffinitizeControl;                                                //0x1e3
    UCHAR EfficientThrottle;                                                //0x1e4
    UCHAR AllowSchedulerDirectedPerfStates;                                 //0x1e5
    UCHAR InitiateAllProcessors;                                            //0x1e6
    UCHAR AllowVmPerfSelection;                                             //0x1e7
    ULONG VmFrequencyStepMhz;                                               //0x1e8
    ULONG VmHighestFrequencyMhz;                                            //0x1ec
    ULONG VmNominalFrequencyMhz;                                            //0x1f0
    ULONG VmLowestFrequencyMhz;                                             //0x1f4
    UCHAR AutonomousMode;                                                   //0x1f8
    UCHAR AutonomousCapability;                                             //0x1f9
    UCHAR ProvideGuidance;                                                  //0x1fa
    ULONG DesiredPercent;                                                   //0x1fc
    ULONG GuaranteedPercent;                                                //0x200
    UCHAR EngageResponsivenessOverrides;                                    //0x204
    struct _PROC_PERF_QOS_CLASS_POLICY QosPolicies[7];                      //0x208
    ULONG QosDisableReasons[7];                                             //0x2cc
    USHORT QosEquivalencyMasks[7];                                          //0x2e8
    UCHAR QosSupported;                                                     //0x2f6
    volatile ULONG SelectionGeneration;                                     //0x2f8
    struct _PERF_CONTROL_STATE_SELECTION QosSelection[7];                   //0x300
    ULONGLONG PerfChangeTime;                                               //0x418
    ULONG PerfChangeIntervalCount;                                          //0x420
    UCHAR Force;                                                            //0x424
    UCHAR Update;                                                           //0x425
    UCHAR Apply;                                                            //0x426
};
/* Used in */
// _PROC_PERF_CHECK_CONTEXT

