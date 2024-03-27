#pragma once
/* ------------------ */

#include <_HEAP_UNCOMMMTTED_RANGE.h>

//0x20 bytes (sizeof)
struct _HEAP_UNCOMMMTTED_RANGE
{
    struct _HEAP_UNCOMMMTTED_RANGE* Next;                                   //0x0
    ULONGLONG Address;                                                      //0x8
    ULONGLONG Size;                                                         //0x10
    ULONG filler;                                                           //0x18
};
/* Used in */
// _HEAP
// _HEAP_SEGMENT
// _HEAP_UNCOMMMTTED_RANGE

