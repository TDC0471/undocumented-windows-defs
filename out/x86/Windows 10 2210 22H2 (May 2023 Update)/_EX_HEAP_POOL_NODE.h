#pragma once
/* ------------------ */

#include <_SEGMENT_HEAP.h>
#include <_RTL_DYNAMIC_LOOKASIDE.h>

//0x20c0 bytes (sizeof)
struct _EX_HEAP_POOL_NODE
{
    struct _SEGMENT_HEAP* Heaps[4];                                         //0x0
    struct _RTL_DYNAMIC_LOOKASIDE Lookasides[2];                            //0x40
};
/* Used in */
// _EX_POOL_HEAP_MANAGER_STATE

