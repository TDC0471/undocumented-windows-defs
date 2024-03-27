#pragma once
/* ------------------ */

#include <_KAFFINITY_EX.h>

//0x78 bytes (sizeof)
struct _THERMAL_INFORMATION_EX
{
    ULONG ThermalStamp;                                                     //0x0
    ULONG ThermalConstant1;                                                 //0x4
    ULONG ThermalConstant2;                                                 //0x8
    struct _KAFFINITY_EX Processors;                                        //0x10
    ULONG SamplingPeriod;                                                   //0x38
    ULONG CurrentTemperature;                                               //0x3c
    ULONG PassiveTripPoint;                                                 //0x40
    ULONG CriticalTripPoint;                                                //0x44
    UCHAR ActiveTripPointCount;                                             //0x48
    ULONG ActiveTripPoint[10];                                              //0x4c
    ULONG S4TransitionTripPoint;                                            //0x74
};
/* Used in */
// _POP_THERMAL_ZONE

