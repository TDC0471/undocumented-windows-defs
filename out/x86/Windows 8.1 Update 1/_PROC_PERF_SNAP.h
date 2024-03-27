#pragma once
/* ------------------ */


//0x40 bytes (sizeof)
struct _PROC_PERF_SNAP
{
    ULONGLONG Time;                                                         //0x0
    ULONGLONG LastTime;                                                     //0x8
    ULONGLONG Active;                                                       //0x10
    ULONGLONG LastActive;                                                   //0x18
    ULONGLONG FrequencyScaledActive;                                        //0x20
    ULONGLONG PerformanceScaledActive;                                      //0x28
    ULONGLONG CyclesActive;                                                 //0x30
    ULONGLONG CyclesAffinitized;                                            //0x38
};
/* Used in */
// _PROCESSOR_POWER_STATE

