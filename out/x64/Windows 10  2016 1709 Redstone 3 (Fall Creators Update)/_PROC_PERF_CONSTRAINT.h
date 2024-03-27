#pragma once
/* ------------------ */

#include <_KPRCB.h>
#include <_PERF_CONTROL_STATE_SELECTION.h>

//0x78 bytes (sizeof)
struct _PROC_PERF_CONSTRAINT
{
    struct _KPRCB* Prcb;                                                    //0x0
    ULONGLONG PerfContext;                                                  //0x8
    ULONG PlatformCap;                                                      //0x10
    ULONG ThermalCap;                                                       //0x14
    ULONG LimitReasons;                                                     //0x18
    ULONGLONG PlatformCapStartTime;                                         //0x20
    ULONG ProcCap;                                                          //0x28
    ULONG ProcFloor;                                                        //0x2c
    ULONG TargetPercent;                                                    //0x30
    struct _PERF_CONTROL_STATE_SELECTION Selection;                         //0x38
    ULONG DomainSelectionGeneration;                                        //0x60
    ULONG PreviousFrequency;                                                //0x64
    ULONG PreviousPercent;                                                  //0x68
    ULONG LatestFrequencyPercent;                                           //0x6c
    UCHAR Force;                                                            //0x70
};
/* Used in */
// _PROCESSOR_POWER_STATE
// _PROC_PERF_DOMAIN

