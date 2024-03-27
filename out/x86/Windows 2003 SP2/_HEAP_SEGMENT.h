#pragma once
/* ------------------ */

#include <_HEAP_ENTRY.h>
#include <_HEAP.h>
#include <_HEAP_UNCOMMMTTED_RANGE.h>

//0x3c bytes (sizeof)
struct _HEAP_SEGMENT
{
    struct _HEAP_ENTRY Entry;                                               //0x0
    ULONG Signature;                                                        //0x8
    ULONG Flags;                                                            //0xc
    struct _HEAP* Heap;                                                     //0x10
    ULONG LargestUnCommittedRange;                                          //0x14
    VOID* BaseAddress;                                                      //0x18
    ULONG NumberOfPages;                                                    //0x1c
    struct _HEAP_ENTRY* FirstEntry;                                         //0x20
    struct _HEAP_ENTRY* LastValidEntry;                                     //0x24
    ULONG NumberOfUnCommittedPages;                                         //0x28
    ULONG NumberOfUnCommittedRanges;                                        //0x2c
    struct _HEAP_UNCOMMMTTED_RANGE* UnCommittedRanges;                      //0x30
    USHORT AllocatorBackTraceIndex;                                         //0x34
    USHORT Reserved;                                                        //0x36
    struct _HEAP_ENTRY* LastEntryInSegment;                                 //0x38
};
/* Used in */
// _HEAP

