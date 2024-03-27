#pragma once
/* ------------------ */

#include <_KPRCB.h>

//0x58 bytes (sizeof)
struct _PROC_PERF_CONSTRAINT
{
    struct _KPRCB* Prcb;                                                    //0x0
    ULONGLONG PerfContext;                                                  //0x8
    ULONG ProcCap;                                                          //0x10
    ULONG ProcFloor;                                                        //0x14
    ULONG PlatformCap;                                                      //0x18
    ULONG ThermalCap;                                                       //0x1c
    ULONG LimitReasons;                                                     //0x20
    ULONGLONG PlatformCapStartTime;                                         //0x28
    ULONG TargetPercent;                                                    //0x30
    ULONG SelectedPercent;                                                  //0x34
    ULONG SelectedFrequency;                                                //0x38
    ULONG PreviousFrequency;                                                //0x3c
    ULONG PreviousPercent;                                                  //0x40
    ULONG LatestFrequencyPercent;                                           //0x44
    ULONGLONG SelectedState;                                                //0x48
    UCHAR Force;                                                            //0x50
};
/* Used in */
// _PROCESSOR_POWER_STATE
// _PROC_PERF_DOMAIN

