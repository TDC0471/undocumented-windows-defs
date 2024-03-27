#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_KPRCB.h>
#include <_KAFFINITY_EX.h>
#include <_PROC_PERF_CONSTRAINT.h>

//0x78 bytes (sizeof)
struct _PROC_PERF_DOMAIN
{
    struct _LIST_ENTRY Link;                                                //0x0
    struct _KPRCB* Master;                                                  //0x8
    struct _KAFFINITY_EX Members;                                           //0xc
    UCHAR (*FeedbackHandler)(ULONG* arg1, ULONG arg2, UCHAR arg3);          //0x18
    VOID (*GetFFHThrottleState)(ULONGLONG* arg1);                           //0x1c
    VOID (*BoostPolicyHandler)(ULONG arg1);                                 //0x20
    ULONG (*PerfSelectionHandler)(ULONG arg1, ULONG arg2, ULONG arg3, ULONG arg4, ULONG arg5, ULONG* arg6, ULONG* arg7); //0x24
    VOID (*PerfHandler)(ULONG arg1, ULONG arg2);                            //0x28
    struct _PROC_PERF_CONSTRAINT* Processors;                               //0x2c
    ULONGLONG PerfChangeTime;                                               //0x30
    ULONG ProcessorCount;                                                   //0x38
    ULONG PreviousFrequencyMhz;                                             //0x3c
    ULONG CurrentFrequencyMhz;                                              //0x40
    ULONG PreviousFrequency;                                                //0x44
    ULONG CurrentFrequency;                                                 //0x48
    ULONG CurrentPerfContext;                                               //0x4c
    ULONG DesiredFrequency;                                                 //0x50
    ULONG MaxFrequency;                                                     //0x54
    ULONG MinPerfPercent;                                                   //0x58
    ULONG MinThrottlePercent;                                               //0x5c
    ULONG MaxPercent;                                                       //0x60
    ULONG MinPercent;                                                       //0x64
    ULONG ConstrainedMaxPercent;                                            //0x68
    ULONG ConstrainedMinPercent;                                            //0x6c
    UCHAR Coordination;                                                     //0x70
    volatile LONG PerfChangeIntervalCount;                                  //0x74
};
/* Used in */
// _PROCESSOR_POWER_STATE

