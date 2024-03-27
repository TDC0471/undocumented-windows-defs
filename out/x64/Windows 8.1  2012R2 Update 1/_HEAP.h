#pragma once
/* ------------------ */

#include <_HEAP_ENTRY.h>
#include <_LIST_ENTRY.h>
#include <_HEAP.h>
#include <_HEAP_TAG_ENTRY.h>
#include <_HEAP_PSEUDO_TAG_ENTRY.h>
#include <_HEAP_LOCK.h>
#include <_HEAP_COUNTERS.h>
#include <_HEAP_TUNING_PARAMETERS.h>

//0x298 bytes (sizeof)
struct _HEAP
{
    struct _HEAP_ENTRY Entry;                                               //0x0
    ULONG SegmentSignature;                                                 //0x10
    ULONG SegmentFlags;                                                     //0x14
    struct _LIST_ENTRY SegmentListEntry;                                    //0x18
    struct _HEAP* Heap;                                                     //0x28
    VOID* BaseAddress;                                                      //0x30
    ULONG NumberOfPages;                                                    //0x38
    struct _HEAP_ENTRY* FirstEntry;                                         //0x40
    struct _HEAP_ENTRY* LastValidEntry;                                     //0x48
    ULONG NumberOfUnCommittedPages;                                         //0x50
    ULONG NumberOfUnCommittedRanges;                                        //0x54
    USHORT SegmentAllocatorBackTraceIndex;                                  //0x58
    USHORT Reserved;                                                        //0x5a
    struct _LIST_ENTRY UCRSegmentList;                                      //0x60
    ULONG Flags;                                                            //0x70
    ULONG ForceFlags;                                                       //0x74
    ULONG CompatibilityFlags;                                               //0x78
    ULONG EncodeFlagMask;                                                   //0x7c
    struct _HEAP_ENTRY Encoding;                                            //0x80
    ULONG Interceptor;                                                      //0x90
    ULONG VirtualMemoryThreshold;                                           //0x94
    ULONG Signature;                                                        //0x98
    ULONGLONG SegmentReserve;                                               //0xa0
    ULONGLONG SegmentCommit;                                                //0xa8
    ULONGLONG DeCommitFreeBlockThreshold;                                   //0xb0
    ULONGLONG DeCommitTotalFreeThreshold;                                   //0xb8
    ULONGLONG TotalFreeSize;                                                //0xc0
    ULONGLONG MaximumAllocationSize;                                        //0xc8
    USHORT ProcessHeapsListIndex;                                           //0xd0
    USHORT HeaderValidateLength;                                            //0xd2
    VOID* HeaderValidateCopy;                                               //0xd8
    USHORT NextAvailableTagIndex;                                           //0xe0
    USHORT MaximumTagIndex;                                                 //0xe2
    struct _HEAP_TAG_ENTRY* TagEntries;                                     //0xe8
    struct _LIST_ENTRY UCRList;                                             //0xf0
    ULONGLONG AlignRound;                                                   //0x100
    ULONGLONG AlignMask;                                                    //0x108
    struct _LIST_ENTRY VirtualAllocdBlocks;                                 //0x110
    struct _LIST_ENTRY SegmentList;                                         //0x120
    USHORT AllocatorBackTraceIndex;                                         //0x130
    ULONG NonDedicatedListLength;                                           //0x134
    VOID* BlocksIndex;                                                      //0x138
    VOID* UCRIndex;                                                         //0x140
    struct _HEAP_PSEUDO_TAG_ENTRY* PseudoTagEntries;                        //0x148
    struct _LIST_ENTRY FreeLists;                                           //0x150
    struct _HEAP_LOCK* LockVariable;                                        //0x160
    LONG (*CommitRoutine)(VOID* arg1, VOID** arg2, ULONGLONG* arg3);        //0x168
    VOID* FrontEndHeap;                                                     //0x170
    USHORT FrontHeapLockCount;                                              //0x178
    UCHAR FrontEndHeapType;                                                 //0x17a
    UCHAR RequestedFrontEndHeapType;                                        //0x17b
    USHORT* FrontEndHeapUsageData;                                          //0x180
    USHORT FrontEndHeapMaximumIndex;                                        //0x188
    volatile UCHAR FrontEndHeapStatusBitmap[129];                           //0x18a
    struct _HEAP_COUNTERS Counters;                                         //0x210
    struct _HEAP_TUNING_PARAMETERS TuningParameters;                        //0x288
};
/* Used in */
// _HEAP
// _HEAP_SEGMENT

