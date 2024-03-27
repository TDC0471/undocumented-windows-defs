#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_PROC_PERF_CHECK_CONTEXT.h>
#include <_KAFFINITY_EX.h>
#include <_PROCESSOR_PRESENCE.h>
#include <_PROC_PERF_CONSTRAINT.h>
#include <_PERF_CONTROL_STATE_SELECTION.h>
#include <_PROC_PERF_QOS_CLASS_POLICY.h>

//0x300 bytes (sizeof)
struct _PROC_PERF_DOMAIN
{
    struct _LIST_ENTRY Link;                                                //0x0
    struct _PROC_PERF_CHECK_CONTEXT* Master;                                //0x10
    struct _KAFFINITY_EX Members;                                           //0x18
    ULONGLONG DomainContext;                                                //0xc0
    ULONG ProcessorCount;                                                   //0xc8
    UCHAR EfficiencyClass;                                                  //0xcc
    UCHAR NominalPerformanceClass;                                          //0xcd
    UCHAR HighestPerformanceClass;                                          //0xce
    enum _PROCESSOR_PRESENCE Presence;                                      //0xd0
    struct _PROC_PERF_CONSTRAINT* Processors;                               //0xd8
    VOID (*GetFFHThrottleState)(ULONGLONG* arg1);                           //0xe0
    VOID (*TimeWindowHandler)(ULONGLONG arg1, ULONG arg2);                  //0xe8
    VOID (*BoostPolicyHandler)(ULONGLONG arg1, ULONG arg2);                 //0xf0
    VOID (*BoostModeHandler)(ULONGLONG arg1, ULONG arg2);                   //0xf8
    VOID (*AutonomousActivityWindowHandler)(ULONGLONG arg1, ULONG arg2);    //0x100
    VOID (*AutonomousModeHandler)(ULONGLONG arg1, ULONG arg2);              //0x108
    VOID (*ReinitializeHandler)(ULONGLONG arg1);                            //0x110
    ULONG (*PerfSelectionHandler)(ULONGLONG arg1, ULONG arg2, ULONG arg3, ULONG arg4, ULONG arg5, ULONG arg6, ULONG arg7, ULONG* arg8, ULONGLONG* arg9); //0x118
    VOID (*PerfControlHandler)(ULONGLONG arg1, struct _PERF_CONTROL_STATE_SELECTION* arg2, UCHAR arg3, UCHAR arg4); //0x120
    VOID (*PerfControlHandlerHidden)(ULONGLONG arg1, struct _PERF_CONTROL_STATE_SELECTION* arg2, UCHAR arg3, UCHAR arg4); //0x128
    VOID (*DomainPerfControlHandler)(ULONGLONG arg1, struct _PERF_CONTROL_STATE_SELECTION* arg2, UCHAR arg3, UCHAR arg4); //0x130
    ULONG MaxFrequency;                                                     //0x138
    ULONG NominalFrequency;                                                 //0x13c
    ULONG MaxPercent;                                                       //0x140
    ULONG MinPerfPercent;                                                   //0x144
    ULONG MinThrottlePercent;                                               //0x148
    ULONG AdvertizedMaximumFrequency;                                       //0x14c
    ULONGLONG MinimumRelativePerformance;                                   //0x150
    ULONGLONG NominalRelativePerformance;                                   //0x158
    UCHAR NominalRelativePerformancePercent;                                //0x160
    UCHAR Coordination;                                                     //0x161
    UCHAR HardPlatformCap;                                                  //0x162
    UCHAR AffinitizeControl;                                                //0x163
    UCHAR EfficientThrottle;                                                //0x164
    UCHAR AllowSchedulerDirectedPerfStates;                                 //0x165
    UCHAR InitiateAllProcessors;                                            //0x166
    UCHAR AutonomousMode;                                                   //0x167
    UCHAR ProvideGuidance;                                                  //0x168
    ULONG DesiredPercent;                                                   //0x16c
    ULONG GuaranteedPercent;                                                //0x170
    UCHAR EngageResponsivenessOverrides;                                    //0x174
    struct _PROC_PERF_QOS_CLASS_POLICY QosPolicies[5];                      //0x178
    ULONG QosDisableReasons[5];                                             //0x204
    USHORT QosEquivalencyMasks[5];                                          //0x218
    UCHAR QosSupported;                                                     //0x222
    volatile ULONG SelectionGeneration;                                     //0x224
    struct _PERF_CONTROL_STATE_SELECTION QosSelection[5];                   //0x228
    ULONGLONG PerfChangeTime;                                               //0x2f0
    ULONG PerfChangeIntervalCount;                                          //0x2f8
    UCHAR Force;                                                            //0x2fc
    UCHAR Update;                                                           //0x2fd
    UCHAR Apply;                                                            //0x2fe
};
/* Used in */
// _PROC_PERF_CHECK_CONTEXT

