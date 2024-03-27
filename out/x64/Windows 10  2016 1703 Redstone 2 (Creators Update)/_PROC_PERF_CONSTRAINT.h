#pragma once
/* ------------------ */

#include <_KPRCB.h>
#include <_PERF_CONTROL_STATE_SELECTION.h>

//0x90 bytes (sizeof)
struct _PROC_PERF_CONSTRAINT
{
    struct _KPRCB* Prcb;                                                    //0x0
    ULONGLONG PerfContext;                                                  //0x8
    ULONG PlatformCap;                                                      //0x10
    ULONG ThermalCap;                                                       //0x14
    ULONG LimitReasons;                                                     //0x18
    ULONGLONG PlatformCapStartTime;                                         //0x20
    UCHAR VirtualLittle;                                                    //0x28
    UCHAR ResolvedVirtualLittle;                                            //0x29
    ULONGLONG LastVirtualTranstionTsc;                                      //0x30
    ULONGLONG VirtualTranstionHysteresis;                                   //0x38
    ULONG ProcCap;                                                          //0x40
    ULONG ProcFloor;                                                        //0x44
    ULONG TargetPercent;                                                    //0x48
    struct _PERF_CONTROL_STATE_SELECTION Selection;                         //0x50
    ULONG DomainSelectionGeneration;                                        //0x78
    ULONG PreviousFrequency;                                                //0x7c
    ULONG PreviousPercent;                                                  //0x80
    ULONG LatestFrequencyPercent;                                           //0x84
    UCHAR Force;                                                            //0x88
};
/* Used in */
// _PROCESSOR_POWER_STATE
// _PROC_PERF_DOMAIN

