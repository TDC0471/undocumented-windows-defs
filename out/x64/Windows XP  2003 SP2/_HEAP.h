#pragma once
/* ------------------ */

#include <_HEAP_ENTRY.h>
#include <_HEAP_TAG_ENTRY.h>
#include <_HEAP_UCR_SEGMENT.h>
#include <_HEAP_UNCOMMMTTED_RANGE.h>
#include <_LIST_ENTRY.h>
#include <_HEAP_SEGMENT.h>
#include <_HEAP_PSEUDO_TAG_ENTRY.h>
#include <_HEAP_LOCK.h>

//0xae8 bytes (sizeof)
struct _HEAP
{
    struct _HEAP_ENTRY Entry;                                               //0x0
    ULONG Signature;                                                        //0x10
    ULONG Flags;                                                            //0x14
    ULONG ForceFlags;                                                       //0x18
    ULONG VirtualMemoryThreshold;                                           //0x1c
    ULONGLONG SegmentReserve;                                               //0x20
    ULONGLONG SegmentCommit;                                                //0x28
    ULONGLONG DeCommitFreeBlockThreshold;                                   //0x30
    ULONGLONG DeCommitTotalFreeThreshold;                                   //0x38
    ULONGLONG TotalFreeSize;                                                //0x40
    ULONGLONG MaximumAllocationSize;                                        //0x48
    USHORT ProcessHeapsListIndex;                                           //0x50
    USHORT HeaderValidateLength;                                            //0x52
    VOID* HeaderValidateCopy;                                               //0x58
    USHORT NextAvailableTagIndex;                                           //0x60
    USHORT MaximumTagIndex;                                                 //0x62
    struct _HEAP_TAG_ENTRY* TagEntries;                                     //0x68
    struct _HEAP_UCR_SEGMENT* UCRSegments;                                  //0x70
    struct _HEAP_UNCOMMMTTED_RANGE* UnusedUnCommittedRanges;                //0x78
    ULONGLONG AlignRound;                                                   //0x80
    ULONGLONG AlignMask;                                                    //0x88
    struct _LIST_ENTRY VirtualAllocdBlocks;                                 //0x90
    struct _HEAP_SEGMENT* Segments[64];                                     //0xa0
    union
    {
        ULONG FreeListsInUseUlong[4];                                       //0x2a0
        UCHAR FreeListsInUseBytes[16];                                      //0x2a0
    } u;                                                                    //0x2a0
    union
    {
        USHORT FreeListsInUseTerminate;                                     //0x2b0
        USHORT DecommitCount;                                               //0x2b0
    } u2;                                                                   //0x2b0
    USHORT AllocatorBackTraceIndex;                                         //0x2b2
    ULONG NonDedicatedListLength;                                           //0x2b4
    VOID* LargeBlocksIndex;                                                 //0x2b8
    struct _HEAP_PSEUDO_TAG_ENTRY* PseudoTagEntries;                        //0x2c0
    struct _LIST_ENTRY FreeLists[128];                                      //0x2c8
    struct _HEAP_LOCK* LockVariable;                                        //0xac8
    LONG (*CommitRoutine)(VOID* arg1, VOID** arg2, ULONGLONG* arg3);        //0xad0
    VOID* FrontEndHeap;                                                     //0xad8
    USHORT FrontHeapLockCount;                                              //0xae0
    UCHAR FrontEndHeapType;                                                 //0xae2
    UCHAR LastSegmentIndex;                                                 //0xae3
};
/* Used in */
// _HEAP_SEGMENT

