#pragma once
/* ------------------ */

#include <_PROC_PERF_CHECK_CONTEXT.h>
#include <_PROCESSOR_PRESENCE.h>
#include <_PERF_CONTROL_STATE_SELECTION.h>

//0x88 bytes (sizeof)
struct _PROC_PERF_CONSTRAINT
{
    struct _PROC_PERF_CHECK_CONTEXT* CheckContext;                          //0x0
    ULONGLONG PerfContext;                                                  //0x8
    enum _PROCESSOR_PRESENCE Presence;                                      //0x10
    ULONG ProcessorId;                                                      //0x14
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
    ULONG LatestPerformancePercent;                                         //0x78
    UCHAR Force;                                                            //0x7c
    UCHAR UseQosUpdateLock;                                                 //0x7d
    ULONGLONG QosUpdateLock;                                                //0x80
};
/* Used in */
// _PROC_PERF_CHECK_CONTEXT
// _PROC_PERF_DOMAIN

