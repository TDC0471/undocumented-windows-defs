#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_KPRCB.h>
#include <_KAFFINITY_EX.h>
#include <_PROC_PERF_CONSTRAINT.h>

//0xb8 bytes (sizeof)
struct _PROC_PERF_DOMAIN
{
    struct _LIST_ENTRY Link;                                                //0x0
    struct _KPRCB* Master;                                                  //0x8
    struct _KAFFINITY_EX Members;                                           //0xc
    ULONG ProcessorCount;                                                   //0x18
    UCHAR EfficiencyClass;                                                  //0x1c
    UCHAR NominalPerformanceClass;                                          //0x1d
    UCHAR HighestPerformanceClass;                                          //0x1e
    UCHAR Spare;                                                            //0x1f
    struct _PROC_PERF_CONSTRAINT* Processors;                               //0x20
    VOID (*GetFFHThrottleState)(ULONGLONG* arg1);                           //0x24
    VOID (*TimeWindowHandler)(ULONG arg1, ULONG arg2);                      //0x28
    VOID (*BoostPolicyHandler)(ULONG arg1, ULONG arg2);                     //0x2c
    VOID (*BoostModeHandler)(ULONG arg1, ULONG arg2);                       //0x30
    VOID (*EnergyPerfPreferenceHandler)(ULONG arg1, ULONG arg2);            //0x34
    VOID (*AutonomousActivityWindowHandler)(ULONG arg1, ULONG arg2);        //0x38
    VOID (*AutonomousModeHandler)(ULONG arg1, ULONG arg2);                  //0x3c
    VOID (*ReinitializeHandler)(ULONG arg1);                                //0x40
    ULONG (*PerfSelectionHandler)(ULONG arg1, ULONG arg2, ULONG arg3, ULONG arg4, ULONG arg5, ULONG* arg6, ULONGLONG* arg7); //0x44
    VOID (*PerfControlHandler)(ULONG arg1, ULONGLONG arg2, ULONG arg3, ULONG arg4, ULONG arg5, UCHAR arg6, UCHAR arg7, UCHAR arg8); //0x48
    ULONG MaxFrequency;                                                     //0x4c
    ULONG NominalFrequency;                                                 //0x50
    ULONG MaxPercent;                                                       //0x54
    ULONG MinPerfPercent;                                                   //0x58
    ULONG MinThrottlePercent;                                               //0x5c
    ULONGLONG MinimumRelativePerformance;                                   //0x60
    ULONGLONG NominalRelativePerformance;                                   //0x68
    UCHAR Coordination;                                                     //0x70
    UCHAR HardPlatformCap;                                                  //0x71
    UCHAR AffinitizeControl;                                                //0x72
    UCHAR EfficientThrottle;                                                //0x73
    UCHAR AutonomousMode;                                                   //0x74
    ULONG SelectedPercent;                                                  //0x78
    ULONG SelectedFrequency;                                                //0x7c
    ULONG DesiredPercent;                                                   //0x80
    ULONG MaxPolicyPercent;                                                 //0x84
    ULONG MinPolicyPercent;                                                 //0x88
    ULONG ConstrainedMaxPercent;                                            //0x8c
    ULONG ConstrainedMinPercent;                                            //0x90
    ULONG GuaranteedPercent;                                                //0x94
    ULONG TolerancePercent;                                                 //0x98
    ULONGLONG SelectedState;                                                //0xa0
    ULONGLONG PerfChangeTime;                                               //0xa8
    ULONG PerfChangeIntervalCount;                                          //0xb0
    UCHAR Force;                                                            //0xb4
    UCHAR ProvideGuidance;                                                  //0xb5
};
/* Used in */
// _PROCESSOR_POWER_STATE

