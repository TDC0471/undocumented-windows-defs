#pragma once
/* ------------------ */

#include <_KPRCB.h>

//0x58 bytes (sizeof)
struct _PROC_PERF_CONSTRAINT
{
    struct _KPRCB* Prcb;                                                    //0x0
    ULONGLONG PerfContext;                                                  //0x8
    ULONG PlatformCap;                                                      //0x10
    ULONG ThermalCap;                                                       //0x14
    ULONG LimitReasons;                                                     //0x18
    ULONGLONG PlatformCapStartTime;                                         //0x20
    ULONG TargetPercent;                                                    //0x28
    ULONG DesiredPercent;                                                   //0x2c
    ULONG SelectedPercent;                                                  //0x30
    ULONG SelectedFrequency;                                                //0x34
    ULONG PreviousFrequency;                                                //0x38
    ULONG PreviousPercent;                                                  //0x3c
    ULONG LatestFrequencyPercent;                                           //0x40
    ULONGLONG SelectedState;                                                //0x48
    UCHAR Force;                                                            //0x50
};
/* Used in */
// _PROCESSOR_POWER_STATE
// _PROC_PERF_DOMAIN

