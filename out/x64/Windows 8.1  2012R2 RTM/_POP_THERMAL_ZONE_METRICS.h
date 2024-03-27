#pragma once
/* ------------------ */

#include <_LARGE_INTEGER.h>

//0x30 bytes (sizeof)
struct _POP_THERMAL_ZONE_METRICS
{
    ULONG ActiveCount;                                                      //0x0
    ULONG PassiveCount;                                                     //0x4
    ULONGLONG LastActiveStartTime;                                          //0x8
    ULONGLONG AverageActiveTime;                                            //0x10
    ULONGLONG LastPassiveStartTime;                                         //0x18
    ULONGLONG AveragePassiveTime;                                           //0x20
    union _LARGE_INTEGER StartTickSinceLastReset;                           //0x28
};
/* Used in */
// _POP_THERMAL_ZONE

