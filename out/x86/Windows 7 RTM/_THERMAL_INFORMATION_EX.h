#pragma once
/* ------------------ */

#include <_KAFFINITY_EX.h>

//0x58 bytes (sizeof)
struct _THERMAL_INFORMATION_EX
{
    ULONG ThermalStamp;                                                     //0x0
    ULONG ThermalConstant1;                                                 //0x4
    ULONG ThermalConstant2;                                                 //0x8
    struct _KAFFINITY_EX Processors;                                        //0xc
    ULONG SamplingPeriod;                                                   //0x18
    ULONG CurrentTemperature;                                               //0x1c
    ULONG PassiveTripPoint;                                                 //0x20
    ULONG CriticalTripPoint;                                                //0x24
    UCHAR ActiveTripPointCount;                                             //0x28
    ULONG ActiveTripPoint[10];                                              //0x2c
    ULONG S4TransitionTripPoint;                                            //0x54
};
/* Used in */
// _POP_THERMAL_ZONE

