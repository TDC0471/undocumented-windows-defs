#pragma once
/* ------------------ */


//0x60 bytes (sizeof)
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
    ULONG CompactHeapCalls;                                                 //0x48
    ULONG CompactedUCRs;                                                    //0x4c
    ULONG InBlockDeccommits;                                                //0x50
    ULONGLONG InBlockDeccomitSize;                                          //0x58
};
/* Used in */
// _HEAP

