#pragma once
/* ------------------ */

#include <_HEAP_FAILURE_INFORMATION.h>

//0xc bytes (sizeof)
struct _RTLP_HP_HEAP_GLOBALS
{
    ULONG HeapKey;                                                          //0x0
    ULONG LfhKey;                                                           //0x4
    struct _HEAP_FAILURE_INFORMATION* FailureInfo;                          //0x8
};
/* Used in */
// _RTLP_HP_HEAP_MANAGER

