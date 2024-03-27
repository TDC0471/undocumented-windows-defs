#pragma once
/* ------------------ */

#include <_KPRCB.h>

//0x50 bytes (sizeof)
struct _PROC_PERF_CONSTRAINT
{
    struct _KPRCB* Prcb;                                                    //0x0
    ULONG PerfContext;                                                      //0x4
    ULONG PlatformCap;                                                      //0x8
    ULONG ThermalCap;                                                       //0xc
    ULONG LimitReasons;                                                     //0x10
    ULONGLONG PlatformCapStartTime;                                         //0x18
    ULONG TargetPercent;                                                    //0x20
    ULONG DesiredPercent;                                                   //0x24
    ULONG SelectedPercent;                                                  //0x28
    ULONG SelectedFrequency;                                                //0x2c
    ULONG PreviousFrequency;                                                //0x30
    ULONG PreviousPercent;                                                  //0x34
    ULONG LatestFrequencyPercent;                                           //0x38
    ULONGLONG SelectedState;                                                //0x40
    UCHAR Force;                                                            //0x48
};
/* Used in */
// _PROCESSOR_POWER_STATE
// _PROC_PERF_DOMAIN

