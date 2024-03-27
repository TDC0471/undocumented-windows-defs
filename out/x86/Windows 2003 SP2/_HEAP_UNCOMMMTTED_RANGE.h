#pragma once
/* ------------------ */

#include <_HEAP_UNCOMMMTTED_RANGE.h>

//0x10 bytes (sizeof)
struct _HEAP_UNCOMMMTTED_RANGE
{
    struct _HEAP_UNCOMMMTTED_RANGE* Next;                                   //0x0
    ULONG Address;                                                          //0x4
    ULONG Size;                                                             //0x8
    ULONG filler;                                                           //0xc
};
/* Used in */
// _HEAP
// _HEAP_SEGMENT
// _HEAP_UNCOMMMTTED_RANGE

