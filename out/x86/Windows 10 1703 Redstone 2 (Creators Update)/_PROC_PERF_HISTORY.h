#pragma once
/* ------------------ */

#include <_PROC_PERF_HISTORY_ENTRY.h>

//0x24 bytes (sizeof)
struct _PROC_PERF_HISTORY
{
    ULONG Count;                                                            //0x0
    ULONG Slot;                                                             //0x4
    ULONG UtilityTotal;                                                     //0x8
    ULONG AffinitizedUtilityTotal;                                          //0xc
    ULONG FrequencyTotal;                                                   //0x10
    ULONG TaggedPercentTotal[2];                                            //0x14
    struct _PROC_PERF_HISTORY_ENTRY HistoryList[1];                         //0x1c
};
/* Used in */
// _PROCESSOR_POWER_STATE

