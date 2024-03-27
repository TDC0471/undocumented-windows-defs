#pragma once
/* ------------------ */

#include <_ETW_KERNEL_TRACE_TIMESTAMP.h>
#include <_PERFINFO_HARDPAGEFAULT_INFORMATION.h>
#include <_LARGE_INTEGER.h>

//0x30 bytes (sizeof)
struct _PF_HARD_FAULT_INFO
{
    struct _ETW_KERNEL_TRACE_TIMESTAMP KernelTimeStamp;                     //0x0
    struct _PERFINFO_HARDPAGEFAULT_INFORMATION HardFaultEvent;              //0x10
    union _LARGE_INTEGER IoTimeInTicks;                                     //0x28
};
