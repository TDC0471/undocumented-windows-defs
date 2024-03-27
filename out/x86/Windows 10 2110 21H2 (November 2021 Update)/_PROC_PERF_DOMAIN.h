#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_PROC_PERF_CHECK_CONTEXT.h>
#include <_KAFFINITY_EX.h>
#include <_PROC_PERF_CONSTRAINT.h>
#include <_PERF_CONTROL_STATE_SELECTION.h>
#include <_PROC_PERF_QOS_CLASS_POLICY.h>

//0x218 bytes (sizeof)
struct _PROC_PERF_DOMAIN
{
    struct _LIST_ENTRY Link;                                                //0x0
    struct _PROC_PERF_CHECK_CONTEXT* Master;                                //0x8
    struct _KAFFINITY_EX Members;                                           //0xc
    ULONG DomainContext;                                                    //0x18
    ULONG ProcessorCount;                                                   //0x1c
    UCHAR EfficiencyClass;                                                  //0x20
    UCHAR NominalPerformanceClass;                                          //0x21
    UCHAR HighestPerformanceClass;                                          //0x22
    struct _PROC_PERF_CONSTRAINT* Processors;                               //0x24
    VOID (*GetFFHThrottleState)(ULONGLONG* arg1);                           //0x28
    VOID (*TimeWindowHandler)(ULONG arg1, ULONG arg2);                      //0x2c
    VOID (*BoostPolicyHandler)(ULONG arg1, ULONG arg2);                     //0x30
    VOID (*BoostModeHandler)(ULONG arg1, ULONG arg2);                       //0x34
    VOID (*AutonomousActivityWindowHandler)(ULONG arg1, ULONG arg2);        //0x38
    VOID (*AutonomousModeHandler)(ULONG arg1, ULONG arg2);                  //0x3c
    VOID (*ReinitializeHandler)(ULONG arg1);                                //0x40
    ULONG (*PerfSelectionHandler)(ULONG arg1, ULONG arg2, ULONG arg3, ULONG arg4, ULONG arg5, ULONG arg6, ULONG arg7, ULONG* arg8, ULONGLONG* arg9); //0x44
    VOID (*PerfControlHandler)(ULONG arg1, struct _PERF_CONTROL_STATE_SELECTION* arg2, UCHAR arg3, UCHAR arg4); //0x48
    VOID (*DomainPerfControlHandler)(ULONG arg1, struct _PERF_CONTROL_STATE_SELECTION* arg2, UCHAR arg3, UCHAR arg4); //0x4c
    ULONG MaxFrequency;                                                     //0x50
    ULONG NominalFrequency;                                                 //0x54
    ULONG MaxPercent;                                                       //0x58
    ULONG MinPerfPercent;                                                   //0x5c
    ULONG MinThrottlePercent;                                               //0x60
    ULONG AdvertizedMaximumFrequency;                                       //0x64
    ULONGLONG MinimumRelativePerformance;                                   //0x68
    ULONGLONG NominalRelativePerformance;                                   //0x70
    UCHAR NominalRelativePerformancePercent;                                //0x78
    UCHAR Coordination;                                                     //0x79
    UCHAR HardPlatformCap;                                                  //0x7a
    UCHAR AffinitizeControl;                                                //0x7b
    UCHAR EfficientThrottle;                                                //0x7c
    UCHAR AllowSchedulerDirectedPerfStates;                                 //0x7d
    UCHAR InitiateAllProcessors;                                            //0x7e
    UCHAR AutonomousMode;                                                   //0x7f
    UCHAR ProvideGuidance;                                                  //0x80
    ULONG DesiredPercent;                                                   //0x84
    ULONG GuaranteedPercent;                                                //0x88
    UCHAR EngageResponsivenessOverrides;                                    //0x8c
    struct _PROC_PERF_QOS_CLASS_POLICY QosPolicies[5];                      //0x90
    ULONG QosDisableReasons[5];                                             //0x11c
    USHORT QosEquivalencyMasks[5];                                          //0x130
    UCHAR QosSupported;                                                     //0x13a
    volatile ULONG SelectionGeneration;                                     //0x13c
    struct _PERF_CONTROL_STATE_SELECTION QosSelection[5];                   //0x140
    ULONGLONG PerfChangeTime;                                               //0x208
    ULONG PerfChangeIntervalCount;                                          //0x210
    UCHAR Force;                                                            //0x214
    UCHAR Update;                                                           //0x215
    UCHAR Apply;                                                            //0x216
};
/* Used in */
// _PROC_PERF_CHECK_CONTEXT

