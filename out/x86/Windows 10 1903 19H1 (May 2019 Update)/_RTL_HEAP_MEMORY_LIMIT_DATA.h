#pragma once
/* ------------------ */


//0x10 bytes (sizeof)
struct _RTL_HEAP_MEMORY_LIMIT_DATA
{
    ULONG CommitLimitBytes;                                                 //0x0
    ULONG CommitLimitFailureCode;                                           //0x4
    ULONG MaxAllocationSizeBytes;                                           //0x8
    ULONG AllocationLimitFailureCode;                                       //0xc
};
/* Used in */
// _HEAP
// _RTLP_HP_HEAP_GLOBALS
// _SEGMENT_HEAP

