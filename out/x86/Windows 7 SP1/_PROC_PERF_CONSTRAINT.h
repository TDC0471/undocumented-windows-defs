#pragma once
/* ------------------ */

#include <_KPRCB.h>

//0x24 bytes (sizeof)
struct _PROC_PERF_CONSTRAINT
{
    struct _KPRCB* Prcb;                                                    //0x0
    ULONG PerfContext;                                                      //0x4
    ULONG PercentageCap;                                                    //0x8
    ULONG ThermalCap;                                                       //0xc
    ULONG TargetFrequency;                                                  //0x10
    ULONG AcumulatedFullFrequency;                                          //0x14
    ULONG AcumulatedZeroFrequency;                                          //0x18
    ULONG FrequencyHistoryTotal;                                            //0x1c
    ULONG AverageFrequency;                                                 //0x20
};
/* Used in */
// _PROCESSOR_POWER_STATE
// _PROC_PERF_DOMAIN

