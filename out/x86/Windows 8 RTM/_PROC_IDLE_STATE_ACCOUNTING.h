#pragma once
/* ------------------ */

#include <_PROC_IDLE_STATE_BUCKET.h>

//0x368 bytes (sizeof)
struct _PROC_IDLE_STATE_ACCOUNTING
{
    ULONGLONG TotalTime;                                                    //0x0
    ULONG CancelCount;                                                      //0x8
    ULONG FailureCount;                                                     //0xc
    ULONG SuccessCount;                                                     //0x10
    ULONG InvalidBucketIndex;                                               //0x14
    ULONGLONG MinTime;                                                      //0x18
    ULONGLONG MaxTime;                                                      //0x20
    struct _PROC_IDLE_STATE_BUCKET IdleTimeBuckets[26];                     //0x28
};
/* Used in */
// _PROC_IDLE_ACCOUNTING

