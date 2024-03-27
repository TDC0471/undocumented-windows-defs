#pragma once
/* ------------------ */

#include <_ERESOURCE.h>
#include <_LARGE_INTEGER.h>

//0x98 bytes (sizeof)
struct _POP_THERMAL_ZONE_METRICS
{
    struct _ERESOURCE MetricsResource;                                      //0x0
    ULONG ActiveCount;                                                      //0x68
    ULONG PassiveCount;                                                     //0x6c
    union _LARGE_INTEGER LastActiveStartTick;                               //0x70
    union _LARGE_INTEGER AverageActiveTime;                                 //0x78
    union _LARGE_INTEGER LastPassiveStartTick;                              //0x80
    union _LARGE_INTEGER AveragePassiveTime;                                //0x88
    union _LARGE_INTEGER StartTickSinceLastReset;                           //0x90
};
/* Used in */
// _POP_THERMAL_ZONE

