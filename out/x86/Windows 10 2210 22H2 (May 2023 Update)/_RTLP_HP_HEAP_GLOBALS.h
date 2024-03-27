#pragma once
/* ------------------ */

#include <_HEAP_FAILURE_INFORMATION.h>
#include <_RTL_HEAP_MEMORY_LIMIT_DATA.h>

//0x1c bytes (sizeof)
struct _RTLP_HP_HEAP_GLOBALS
{
    ULONG HeapKey;                                                          //0x0
    ULONG LfhKey;                                                           //0x4
    struct _HEAP_FAILURE_INFORMATION* FailureInfo;                          //0x8
    struct _RTL_HEAP_MEMORY_LIMIT_DATA CommitLimitData;                     //0xc
};
/* Used in */
// _RTLP_HP_HEAP_MANAGER

