#pragma once
/* ------------------ */

#include <PPM_IDLE_BUCKET_TIME_TYPE.h>
#include <_PROC_IDLE_STATE_ACCOUNTING.h>

//0x408 bytes (sizeof)
struct _PROC_IDLE_ACCOUNTING
{
    ULONG StateCount;                                                       //0x0
    ULONG TotalTransitions;                                                 //0x4
    ULONG ResetCount;                                                       //0x8
    ULONG AbortCount;                                                       //0xc
    ULONGLONG StartTime;                                                    //0x10
    ULONGLONG PriorIdleTime;                                                //0x18
    enum PPM_IDLE_BUCKET_TIME_TYPE TimeUnit;                                //0x20
    struct _PROC_IDLE_STATE_ACCOUNTING State[1];                            //0x28
};
/* Used in */
// _PROCESSOR_POWER_STATE

