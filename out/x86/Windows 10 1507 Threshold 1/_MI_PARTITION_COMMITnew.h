#pragma once
/* ------------------ */


//0x20 bytes (sizeof)
struct _MI_PARTITION_COMMIT
{
    ULONG PeakCommitment;                                                   //0x0
    ULONG TotalCommitLimitMaximum;                                          //0x4
    volatile LONG Popups[2];                                                //0x8
    ULONG LowCommitThreshold;                                               //0x10
    ULONG HighCommitThreshold;                                              //0x14
    ULONG EventLock;                                                        //0x18
    ULONG SystemCommitReserve;                                              //0x1c
};
/* Used in */
// _MI_PARTITION

