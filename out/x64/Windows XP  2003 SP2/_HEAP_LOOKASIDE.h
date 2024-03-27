#pragma once
/* ------------------ */

#include <_SLIST_HEADER.h>

//0x40 bytes (sizeof)
struct _HEAP_LOOKASIDE
{
    struct _SLIST_HEADER ListHead;                                          //0x0
    USHORT Depth;                                                           //0x10
    USHORT MaximumDepth;                                                    //0x12
    ULONG TotalAllocates;                                                   //0x14
    ULONG AllocateMisses;                                                   //0x18
    ULONG TotalFrees;                                                       //0x1c
    ULONG FreeMisses;                                                       //0x20
    ULONG LastTotalAllocates;                                               //0x24
    ULONG LastAllocateMisses;                                               //0x28
    ULONG Counters[2];                                                      //0x2c
};
