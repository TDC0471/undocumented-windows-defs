#pragma once
/* ------------------ */

#include <_ERESOURCE.h>
#include <_LARGE_INTEGER.h>

//0x68 bytes (sizeof)
struct _POP_THERMAL_ZONE_METRICS
{
    struct _ERESOURCE MetricsResource;                                      //0x0
    ULONG ActiveCount;                                                      //0x38
    ULONG PassiveCount;                                                     //0x3c
    union _LARGE_INTEGER LastActiveStartTick;                               //0x40
    union _LARGE_INTEGER AverageActiveTime;                                 //0x48
    union _LARGE_INTEGER LastPassiveStartTick;                              //0x50
    union _LARGE_INTEGER AveragePassiveTime;                                //0x58
    union _LARGE_INTEGER StartTickSinceLastReset;                           //0x60
};
/* Used in */
// _POP_THERMAL_ZONE

