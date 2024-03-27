#pragma once
/* ------------------ */

#include <PPM_IDLE_STATE_ACCOUNTING.h>

//0x48 bytes (sizeof)
struct PPM_IDLE_ACCOUNTING
{
    ULONG StateCount;                                                       //0x0
    ULONG TotalTransitions;                                                 //0x4
    ULONG ResetCount;                                                       //0x8
    ULONGLONG StartTime;                                                    //0x10
    struct PPM_IDLE_STATE_ACCOUNTING State[1];                              //0x18
};
/* Used in */
// _PROCESSOR_POWER_STATE

