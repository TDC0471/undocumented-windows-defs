#pragma once
/* ------------------ */

#include <_PPM_SELECTION_STATISTICS.h>
#include <_PROC_IDLE_STATE_BUCKET.h>

//0x3e0 bytes (sizeof)
struct _PLATFORM_IDLE_STATE_ACCOUNTING
{
    ULONG CancelCount;                                                      //0x0
    ULONG FailureCount;                                                     //0x4
    ULONG SuccessCount;                                                     //0x8
    ULONGLONG MaxTime;                                                      //0x10
    ULONGLONG MinTime;                                                      //0x18
    ULONGLONG TotalTime;                                                    //0x20
    ULONG InvalidBucketIndex;                                               //0x28
    struct _PPM_SELECTION_STATISTICS SelectionStatistics;                   //0x30
    struct _PROC_IDLE_STATE_BUCKET IdleTimeBuckets[26];                     //0xa0
};
/* Used in */
// _PLATFORM_IDLE_ACCOUNTING

