#pragma once
/* ------------------ */

#include <_KPRCB.h>

//0x50 bytes (sizeof)
struct _PROC_PERF_CONSTRAINT
{
    struct _KPRCB* Prcb;                                                    //0x0
    ULONG PerfContext;                                                      //0x4
    ULONG ProcCap;                                                          //0x8
    ULONG ProcFloor;                                                        //0xc
    ULONG PlatformCap;                                                      //0x10
    ULONG ThermalCap;                                                       //0x14
    ULONG LimitReasons;                                                     //0x18
    ULONGLONG PlatformCapStartTime;                                         //0x20
    ULONG TargetPercent;                                                    //0x28
    ULONG SelectedPercent;                                                  //0x2c
    ULONG SelectedFrequency;                                                //0x30
    ULONG PreviousFrequency;                                                //0x34
    ULONG PreviousPercent;                                                  //0x38
    ULONG LatestFrequencyPercent;                                           //0x3c
    ULONGLONG SelectedState;                                                //0x40
    UCHAR Force;                                                            //0x48
};
/* Used in */
// _PROCESSOR_POWER_STATE
// _PROC_PERF_DOMAIN

