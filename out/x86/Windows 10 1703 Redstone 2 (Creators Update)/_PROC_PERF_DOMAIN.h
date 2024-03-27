#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_KPRCB.h>
#include <_KAFFINITY_EX.h>
#include <_PROC_PERF_CONSTRAINT.h>
#include <_PERF_CONTROL_STATE_SELECTION.h>

//0x100 bytes (sizeof)
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
    UCHAR AllowVirtualHeterogeneity;                                        //0x7d
    UCHAR InitiateAllProcessors;                                            //0x7e
    UCHAR AutonomousMode;                                                   //0x7f
    ULONG DesiredPercent;                                                   //0x80
    ULONG MaxPolicyPercent;                                                 //0x84
    ULONG MaxEquivalentFrequencyPercent;                                    //0x88
    ULONG MinPolicyPercent;                                                 //0x8c
    ULONG GuaranteedPercent;                                                //0x90
    ULONG SelectionGeneration;                                              //0x94
    ULONG BackgroundSelectionGeneration;                                    //0x98
    struct _PERF_CONTROL_STATE_SELECTION Selection;                         //0xa0
    struct _PERF_CONTROL_STATE_SELECTION BackgroundSelection;               //0xc8
    ULONGLONG PerfChangeTime;                                               //0xf0
    ULONG PerfChangeIntervalCount;                                          //0xf8
    UCHAR Force;                                                            //0xfc
    UCHAR ProvideGuidance;                                                  //0xfd
};
/* Used in */
// _PROCESSOR_POWER_STATE

