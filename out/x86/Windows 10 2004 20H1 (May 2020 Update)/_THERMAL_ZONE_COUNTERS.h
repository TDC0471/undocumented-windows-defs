#pragma once
/* ------------------ */


//0x10 bytes (sizeof)
struct _THERMAL_ZONE_COUNTERS
{
    ULONG Temperature;                                                      //0x0
    ULONG ThrottleLimit;                                                    //0x4
    ULONG ThrottleReasons;                                                  //0x8
    ULONG TemperatureHighPrecision;                                         //0xc
};
