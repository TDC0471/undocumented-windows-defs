#pragma once
/* ------------------ */

#include <PPM_IDLE_BUCKET_TIME_TYPE.h>
#include <_PLATFORM_IDLE_STATE_ACCOUNTING.h>

//0x388 bytes (sizeof)
struct _PLATFORM_IDLE_ACCOUNTING
{
    ULONG ResetCount;                                                       //0x0
    ULONG StateCount;                                                       //0x4
    enum PPM_IDLE_BUCKET_TIME_TYPE TimeUnit;                                //0x8
    ULONGLONG StartTime;                                                    //0x10
    struct _PLATFORM_IDLE_STATE_ACCOUNTING State[1];                        //0x18
};
/* Used in */
// _PROCESSOR_POWER_STATE
