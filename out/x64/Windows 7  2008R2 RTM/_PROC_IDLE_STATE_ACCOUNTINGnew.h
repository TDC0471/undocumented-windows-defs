#pragma once
/* ------------------ */

#include <_PROC_IDLE_STATE_BUCKET.h>

//0x228 bytes (sizeof)
struct _PROC_IDLE_STATE_ACCOUNTING
{
    ULONGLONG TotalTime;                                                    //0x0
    ULONG IdleTransitions;                                                  //0x8
    ULONG FailedTransitions;                                                //0xc
    ULONG InvalidBucketIndex;                                               //0x10
    ULONGLONG MinTime;                                                      //0x18
    ULONGLONG MaxTime;                                                      //0x20
    struct _PROC_IDLE_STATE_BUCKET IdleTimeBuckets[16];                     //0x28
};
/* Used in */
// _PROC_IDLE_ACCOUNTING

