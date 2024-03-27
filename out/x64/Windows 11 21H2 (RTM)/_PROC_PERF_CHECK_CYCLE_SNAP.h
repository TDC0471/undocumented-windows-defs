#pragma once
/* ------------------ */


//0x40 bytes (sizeof)
struct _PROC_PERF_CHECK_CYCLE_SNAP
{
    ULONGLONG CyclesActive;                                                 //0x0
    ULONGLONG CyclesAffinitized;                                            //0x8
    ULONGLONG TaggedThreadCycles[4];                                        //0x10
    ULONG WorkloadClasses;                                                  //0x30
    ULONGLONG ThreadTypeCycles[1];                                          //0x38
};
/* Used in */
// _PROC_PERF_CHECK

