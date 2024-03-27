#pragma once
/* ------------------ */

#include <_HEAP_ENTRY.h>
#include <_HEAP.h>
#include <_HEAP_UNCOMMMTTED_RANGE.h>

//0x68 bytes (sizeof)
struct _HEAP_SEGMENT
{
    struct _HEAP_ENTRY Entry;                                               //0x0
    ULONG Signature;                                                        //0x10
    ULONG Flags;                                                            //0x14
    struct _HEAP* Heap;                                                     //0x18
    ULONGLONG LargestUnCommittedRange;                                      //0x20
    VOID* BaseAddress;                                                      //0x28
    ULONG NumberOfPages;                                                    //0x30
    struct _HEAP_ENTRY* FirstEntry;                                         //0x38
    struct _HEAP_ENTRY* LastValidEntry;                                     //0x40
    ULONG NumberOfUnCommittedPages;                                         //0x48
    ULONG NumberOfUnCommittedRanges;                                        //0x4c
    struct _HEAP_UNCOMMMTTED_RANGE* UnCommittedRanges;                      //0x50
    USHORT AllocatorBackTraceIndex;                                         //0x58
    USHORT Reserved;                                                        //0x5a
    struct _HEAP_ENTRY* LastEntryInSegment;                                 //0x60
};
/* Used in */
// _HEAP

