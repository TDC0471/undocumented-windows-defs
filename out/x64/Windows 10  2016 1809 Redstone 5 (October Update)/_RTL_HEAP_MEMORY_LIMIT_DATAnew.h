#pragma once
/* ------------------ */


//0x20 bytes (sizeof)
struct _RTL_HEAP_MEMORY_LIMIT_DATA
{
    ULONGLONG CommitLimitBytes;                                             //0x0
    ULONGLONG CommitLimitFailureCode;                                       //0x8
    ULONGLONG MaxAllocationSizeBytes;                                       //0x10
    ULONGLONG AllocationLimitFailureCode;                                   //0x18
};
/* Used in */
// _HEAP
// _RTLP_HP_HEAP_GLOBALS

