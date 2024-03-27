#pragma once
/* ------------------ */

#include <_SLIST_HEADER.h>

//0x30 bytes (sizeof)
struct _HEAP_LOOKASIDE
{
    union _SLIST_HEADER ListHead;                                           //0x0
    USHORT Depth;                                                           //0x8
    USHORT MaximumDepth;                                                    //0xa
    ULONG TotalAllocates;                                                   //0xc
    ULONG AllocateMisses;                                                   //0x10
    ULONG TotalFrees;                                                       //0x14
    ULONG FreeMisses;                                                       //0x18
    ULONG LastTotalAllocates;                                               //0x1c
    ULONG LastAllocateMisses;                                               //0x20
    ULONG Counters[2];                                                      //0x24
};
