#pragma once
/* ------------------ */

#include <_PROC_PERF_HISTORY_ENTRY.h>

//0x34 bytes (sizeof)
struct _PROC_PERF_HISTORY
{
    ULONG Count;                                                            //0x0
    ULONG Slot;                                                             //0x4
    ULONG UtilityTotal;                                                     //0x8
    ULONG AffinitizedUtilityTotal;                                          //0xc
    ULONG FrequencyTotal;                                                   //0x10
    ULONG ImportantPercentTotal;                                            //0x14
    ULONG TaggedPercentTotal[4];                                            //0x18
    struct _PROC_PERF_HISTORY_ENTRY HistoryList[1];                         //0x28
};
/* Used in */
// _PROC_PERF_CHECK_CONTEXT

