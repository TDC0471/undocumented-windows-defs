#pragma once
/* ------------------ */

#include <_LOADER_MEMORY_RANGE.h>

//0x18 bytes (sizeof)
struct _MEMORY_MIRRORING_DATA
{
    ULONG MemoryRangeCount;                                                 //0x0
    ULONG IoSpaceRangeCount;                                                //0x4
    struct _LOADER_MEMORY_RANGE* MemoryRanges;                              //0x8
    struct _LOADER_MEMORY_RANGE* IoSpaceRanges;                             //0x10
};
/* Used in */
// _LOADER_PARAMETER_EXTENSION

