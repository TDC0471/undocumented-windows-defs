#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_KPRCB.h>
#include <_KAFFINITY_EX.h>
#include <_PROC_PERF_CONSTRAINT.h>
#include <_PERF_CONTROL_STATE_SELECTION.h>
#include <_PROC_PERF_QOS_CLASS_POLICY.h>

//0x2b0 bytes (sizeof)
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
    UCHAR Hidden;                                                           //0xcf
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
    VOID (*PerfControlHandlerHidden)(ULONGLONG arg1, struct _PERF_CONTROL_STATE_SELECTION* arg2, UCHAR arg3, UCHAR arg4); //0x120
    VOID (*DomainPerfControlHandler)(ULONGLONG arg1, struct _PERF_CONTROL_STATE_SELECTION* arg2, UCHAR arg3, UCHAR arg4); //0x128
    ULONG MaxFrequency;                                                     //0x130
    ULONG NominalFrequency;                                                 //0x134
    ULONG MaxPercent;                                                       //0x138
    ULONG MinPerfPercent;                                                   //0x13c
    ULONG MinThrottlePercent;                                               //0x140
    ULONG AdvertizedMaximumFrequency;                                       //0x144
    ULONGLONG MinimumRelativePerformance;                                   //0x148
    ULONGLONG NominalRelativePerformance;                                   //0x150
    UCHAR NominalRelativePerformancePercent;                                //0x158
    UCHAR Coordination;                                                     //0x159
    UCHAR HardPlatformCap;                                                  //0x15a
    UCHAR AffinitizeControl;                                                //0x15b
    UCHAR EfficientThrottle;                                                //0x15c
    UCHAR AllowSchedulerDirectedPerfStates;                                 //0x15d
    UCHAR InitiateAllProcessors;                                            //0x15e
    UCHAR AutonomousMode;                                                   //0x15f
    UCHAR ProvideGuidance;                                                  //0x160
    ULONG DesiredPercent;                                                   //0x164
    ULONG GuaranteedPercent;                                                //0x168
    UCHAR EngageResponsivenessOverrides;                                    //0x16c
    struct _PROC_PERF_QOS_CLASS_POLICY QosPolicies[4];                      //0x170
    ULONG QosDisableReasons[4];                                             //0x1e0
    USHORT QosEquivalencyMasks[4];                                          //0x1f0
    UCHAR QosSupported;                                                     //0x1f8
    volatile ULONG SelectionGeneration;                                     //0x1fc
    struct _PERF_CONTROL_STATE_SELECTION QosSelection[4];                   //0x200
    ULONGLONG PerfChangeTime;                                               //0x2a0
    ULONG PerfChangeIntervalCount;                                          //0x2a8
    UCHAR Force;                                                            //0x2ac
    UCHAR Update;                                                           //0x2ad
    UCHAR Apply;                                                            //0x2ae
};
/* Used in */
// _PROCESSOR_POWER_STATE
