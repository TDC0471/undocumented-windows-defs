#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_KPRCB.h>
#include <_KAFFINITY_EX.h>
#include <_PROC_PERF_CONSTRAINT.h>
#include <_PERF_CONTROL_STATE_SELECTION.h>
#include <_PROC_PERF_QOS_CLASS_POLICY.h>

//0x2a8 bytes (sizeof)
struct _PROC_PERF_DOMAIN
{
    struct _LIST_ENTRY Link;                                                //0x0
    struct _KPRCB* Master;                                                  //0x10
    struct _KAFFINITY_EX Members;                                           //0x18
    ULONGLONG DomainContext;                                                //0xc0
    ULONG ProcessorCount;                                                   //0xc8
    UCHAR EfficiencyClass;                                                  //0xcc
    UCHAR NominalPerformanceClass;                                          //0xcd
    UCHAR HighestPerformanceClass;                                          //0xce
    UCHAR Spare;                                                            //0xcf
    struct _PROC_PERF_CONSTRAINT* Processors;                               //0xd0
    VOID (*GetFFHThrottleState)(ULONGLONG* arg1);                           //0xd8
    VOID (*TimeWindowHandler)(ULONGLONG arg1, ULONG arg2);                  //0xe0
    VOID (*BoostPolicyHandler)(ULONGLONG arg1, ULONG arg2);                 //0xe8
    VOID (*BoostModeHandler)(ULONGLONG arg1, ULONG arg2);                   //0xf0
    VOID (*AutonomousActivityWindowHandler)(ULONGLONG arg1, ULONG arg2);    //0xf8
    VOID (*AutonomousModeHandler)(ULONGLONG arg1, ULONG arg2);              //0x100
    VOID (*ReinitializeHandler)(ULONGLONG arg1);                            //0x108
    ULONG (*PerfSelectionHandler)(ULONGLONG arg1, ULONG arg2, ULONG arg3, ULONG arg4, ULONG arg5, ULONG arg6, ULONG arg7, ULONG* arg8, ULONGLONG* arg9); //0x110
    VOID (*PerfControlHandler)(ULONGLONG arg1, struct _PERF_CONTROL_STATE_SELECTION* arg2, UCHAR arg3, UCHAR arg4); //0x118
    VOID (*DomainPerfControlHandler)(ULONGLONG arg1, struct _PERF_CONTROL_STATE_SELECTION* arg2, UCHAR arg3, UCHAR arg4); //0x120
    ULONG MaxFrequency;                                                     //0x128
    ULONG NominalFrequency;                                                 //0x12c
    ULONG MaxPercent;                                                       //0x130
    ULONG MinPerfPercent;                                                   //0x134
    ULONG MinThrottlePercent;                                               //0x138
    ULONG AdvertizedMaximumFrequency;                                       //0x13c
    ULONGLONG MinimumRelativePerformance;                                   //0x140
    ULONGLONG NominalRelativePerformance;                                   //0x148
    UCHAR NominalRelativePerformancePercent;                                //0x150
    UCHAR Coordination;                                                     //0x151
    UCHAR HardPlatformCap;                                                  //0x152
    UCHAR AffinitizeControl;                                                //0x153
    UCHAR EfficientThrottle;                                                //0x154
    UCHAR AllowSchedulerDirectedPerfStates;                                 //0x155
    UCHAR InitiateAllProcessors;                                            //0x156
    UCHAR AutonomousMode;                                                   //0x157
    UCHAR ProvideGuidance;                                                  //0x158
    ULONG DesiredPercent;                                                   //0x15c
    ULONG GuaranteedPercent;                                                //0x160
    UCHAR EngageResponsivenessOverrides;                                    //0x164
    struct _PROC_PERF_QOS_CLASS_POLICY QosPolicies[4];                      //0x168
    ULONG QosDisableReasons[4];                                             //0x1d8
    USHORT QosEquivalencyMasks[4];                                          //0x1e8
    UCHAR QosSupported;                                                     //0x1f0
    volatile ULONG SelectionGeneration;                                     //0x1f4
    struct _PERF_CONTROL_STATE_SELECTION QosSelection[4];                   //0x1f8
    ULONGLONG PerfChangeTime;                                               //0x298
    ULONG PerfChangeIntervalCount;                                          //0x2a0
    UCHAR Force;                                                            //0x2a4
};
/* Used in */
// _PROCESSOR_POWER_STATE

