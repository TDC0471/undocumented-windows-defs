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

//0x208 bytes (sizeof)
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
    ULONGLONG PointerKey;                                                   //0x90
    ULONG Interceptor;                                                      //0x98
    ULONG VirtualMemoryThreshold;                                           //0x9c
    ULONG Signature;                                                        //0xa0
    ULONGLONG SegmentReserve;                                               //0xa8
    ULONGLONG SegmentCommit;                                                //0xb0
    ULONGLONG DeCommitFreeBlockThreshold;                                   //0xb8
    ULONGLONG DeCommitTotalFreeThreshold;                                   //0xc0
    ULONGLONG TotalFreeSize;                                                //0xc8
    ULONGLONG MaximumAllocationSize;                                        //0xd0
    USHORT ProcessHeapsListIndex;                                           //0xd8
    USHORT HeaderValidateLength;                                            //0xda
    VOID* HeaderValidateCopy;                                               //0xe0
    USHORT NextAvailableTagIndex;                                           //0xe8
    USHORT MaximumTagIndex;                                                 //0xea
    struct _HEAP_TAG_ENTRY* TagEntries;                                     //0xf0
    struct _LIST_ENTRY UCRList;                                             //0xf8
    ULONGLONG AlignRound;                                                   //0x108
    ULONGLONG AlignMask;                                                    //0x110
    struct _LIST_ENTRY VirtualAllocdBlocks;                                 //0x118
    struct _LIST_ENTRY SegmentList;                                         //0x128
    USHORT AllocatorBackTraceIndex;                                         //0x138
    ULONG NonDedicatedListLength;                                           //0x13c
    VOID* BlocksIndex;                                                      //0x140
    VOID* UCRIndex;                                                         //0x148
    struct _HEAP_PSEUDO_TAG_ENTRY* PseudoTagEntries;                        //0x150
    struct _LIST_ENTRY FreeLists;                                           //0x158
    struct _HEAP_LOCK* LockVariable;                                        //0x168
    LONG (*CommitRoutine)(VOID* arg1, VOID** arg2, ULONGLONG* arg3);        //0x170
    VOID* FrontEndHeap;                                                     //0x178
    USHORT FrontHeapLockCount;                                              //0x180
    UCHAR FrontEndHeapType;                                                 //0x182
    struct _HEAP_COUNTERS Counters;                                         //0x188
    struct _HEAP_TUNING_PARAMETERS TuningParameters;                        //0x1f8
};
/* Used in */
// _HEAP
// _HEAP_SEGMENT

