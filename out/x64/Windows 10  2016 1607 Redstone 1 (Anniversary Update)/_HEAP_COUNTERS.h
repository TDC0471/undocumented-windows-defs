#pragma once
/* ------------------ */


//0x78 bytes (sizeof)
struct _HEAP_COUNTERS
{
    ULONGLONG TotalMemoryReserved;                                          //0x0
    ULONGLONG TotalMemoryCommitted;                                         //0x8
    ULONGLONG TotalMemoryLargeUCR;                                          //0x10
    ULONGLONG TotalSizeInVirtualBlocks;                                     //0x18
    ULONG TotalSegments;                                                    //0x20
    ULONG TotalUCRs;                                                        //0x24
    ULONG CommittOps;                                                       //0x28
    ULONG DeCommitOps;                                                      //0x2c
    ULONG LockAcquires;                                                     //0x30
    ULONG LockCollisions;                                                   //0x34
    ULONG CommitRate;                                                       //0x38
    ULONG DecommittRate;                                                    //0x3c
    ULONG CommitFailures;                                                   //0x40
    ULONG InBlockCommitFailures;                                            //0x44
    ULONG PollIntervalCounter;                                              //0x48
    ULONG DecommitsSinceLastCheck;                                          //0x4c
    ULONG HeapPollInterval;                                                 //0x50
    ULONG AllocAndFreeOps;                                                  //0x54
    ULONG AllocationIndicesActive;                                          //0x58
    ULONG InBlockDeccommits;                                                //0x5c
    ULONGLONG InBlockDeccomitSize;                                          //0x60
    ULONGLONG HighWatermarkSize;                                            //0x68
    ULONGLONG LastPolledSize;                                               //0x70
};
/* Used in */
// _HEAP

