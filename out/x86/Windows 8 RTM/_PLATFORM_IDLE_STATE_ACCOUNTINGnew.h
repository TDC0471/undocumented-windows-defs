#pragma once
/* ------------------ */

#include <_PROC_IDLE_STATE_BUCKET.h>

//0x370 bytes (sizeof)
struct _PLATFORM_IDLE_STATE_ACCOUNTING
{
    ULONG CancelCount;                                                      //0x0
    ULONG FailureCount;                                                     //0x4
    ULONG SuccessCount;                                                     //0x8
    ULONGLONG MaxTime;                                                      //0x10
    ULONGLONG MinTime;                                                      //0x18
    ULONGLONG TotalTime;                                                    //0x20
    ULONG InvalidBucketIndex;                                               //0x28
    struct _PROC_IDLE_STATE_BUCKET IdleTimeBuckets[26];                     //0x30
};
/* Used in */
// _PLATFORM_IDLE_ACCOUNTING

