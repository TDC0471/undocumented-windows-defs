#pragma once
/* ------------------ */

#include <_PROC_PERF_HISTORY_ENTRY.h>

//0x38 bytes (sizeof)
struct _PROC_PERF_HISTORY
{
    ULONG Count;                                                            //0x0
    ULONG Slot;                                                             //0x4
    ULONG UtilityTotal;                                                     //0x8
    ULONG AffinitizedUtilityTotal;                                          //0xc
    ULONG FrequencyTotal;                                                   //0x10
    ULONG ImportantPercentTotal;                                            //0x14
    ULONG IdealPercentTotal;                                                //0x18
    ULONG TaggedPercentTotal[4];                                            //0x1c
    struct _PROC_PERF_HISTORY_ENTRY HistoryList[1];                         //0x2c
};
/* Used in */
// _PROC_PERF_CHECK_CONTEXT

