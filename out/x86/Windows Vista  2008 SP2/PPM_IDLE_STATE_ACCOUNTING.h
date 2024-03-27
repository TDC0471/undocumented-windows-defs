#pragma once
/* ------------------ */


//0x30 bytes (sizeof)
struct PPM_IDLE_STATE_ACCOUNTING
{
    ULONG IdleTransitions;                                                  //0x0
    ULONG FailedTransitions;                                                //0x4
    ULONG InvalidBucketIndex;                                               //0x8
    ULONGLONG TotalTime;                                                    //0x10
    ULONG IdleTimeBuckets[6];                                               //0x18
};
/* Used in */
// PPM_IDLE_ACCOUNTING

