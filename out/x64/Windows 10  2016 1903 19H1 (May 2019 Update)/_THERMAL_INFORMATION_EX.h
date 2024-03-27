#pragma once
/* ------------------ */


//0x5c bytes (sizeof)
struct _THERMAL_INFORMATION_EX
{
    ULONG ThermalStamp;                                                     //0x0
    ULONG ThermalConstant1;                                                 //0x4
    ULONG ThermalConstant2;                                                 //0x8
    ULONG SamplingPeriod;                                                   //0xc
    ULONG CurrentTemperature;                                               //0x10
    ULONG PassiveTripPoint;                                                 //0x14
    ULONG ThermalStandbyTripPoint;                                          //0x18
    ULONG CriticalTripPoint;                                                //0x1c
    UCHAR ActiveTripPointCount;                                             //0x20
    UCHAR PassiveCoolingDevicesPresent;                                     //0x21
    ULONG ActiveTripPoint[10];                                              //0x24
    ULONG S4TransitionTripPoint;                                            //0x4c
    ULONG MinimumThrottle;                                                  //0x50
    ULONG OverThrottleThreshold;                                            //0x54
    ULONG PollingPeriod;                                                    //0x58
};
/* Used in */
// _POP_THERMAL_ZONE

