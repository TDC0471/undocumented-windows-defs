#pragma once
/* ------------------ */

#include <_PROC_PERF_HISTORY_ENTRY.h>

//0x2c bytes (sizeof)
struct _PROC_PERF_HISTORY
{
    ULONG Count;                                                            //0x0
    ULONG Slot;                                                             //0x4
    ULONG UtilityTotal;                                                     //0x8
    ULONG AffinitizedUtilityTotal;                                          //0xc
    ULONG FrequencyTotal;                                                   //0x10
    ULONG TaggedPercentTotal[3];                                            //0x14
    struct _PROC_PERF_HISTORY_ENTRY HistoryList[1];                         //0x20
};
/* Used in */
// _PROC_PERF_CHECK_CONTEXT

