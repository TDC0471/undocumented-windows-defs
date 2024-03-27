#pragma once
/* ------------------ */

#include <_KPRCB.h>

//0x30 bytes (sizeof)
struct _PROC_PERF_CONSTRAINT
{
    struct _KPRCB* Prcb;                                                    //0x0
    ULONGLONG PerfContext;                                                  //0x8
    ULONG PercentageCap;                                                    //0x10
    ULONG ThermalCap;                                                       //0x14
    ULONG TargetFrequency;                                                  //0x18
    ULONG AcumulatedFullFrequency;                                          //0x1c
    ULONG AcumulatedZeroFrequency;                                          //0x20
    ULONG FrequencyHistoryTotal;                                            //0x24
    ULONG AverageFrequency;                                                 //0x28
};
/* Used in */
// _PROCESSOR_POWER_STATE
// _PROC_PERF_DOMAIN

