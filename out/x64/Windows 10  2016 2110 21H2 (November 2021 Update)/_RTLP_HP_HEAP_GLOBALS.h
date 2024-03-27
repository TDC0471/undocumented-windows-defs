#pragma once
/* ------------------ */

#include <_HEAP_FAILURE_INFORMATION.h>
#include <_RTL_HEAP_MEMORY_LIMIT_DATA.h>

//0x38 bytes (sizeof)
struct _RTLP_HP_HEAP_GLOBALS
{
    ULONGLONG HeapKey;                                                      //0x0
    ULONGLONG LfhKey;                                                       //0x8
    struct _HEAP_FAILURE_INFORMATION* FailureInfo;                          //0x10
    struct _RTL_HEAP_MEMORY_LIMIT_DATA CommitLimitData;                     //0x18
};
/* Used in */
// _RTLP_HP_HEAP_MANAGER

