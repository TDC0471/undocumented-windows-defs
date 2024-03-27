#pragma once
/* ------------------ */

#include <_HEAP_UCR_SEGMENT.h>

//0x20 bytes (sizeof)
struct _HEAP_UCR_SEGMENT
{
    struct _HEAP_UCR_SEGMENT* Next;                                         //0x0
    ULONGLONG ReservedSize;                                                 //0x8
    ULONGLONG CommittedSize;                                                //0x10
    ULONG filler;                                                           //0x18
};
/* Used in */
// _HEAP
// _HEAP_UCR_SEGMENT

