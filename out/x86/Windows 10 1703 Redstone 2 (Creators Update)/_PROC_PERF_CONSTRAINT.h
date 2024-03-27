#pragma once
/* ------------------ */

#include <_KPRCB.h>
#include <_PERF_CONTROL_STATE_SELECTION.h>

//0x88 bytes (sizeof)
struct _PROC_PERF_CONSTRAINT
{
    struct _KPRCB* Prcb;                                                    //0x0
    ULONG PerfContext;                                                      //0x4
    ULONG PlatformCap;                                                      //0x8
    ULONG ThermalCap;                                                       //0xc
    ULONG LimitReasons;                                                     //0x10
    ULONGLONG PlatformCapStartTime;                                         //0x18
    UCHAR VirtualLittle;                                                    //0x20
    UCHAR ResolvedVirtualLittle;                                            //0x21
    ULONGLONG LastVirtualTranstionTsc;                                      //0x28
    ULONGLONG VirtualTranstionHysteresis;                                   //0x30
    ULONG ProcCap;                                                          //0x38
    ULONG ProcFloor;                                                        //0x3c
    ULONG TargetPercent;                                                    //0x40
    struct _PERF_CONTROL_STATE_SELECTION Selection;                         //0x48
    ULONG DomainSelectionGeneration;                                        //0x70
    ULONG PreviousFrequency;                                                //0x74
    ULONG PreviousPercent;                                                  //0x78
    ULONG LatestFrequencyPercent;                                           //0x7c
    UCHAR Force;                                                            //0x80
};
/* Used in */
// _PROCESSOR_POWER_STATE
// _PROC_PERF_DOMAIN

