#pragma once
/* ------------------ */


//0x60 bytes (sizeof)
struct _PROC_PERF_CHECK_SNAP
{
    ULONGLONG Time;                                                         //0x0
    ULONGLONG Active;                                                       //0x8
    ULONGLONG Stall;                                                        //0x10
    ULONGLONG FrequencyScaledActive;                                        //0x18
    ULONGLONG PerformanceScaledActive;                                      //0x20
    ULONGLONG PerformanceScaledKernelActive;                                //0x28
    ULONGLONG CyclesActive;                                                 //0x30
    ULONGLONG CyclesAffinitized;                                            //0x38
    ULONGLONG TaggedThreadCycles[3];                                        //0x40
    ULONG ResponsivenessEvents;                                             //0x58
};
/* Used in */
// _PROC_PERF_CHECK

