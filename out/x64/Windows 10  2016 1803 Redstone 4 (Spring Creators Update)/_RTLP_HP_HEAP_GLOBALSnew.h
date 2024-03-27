#pragma once
/* ------------------ */

#include <_HEAP_FAILURE_INFORMATION.h>

//0x18 bytes (sizeof)
struct _RTLP_HP_HEAP_GLOBALS
{
    ULONGLONG HeapKey;                                                      //0x0
    ULONGLONG LfhKey;                                                       //0x8
    struct _HEAP_FAILURE_INFORMATION* FailureInfo;                          //0x10
};
/* Used in */
// _RTLP_HP_HEAP_MANAGER

