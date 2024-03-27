#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_KPRCB.h>
#include <_KAFFINITY_EX.h>
#include <_PROC_PERF_CONSTRAINT.h>

//0x90 bytes (sizeof)
struct _PROC_PERF_DOMAIN
{
    struct _LIST_ENTRY Link;                                                //0x0
    struct _KPRCB* Master;                                                  //0x8
    struct _KAFFINITY_EX Members;                                           //0xc
    ULONG ProcessorCount;                                                   //0x18
    struct _PROC_PERF_CONSTRAINT* Processors;                               //0x1c
    VOID (*GetFFHThrottleState)(ULONGLONG* arg1);                           //0x20
    VOID (*BoostPolicyHandler)(ULONG arg1);                                 //0x24
    VOID (*BoostModeHandler)(ULONG arg1);                                   //0x28
    ULONG (*PerfSelectionHandler)(ULONG arg1, ULONG arg2, ULONG arg3, ULONG arg4, ULONG arg5, ULONG* arg6, ULONGLONG* arg7); //0x2c
    VOID (*PerfControlHandler)(ULONG arg1, ULONGLONG arg2, ULONG arg3, ULONG arg4, ULONG arg5, ULONG arg6, UCHAR arg7, UCHAR arg8); //0x30
    ULONG MaxFrequency;                                                     //0x34
    ULONG NominalFrequency;                                                 //0x38
    ULONG MaxPercent;                                                       //0x3c
    ULONG MinPerfPercent;                                                   //0x40
    ULONG MinThrottlePercent;                                               //0x44
    UCHAR Coordination;                                                     //0x48
    UCHAR HardPlatformCap;                                                  //0x49
    UCHAR AffinitizeControl;                                                //0x4a
    ULONG SelectedPercent;                                                  //0x4c
    ULONG SelectedFrequency;                                                //0x50
    ULONG DesiredPercent;                                                   //0x54
    ULONG MaxPolicyPercent;                                                 //0x58
    ULONG MinPolicyPercent;                                                 //0x5c
    ULONG ConstrainedMaxPercent;                                            //0x60
    ULONG ConstrainedMinPercent;                                            //0x64
    ULONG GuaranteedPercent;                                                //0x68
    ULONG TolerancePercent;                                                 //0x6c
    ULONGLONG SelectedState;                                                //0x70
    UCHAR Force;                                                            //0x78
    ULONGLONG PerfChangeTime;                                               //0x80
    ULONG PerfChangeIntervalCount;                                          //0x88
};
/* Used in */
// _PROCESSOR_POWER_STATE

