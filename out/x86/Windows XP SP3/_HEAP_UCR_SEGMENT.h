#pragma once
/* ------------------ */

#include <_HEAP_UCR_SEGMENT.h>

//0x10 bytes (sizeof)
struct _HEAP_UCR_SEGMENT
{
    struct _HEAP_UCR_SEGMENT* Next;                                         //0x0
    ULONG ReservedSize;                                                     //0x4
    ULONG CommittedSize;                                                    //0x8
    ULONG filler;                                                           //0xc
};
/* Used in */
// _HEAP
// _HEAP_UCR_SEGMENT

