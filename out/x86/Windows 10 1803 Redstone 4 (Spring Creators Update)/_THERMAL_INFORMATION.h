#pragma once
/* ------------------ */


//0x4c bytes (sizeof)
struct _THERMAL_INFORMATION
{
    ULONG ThermalStamp;                                                     //0x0
    ULONG ThermalConstant1;                                                 //0x4
    ULONG ThermalConstant2;                                                 //0x8
    ULONG Processors;                                                       //0xc
    ULONG SamplingPeriod;                                                   //0x10
    ULONG CurrentTemperature;                                               //0x14
    ULONG PassiveTripPoint;                                                 //0x18
    ULONG CriticalTripPoint;                                                //0x1c
    UCHAR ActiveTripPointCount;                                             //0x20
    ULONG ActiveTripPoint[10];                                              //0x24
};
