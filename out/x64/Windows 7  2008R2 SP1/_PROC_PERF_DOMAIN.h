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
    struct _KPRCB* Master;                                                  //0x10
    struct _KAFFINITY_EX Members;                                           //0x18
    UCHAR (*FeedbackHandler)(ULONG* arg1, ULONGLONG arg2, UCHAR arg3);      //0x40
    VOID (*GetFFHThrottleState)(ULONGLONG* arg1);                           //0x48
    VOID (*BoostPolicyHandler)(ULONG arg1);                                 //0x50
    ULONG (*PerfSelectionHandler)(ULONGLONG arg1, ULONG arg2, ULONG arg3, ULONG arg4, ULONG arg5, ULONG* arg6, ULONG* arg7); //0x58
    VOID (*PerfHandler)(ULONGLONG arg1, ULONG arg2);                        //0x60
    struct _PROC_PERF_CONSTRAINT* Processors;                               //0x68
    ULONGLONG PerfChangeTime;                                               //0x70
    ULONG ProcessorCount;                                                   //0x78
    ULONG PreviousFrequencyMhz;                                             //0x7c
    ULONG CurrentFrequencyMhz;                                              //0x80
    ULONG PreviousFrequency;                                                //0x84
    ULONG CurrentFrequency;                                                 //0x88
    ULONG CurrentPerfContext;                                               //0x8c
    ULONG DesiredFrequency;                                                 //0x90
    ULONG MaxFrequency;                                                     //0x94
    ULONG MinPerfPercent;                                                   //0x98
    ULONG MinThrottlePercent;                                               //0x9c
    ULONG MaxPercent;                                                       //0xa0
    ULONG MinPercent;                                                       //0xa4
    ULONG ConstrainedMaxPercent;                                            //0xa8
    ULONG ConstrainedMinPercent;                                            //0xac
    UCHAR Coordination;                                                     //0xb0
    volatile LONG PerfChangeIntervalCount;                                  //0xb4
};
/* Used in */
// _PROCESSOR_POWER_STATE

