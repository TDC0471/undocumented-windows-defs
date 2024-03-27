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

//0x588 bytes (sizeof)
struct _HEAP
{
    struct _HEAP_ENTRY Entry;                                               //0x0
    ULONG Signature;                                                        //0x8
    ULONG Flags;                                                            //0xc
    ULONG ForceFlags;                                                       //0x10
    ULONG VirtualMemoryThreshold;                                           //0x14
    ULONG SegmentReserve;                                                   //0x18
    ULONG SegmentCommit;                                                    //0x1c
    ULONG DeCommitFreeBlockThreshold;                                       //0x20
    ULONG DeCommitTotalFreeThreshold;                                       //0x24
    ULONG TotalFreeSize;                                                    //0x28
    ULONG MaximumAllocationSize;                                            //0x2c
    USHORT ProcessHeapsListIndex;                                           //0x30
    USHORT HeaderValidateLength;                                            //0x32
    VOID* HeaderValidateCopy;                                               //0x34
    USHORT NextAvailableTagIndex;                                           //0x38
    USHORT MaximumTagIndex;                                                 //0x3a
    struct _HEAP_TAG_ENTRY* TagEntries;                                     //0x3c
    struct _HEAP_UCR_SEGMENT* UCRSegments;                                  //0x40
    struct _HEAP_UNCOMMMTTED_RANGE* UnusedUnCommittedRanges;                //0x44
    ULONG AlignRound;                                                       //0x48
    ULONG AlignMask;                                                        //0x4c
    struct _LIST_ENTRY VirtualAllocdBlocks;                                 //0x50
    struct _HEAP_SEGMENT* Segments[64];                                     //0x58
    union
    {
        ULONG FreeListsInUseUlong[4];                                       //0x158
        UCHAR FreeListsInUseBytes[16];                                      //0x158
    } u;                                                                    //0x158
    union
    {
        USHORT FreeListsInUseTerminate;                                     //0x168
        USHORT DecommitCount;                                               //0x168
    } u2;                                                                   //0x168
    USHORT AllocatorBackTraceIndex;                                         //0x16a
    ULONG NonDedicatedListLength;                                           //0x16c
    VOID* LargeBlocksIndex;                                                 //0x170
    struct _HEAP_PSEUDO_TAG_ENTRY* PseudoTagEntries;                        //0x174
    struct _LIST_ENTRY FreeLists[128];                                      //0x178
    struct _HEAP_LOCK* LockVariable;                                        //0x578
    LONG (*CommitRoutine)(VOID* arg1, VOID** arg2, ULONG* arg3);            //0x57c
    VOID* FrontEndHeap;                                                     //0x580
    USHORT FrontHeapLockCount;                                              //0x584
    UCHAR FrontEndHeapType;                                                 //0x586
    UCHAR LastSegmentIndex;                                                 //0x587
};
/* Used in */
// _HEAP_SEGMENT

