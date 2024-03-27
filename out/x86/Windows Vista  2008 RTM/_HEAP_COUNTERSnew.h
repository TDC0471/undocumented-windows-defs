#pragma once
/* ------------------ */


//0x48 bytes (sizeof)
struct _HEAP_COUNTERS
{
    ULONG TotalMemoryReserved;                                              //0x0
    ULONG TotalMemoryCommitted;                                             //0x4
    ULONG TotalMemoryLargeUCR;                                              //0x8
    ULONG TotalSizeInVirtualBlocks;                                         //0xc
    ULONG TotalSegments;                                                    //0x10
    ULONG TotalUCRs;                                                        //0x14
    ULONG CommittOps;                                                       //0x18
    ULONG DeCommitOps;                                                      //0x1c
    ULONG LockAcquires;                                                     //0x20
    ULONG LockCollisions;                                                   //0x24
    ULONG CommitRate;                                                       //0x28
    ULONG DecommittRate;                                                    //0x2c
    ULONG CommitFailures;                                                   //0x30
    ULONG InBlockCommitFailures;                                            //0x34
    ULONG CompactHeapCalls;                                                 //0x38
    ULONG CompactedUCRs;                                                    //0x3c
    ULONG InBlockDeccommits;                                                //0x40
    ULONG InBlockDeccomitSize;                                              //0x44
};
/* Used in */
// _HEAP

