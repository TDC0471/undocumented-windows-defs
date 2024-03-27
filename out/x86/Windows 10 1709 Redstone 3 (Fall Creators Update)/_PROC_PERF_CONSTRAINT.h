#pragma once
/* ------------------ */

#include <_KPRCB.h>
#include <_PERF_CONTROL_STATE_SELECTION.h>

//0x70 bytes (sizeof)
struct _PROC_PERF_CONSTRAINT
{
    struct _KPRCB* Prcb;                                                    //0x0
    ULONG PerfContext;                                                      //0x4
    ULONG PlatformCap;                                                      //0x8
    ULONG ThermalCap;                                                       //0xc
    ULONG LimitReasons;                                                     //0x10
    ULONGLONG PlatformCapStartTime;                                         //0x18
    ULONG ProcCap;                                                          //0x20
    ULONG ProcFloor;                                                        //0x24
    ULONG TargetPercent;                                                    //0x28
    struct _PERF_CONTROL_STATE_SELECTION Selection;                         //0x30
    ULONG DomainSelectionGeneration;                                        //0x58
    ULONG PreviousFrequency;                                                //0x5c
    ULONG PreviousPercent;                                                  //0x60
    ULONG LatestFrequencyPercent;                                           //0x64
    UCHAR Force;                                                            //0x68
};
/* Used in */
// _PROCESSOR_POWER_STATE
// _PROC_PERF_DOMAIN

