#pragma once
/* ------------------ */

#include <_LARGE_INTEGER.h>

//0x10 bytes (sizeof)
struct _ETW_KERNEL_TRACE_TIMESTAMP
{
    union _LARGE_INTEGER KernelTraceTimeStamp[2];                           //0x0
};
/* Used in */
// _PF_HARD_FAULT_INFO

