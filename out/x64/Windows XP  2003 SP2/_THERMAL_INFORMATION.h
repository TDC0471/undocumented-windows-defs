#pragma once
/* ------------------ */


//0x58 bytes (sizeof)
struct _THERMAL_INFORMATION
{
    ULONG ThermalStamp;                                                     //0x0
    ULONG ThermalConstant1;                                                 //0x4
    ULONG ThermalConstant2;                                                 //0x8
    ULONGLONG Processors;                                                   //0x10
    ULONG SamplingPeriod;                                                   //0x18
    ULONG CurrentTemperature;                                               //0x1c
    ULONG PassiveTripPoint;                                                 //0x20
    ULONG CriticalTripPoint;                                                //0x24
    UCHAR ActiveTripPointCount;                                             //0x28
    ULONG ActiveTripPoint[10];                                              //0x2c
};
/* Used in */
// _POP_THERMAL_ZONE

