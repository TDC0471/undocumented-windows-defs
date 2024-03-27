#pragma once
/* ------------------ */

#include <_PROC_IDLE_STATE_ACCOUNTING.h>

//0x2c0 bytes (sizeof)
struct _PROC_IDLE_ACCOUNTING
{
    ULONG StateCount;                                                       //0x0
    ULONG TotalTransitions;                                                 //0x4
    ULONG ResetCount;                                                       //0x8
    ULONGLONG StartTime;                                                    //0x10
    ULONGLONG BucketLimits[16];                                             //0x18
    struct _PROC_IDLE_STATE_ACCOUNTING State[1];                            //0x98
};
/* Used in */
// _PROCESSOR_POWER_STATE

