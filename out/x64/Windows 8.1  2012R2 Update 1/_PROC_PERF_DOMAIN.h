#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_KPRCB.h>
#include <_KAFFINITY_EX.h>
#include <_PROC_PERF_CONSTRAINT.h>

//0x158 bytes (sizeof)
struct _PROC_PERF_DOMAIN
{
    struct _LIST_ENTRY Link;                                                //0x0
    struct _KPRCB* Master;                                                  //0x10
    struct _KAFFINITY_EX Members;                                           //0x18
    ULONG ProcessorCount;                                                   //0xc0
    struct _PROC_PERF_CONSTRAINT* Processors;                               //0xc8
    VOID (*GetFFHThrottleState)(ULONGLONG* arg1);                           //0xd0
    VOID (*BoostPolicyHandler)(ULONG arg1);                                 //0xd8
    VOID (*BoostModeHandler)(ULONG arg1);                                   //0xe0
    ULONG (*PerfSelectionHandler)(ULONGLONG arg1, ULONG arg2, ULONG arg3, ULONG arg4, ULONG arg5, ULONG* arg6, ULONGLONG* arg7); //0xe8
    VOID (*PerfControlHandler)(ULONGLONG arg1, ULONGLONG arg2, ULONG arg3, ULONG arg4, ULONG arg5, ULONG arg6, UCHAR arg7, UCHAR arg8); //0xf0
    ULONG MaxFrequency;                                                     //0xf8
    ULONG NominalFrequency;                                                 //0xfc
    ULONG MaxPercent;                                                       //0x100
    ULONG MinPerfPercent;                                                   //0x104
    ULONG MinThrottlePercent;                                               //0x108
    UCHAR Coordination;                                                     //0x10c
    UCHAR HardPlatformCap;                                                  //0x10d
    UCHAR AffinitizeControl;                                                //0x10e
    ULONG SelectedPercent;                                                  //0x110
    ULONG SelectedFrequency;                                                //0x114
    ULONG DesiredPercent;                                                   //0x118
    ULONG MaxPolicyPercent;                                                 //0x11c
    ULONG MinPolicyPercent;                                                 //0x120
    ULONG ConstrainedMaxPercent;                                            //0x124
    ULONG ConstrainedMinPercent;                                            //0x128
    ULONG GuaranteedPercent;                                                //0x12c
    ULONG TolerancePercent;                                                 //0x130
    ULONGLONG SelectedState;                                                //0x138
    UCHAR Force;                                                            //0x140
    ULONGLONG PerfChangeTime;                                               //0x148
    ULONG PerfChangeIntervalCount;                                          //0x150
};
/* Used in */
// _PROCESSOR_POWER_STATE

