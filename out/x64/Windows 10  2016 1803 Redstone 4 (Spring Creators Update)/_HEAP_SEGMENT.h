#pragma once
/* ------------------ */

#include <_HEAP_ENTRY.h>
#include <_LIST_ENTRY.h>
#include <_HEAP.h>

//0x70 bytes (sizeof)
struct _HEAP_SEGMENT
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
};
/* Used in */
// _HEAP

