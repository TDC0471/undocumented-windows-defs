#pragma once
/* ------------------ */

#include <_HEAP_SEGMENT.h>
#include <_HEAP_ENTRY.h>
#include <_LIST_ENTRY.h>
#include <_HEAP.h>
#include <_HEAP_TAG_ENTRY.h>
#include <_HEAP_PSEUDO_TAG_ENTRY.h>
#include <_HEAP_LOCK.h>
#include <_HEAP_COUNTERS.h>
#include <_HEAP_TUNING_PARAMETERS.h>

//0x248 bytes (sizeof)
struct _HEAP
{
    union
    {
        struct _HEAP_SEGMENT Segment;                                       //0x0
        struct
        {
            struct _HEAP_ENTRY Entry;                                       //0x0
            ULONG SegmentSignature;                                         //0x8
            ULONG SegmentFlags;                                             //0xc
            struct _LIST_ENTRY SegmentListEntry;                            //0x10
            struct _HEAP* Heap;                                             //0x18
            VOID* BaseAddress;                                              //0x1c
            ULONG NumberOfPages;                                            //0x20
            struct _HEAP_ENTRY* FirstEntry;                                 //0x24
            struct _HEAP_ENTRY* LastValidEntry;                             //0x28
            ULONG NumberOfUnCommittedPages;                                 //0x2c
            ULONG NumberOfUnCommittedRanges;                                //0x30
            USHORT SegmentAllocatorBackTraceIndex;                          //0x34
            USHORT Reserved;                                                //0x36
            struct _LIST_ENTRY UCRSegmentList;                              //0x38
        };
    };
    ULONG Flags;                                                            //0x40
    ULONG ForceFlags;                                                       //0x44
    ULONG CompatibilityFlags;                                               //0x48
    ULONG EncodeFlagMask;                                                   //0x4c
    struct _HEAP_ENTRY Encoding;                                            //0x50
    ULONG Interceptor;                                                      //0x58
    ULONG VirtualMemoryThreshold;                                           //0x5c
    ULONG Signature;                                                        //0x60
    ULONG SegmentReserve;                                                   //0x64
    ULONG SegmentCommit;                                                    //0x68
    ULONG DeCommitFreeBlockThreshold;                                       //0x6c
    ULONG DeCommitTotalFreeThreshold;                                       //0x70
    ULONG TotalFreeSize;                                                    //0x74
    ULONG MaximumAllocationSize;                                            //0x78
    USHORT ProcessHeapsListIndex;                                           //0x7c
    USHORT HeaderValidateLength;                                            //0x7e
    VOID* HeaderValidateCopy;                                               //0x80
    USHORT NextAvailableTagIndex;                                           //0x84
    USHORT MaximumTagIndex;                                                 //0x86
    struct _HEAP_TAG_ENTRY* TagEntries;                                     //0x88
    struct _LIST_ENTRY UCRList;                                             //0x8c
    ULONG AlignRound;                                                       //0x94
    ULONG AlignMask;                                                        //0x98
    struct _LIST_ENTRY VirtualAllocdBlocks;                                 //0x9c
    struct _LIST_ENTRY SegmentList;                                         //0xa4
    USHORT AllocatorBackTraceIndex;                                         //0xac
    ULONG NonDedicatedListLength;                                           //0xb0
    VOID* BlocksIndex;                                                      //0xb4
    VOID* UCRIndex;                                                         //0xb8
    struct _HEAP_PSEUDO_TAG_ENTRY* PseudoTagEntries;                        //0xbc
    struct _LIST_ENTRY FreeLists;                                           //0xc0
    struct _HEAP_LOCK* LockVariable;                                        //0xc8
    LONG (*CommitRoutine)(VOID* arg1, VOID** arg2, ULONG* arg3);            //0xcc
    VOID* FrontEndHeap;                                                     //0xd0
    USHORT FrontHeapLockCount;                                              //0xd4
    UCHAR FrontEndHeapType;                                                 //0xd6
    UCHAR RequestedFrontEndHeapType;                                        //0xd7
    USHORT* FrontEndHeapUsageData;                                          //0xd8
    USHORT FrontEndHeapMaximumIndex;                                        //0xdc
    volatile UCHAR FrontEndHeapStatusBitmap[257];                           //0xde
    struct _HEAP_COUNTERS Counters;                                         //0x1e0
    struct _HEAP_TUNING_PARAMETERS TuningParameters;                        //0x23c
};
/* Used in */
// _HEAP
// _HEAP_SEGMENT

