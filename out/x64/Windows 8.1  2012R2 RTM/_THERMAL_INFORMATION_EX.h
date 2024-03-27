#pragma once
/* ------------------ */


//0x50 bytes (sizeof)
struct _THERMAL_INFORMATION_EX
{
    ULONG ThermalStamp;                                                     //0x0
    ULONG ThermalConstant1;                                                 //0x4
    ULONG ThermalConstant2;                                                 //0x8
    ULONG SamplingPeriod;                                                   //0xc
    ULONG CurrentTemperature;                                               //0x10
    ULONG PassiveTripPoint;                                                 //0x14
    ULONG CriticalTripPoint;                                                //0x18
    UCHAR ActiveTripPointCount;                                             //0x1c
    ULONG ActiveTripPoint[10];                                              //0x20
    ULONG S4TransitionTripPoint;                                            //0x48
    ULONG MinimumThrottle;                                                  //0x4c
};
/* Used in */
// _POP_THERMAL_ZONE

