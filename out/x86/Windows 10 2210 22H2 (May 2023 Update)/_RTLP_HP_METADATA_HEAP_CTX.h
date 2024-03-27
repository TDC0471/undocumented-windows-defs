#pragma once
/* ------------------ */

#include <_SEGMENT_HEAP.h>
#include <_RTL_RUN_ONCE.h>

//0x8 bytes (sizeof)
struct _RTLP_HP_METADATA_HEAP_CTX
{
    struct _SEGMENT_HEAP* Heap;                                             //0x0
    union _RTL_RUN_ONCE InitOnce;                                           //0x4
};
/* Used in */
// _RTLP_HP_HEAP_MANAGER

