#pragma once
/* ------------------ */


//0x80 bytes (sizeof)
struct _MI_PARTITION_COMMIT
{
    ULONGLONG PeakCommitment;                                               //0x0
    ULONGLONG TotalCommitLimitMaximum;                                      //0x8
    volatile LONG Popups[2];                                                //0x10
    ULONGLONG LowCommitThreshold;                                           //0x18
    ULONGLONG HighCommitThreshold;                                          //0x20
    ULONGLONG EventLock;                                                    //0x28
    ULONGLONG SystemCommitReserve;                                          //0x30
    volatile ULONGLONG OverCommit;                                          //0x40
};
/* Used in */
// _MI_PARTITION

