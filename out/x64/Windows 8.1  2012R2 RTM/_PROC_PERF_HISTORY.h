#pragma once
/* ------------------ */

#include <_PROC_PERF_HISTORY_ENTRY.h>

//0x10 bytes (sizeof)
struct _PROC_PERF_HISTORY
{
    ULONG Count;                                                            //0x0
    ULONG Slot;                                                             //0x4
    struct _PROC_PERF_HISTORY_ENTRY HistoryList[1];                         //0x8
};
/* Used in */
// _PROCESSOR_POWER_STATE

