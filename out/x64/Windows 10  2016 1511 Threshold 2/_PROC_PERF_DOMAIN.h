#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_KPRCB.h>
#include <_KAFFINITY_EX.h>
#include <_PROC_PERF_CONSTRAINT.h>

//0x190 bytes (sizeof)
struct _PROC_PERF_DOMAIN
{
    struct _LIST_ENTRY Link;                                                //0x0
    struct _KPRCB* Master;                                                  //0x10
    struct _KAFFINITY_EX Members;                                           //0x18
    ULONG ProcessorCount;                                                   //0xc0
    UCHAR Class;                                                            //0xc4
    UCHAR Spare[3];                                                         //0xc5
    struct _PROC_PERF_CONSTRAINT* Processors;                               //0xc8
    VOID (*GetFFHThrottleState)(ULONGLONG* arg1);                           //0xd0
    VOID (*TimeWindowHandler)(ULONGLONG arg1, ULONG arg2);                  //0xd8
    VOID (*BoostPolicyHandler)(ULONGLONG arg1, ULONG arg2);                 //0xe0
    VOID (*BoostModeHandler)(ULONGLONG arg1, ULONG arg2);                   //0xe8
    VOID (*EnergyPerfPreferenceHandler)(ULONGLONG arg1, ULONG arg2);        //0xf0
    VOID (*AutonomousActivityWindowHandler)(ULONGLONG arg1, ULONG arg2);    //0xf8
    VOID (*AutonomousModeHandler)(ULONGLONG arg1, ULONG arg2);              //0x100
    VOID (*ReinitializeHandler)(ULONGLONG arg1);                            //0x108
    ULONG (*PerfSelectionHandler)(ULONGLONG arg1, ULONG arg2, ULONG arg3, ULONG arg4, ULONG arg5, ULONG* arg6, ULONGLONG* arg7); //0x110
    VOID (*PerfControlHandler)(ULONGLONG arg1, ULONGLONG arg2, ULONG arg3, ULONG arg4, ULONG arg5, UCHAR arg6, UCHAR arg7, UCHAR arg8); //0x118
    ULONG MaxFrequency;                                                     //0x120
    ULONG NominalFrequency;                                                 //0x124
    ULONG MaxPercent;                                                       //0x128
    ULONG MinPerfPercent;                                                   //0x12c
    ULONG MinThrottlePercent;                                               //0x130
    ULONGLONG MinimumRelativePerformance;                                   //0x138
    ULONGLONG NominalRelativePerformance;                                   //0x140
    UCHAR Coordination;                                                     //0x148
    UCHAR HardPlatformCap;                                                  //0x149
    UCHAR AffinitizeControl;                                                //0x14a
    UCHAR EfficientThrottle;                                                //0x14b
    UCHAR AutonomousMode;                                                   //0x14c
    ULONG SelectedPercent;                                                  //0x150
    ULONG SelectedFrequency;                                                //0x154
    ULONG DesiredPercent;                                                   //0x158
    ULONG MaxPolicyPercent;                                                 //0x15c
    ULONG MinPolicyPercent;                                                 //0x160
    ULONG ConstrainedMaxPercent;                                            //0x164
    ULONG ConstrainedMinPercent;                                            //0x168
    ULONG GuaranteedPercent;                                                //0x16c
    ULONG TolerancePercent;                                                 //0x170
    ULONGLONG SelectedState;                                                //0x178
    ULONGLONG PerfChangeTime;                                               //0x180
    ULONG PerfChangeIntervalCount;                                          //0x188
    UCHAR Force;                                                            //0x18c
    UCHAR ProvideGuidance;                                                  //0x18d
};
/* Used in */
// _PROCESSOR_POWER_STATE

