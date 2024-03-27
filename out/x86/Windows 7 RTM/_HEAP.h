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

//0x138 bytes (sizeof)
struct _HEAP
{
    struct _HEAP_ENTRY Entry;                                               //0x0
    ULONG SegmentSignature;                                                 //0x8
    ULONG SegmentFlags;                                                     //0xc
    struct _LIST_ENTRY SegmentListEntry;                                    //0x10
    struct _HEAP* Heap;                                                     //0x18
    VOID* BaseAddress;                                                      //0x1c
    ULONG NumberOfPages;                                                    //0x20
    struct _HEAP_ENTRY* FirstEntry;                                         //0x24
    struct _HEAP_ENTRY* LastValidEntry;                                     //0x28
    ULONG NumberOfUnCommittedPages;                                         //0x2c
    ULONG NumberOfUnCommittedRanges;                                        //0x30
    USHORT SegmentAllocatorBackTraceIndex;                                  //0x34
    USHORT Reserved;                                                        //0x36
    struct _LIST_ENTRY UCRSegmentList;                                      //0x38
    ULONG Flags;                                                            //0x40
    ULONG ForceFlags;                                                       //0x44
    ULONG CompatibilityFlags;                                               //0x48
    ULONG EncodeFlagMask;                                                   //0x4c
    struct _HEAP_ENTRY Encoding;                                            //0x50
    ULONG PointerKey;                                                       //0x58
    ULONG Interceptor;                                                      //0x5c
    ULONG VirtualMemoryThreshold;                                           //0x60
    ULONG Signature;                                                        //0x64
    ULONG SegmentReserve;                                                   //0x68
    ULONG SegmentCommit;                                                    //0x6c
    ULONG DeCommitFreeBlockThreshold;                                       //0x70
    ULONG DeCommitTotalFreeThreshold;                                       //0x74
    ULONG TotalFreeSize;                                                    //0x78
    ULONG MaximumAllocationSize;                                            //0x7c
    USHORT ProcessHeapsListIndex;                                           //0x80
    USHORT HeaderValidateLength;                                            //0x82
    VOID* HeaderValidateCopy;                                               //0x84
    USHORT NextAvailableTagIndex;                                           //0x88
    USHORT MaximumTagIndex;                                                 //0x8a
    struct _HEAP_TAG_ENTRY* TagEntries;                                     //0x8c
    struct _LIST_ENTRY UCRList;                                             //0x90
    ULONG AlignRound;                                                       //0x98
    ULONG AlignMask;                                                        //0x9c
    struct _LIST_ENTRY VirtualAllocdBlocks;                                 //0xa0
    struct _LIST_ENTRY SegmentList;                                         //0xa8
    USHORT AllocatorBackTraceIndex;                                         //0xb0
    ULONG NonDedicatedListLength;                                           //0xb4
    VOID* BlocksIndex;                                                      //0xb8
    VOID* UCRIndex;                                                         //0xbc
    struct _HEAP_PSEUDO_TAG_ENTRY* PseudoTagEntries;                        //0xc0
    struct _LIST_ENTRY FreeLists;                                           //0xc4
    struct _HEAP_LOCK* LockVariable;                                        //0xcc
    LONG (*CommitRoutine)(VOID* arg1, VOID** arg2, ULONG* arg3);            //0xd0
    VOID* FrontEndHeap;                                                     //0xd4
    USHORT FrontHeapLockCount;                                              //0xd8
    UCHAR FrontEndHeapType;                                                 //0xda
    struct _HEAP_COUNTERS Counters;                                         //0xdc
    struct _HEAP_TUNING_PARAMETERS TuningParameters;                        //0x130
};
/* Used in */
// _HEAP
// _HEAP_SEGMENT

