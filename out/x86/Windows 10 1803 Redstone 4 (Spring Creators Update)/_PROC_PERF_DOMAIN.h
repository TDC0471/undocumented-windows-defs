#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_KPRCB.h>
#include <_KAFFINITY_EX.h>
#include <_PROC_PERF_CONSTRAINT.h>
#include <_PERF_CONTROL_STATE_SELECTION.h>
#include <_PROC_PERF_QOS_CLASS_POLICY.h>

//0x1d8 bytes (sizeof)
struct _PROC_PERF_DOMAIN
{
    struct _LIST_ENTRY Link;                                                //0x0
    struct _KPRCB* Master;                                                  //0x8
    struct _KAFFINITY_EX Members;                                           //0xc
    ULONG DomainContext;                                                    //0x18
    ULONG ProcessorCount;                                                   //0x1c
    UCHAR EfficiencyClass;                                                  //0x20
    UCHAR NominalPerformanceClass;                                          //0x21
    UCHAR HighestPerformanceClass;                                          //0x22
    UCHAR Spare;                                                            //0x23
    struct _PROC_PERF_CONSTRAINT* Processors;                               //0x24
    VOID (*GetFFHThrottleState)(ULONGLONG* arg1);                           //0x28
    VOID (*TimeWindowHandler)(ULONG arg1, ULONG arg2);                      //0x2c
    VOID (*BoostPolicyHandler)(ULONG arg1, ULONG arg2);                     //0x30
    VOID (*BoostModeHandler)(ULONG arg1, ULONG arg2);                       //0x34
    VOID (*EnergyPerfPreferenceHandler)(ULONG arg1, ULONG arg2);            //0x38
    VOID (*AutonomousActivityWindowHandler)(ULONG arg1, ULONG arg2);        //0x3c
    VOID (*AutonomousModeHandler)(ULONG arg1, ULONG arg2);                  //0x40
    VOID (*ReinitializeHandler)(ULONG arg1);                                //0x44
    ULONG (*PerfSelectionHandler)(ULONG arg1, ULONG arg2, ULONG arg3, ULONG arg4, ULONG arg5, ULONG arg6, ULONG arg7, ULONG* arg8, ULONGLONG* arg9); //0x48
    VOID (*PerfControlHandler)(ULONG arg1, struct _PERF_CONTROL_STATE_SELECTION* arg2, UCHAR arg3, UCHAR arg4); //0x4c
    VOID (*DomainPerfControlHandler)(ULONG arg1, struct _PERF_CONTROL_STATE_SELECTION* arg2, UCHAR arg3, UCHAR arg4); //0x50
    ULONG MaxFrequency;                                                     //0x54
    ULONG NominalFrequency;                                                 //0x58
    ULONG MaxPercent;                                                       //0x5c
    ULONG MinPerfPercent;                                                   //0x60
    ULONG MinThrottlePercent;                                               //0x64
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
    struct _PROC_PERF_QOS_CLASS_POLICY QosPolicies[4];                      //0x8c
    ULONG QosDisableReasons[4];                                             //0xfc
    ULONG QosEquivalencyMasks[4];                                           //0x10c
    UCHAR QosSupported;                                                     //0x11c
    volatile ULONG SelectionGeneration;                                     //0x120
    struct _PERF_CONTROL_STATE_SELECTION QosSelection[4];                   //0x128
    ULONGLONG PerfChangeTime;                                               //0x1c8
    ULONG PerfChangeIntervalCount;                                          //0x1d0
    UCHAR Force;                                                            //0x1d4
};
/* Used in */
// _PROCESSOR_POWER_STATE

