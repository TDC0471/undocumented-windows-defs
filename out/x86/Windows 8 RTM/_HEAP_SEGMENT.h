#pragma once
/* ------------------ */

#include <_HEAP_ENTRY.h>
#include <_LIST_ENTRY.h>
#include <_HEAP.h>

//0x40 bytes (sizeof)
struct _HEAP_SEGMENT
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
};
