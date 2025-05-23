#pragma once
/* ------------------ */

#include <_KPRCB.h>
#include <_PERF_CONTROL_STATE_SELECTION.h>

//0x88 bytes (sizeof)
struct _PROC_PERF_CONSTRAINT
{
    struct _KPRCB* Prcb;                                                    //0x0
    ULONGLONG PerfContext;                                                  //0x8
    UCHAR HiddenProcessor;                                                  //0x10
    ULONG HiddenProcessorId;                                                //0x14
    ULONG PlatformCap;                                                      //0x18
    ULONG ThermalCap;                                                       //0x1c
    ULONG LimitReasons;                                                     //0x20
    ULONGLONG PlatformCapStartTime;                                         //0x28
    ULONG ProcCap;                                                          //0x30
    ULONG ProcFloor;                                                        //0x34
    ULONG TargetPercent;                                                    //0x38
    UCHAR EngageResponsivenessOverrides;                                    //0x3c
    UCHAR ResponsivenessChangeCount;                                        //0x3d
    struct _PERF_CONTROL_STATE_SELECTION Selection;                         //0x40
    ULONG DomainSelectionGeneration;                                        //0x68
    ULONG PreviousFrequency;                                                //0x6c
    ULONG PreviousPercent;                                                  //0x70
    ULONG LatestFrequencyPercent;                                           //0x74
    UCHAR Force;                                                            //0x78
    UCHAR UseQosUpdateLock;                                                 //0x79
    ULONGLONG QosUpdateLock;                                                //0x80
};
/* Used in */
// _PROCESSOR_POWER_STATE
// _PROC_PERF_DOMAIN

