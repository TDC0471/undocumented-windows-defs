#pragma once
/* ------------------ */

#include <_RTL_DYNAMIC_TIME_ZONE_INFORMATION.h>
#include <_LARGE_INTEGER.h>
#include <_TIMEZONE_CHANGE_EVENT.h>
#include <_TIME_FIELDS.h>

//0x318 bytes (sizeof)
struct _EX_TIMEZONE_STATE
{
    struct _RTL_DYNAMIC_TIME_ZONE_INFORMATION TimeZoneInformation;          //0x0
    ULONG CurrentTimeZoneId;                                                //0x1b0
    LONG LastTimeZoneBias;                                                  //0x1b4
    union _LARGE_INTEGER TimeZoneBias;                                      //0x1b8
    struct _TIMEZONE_CHANGE_EVENT TimeZone;                                 //0x1c0
    struct _TIMEZONE_CHANGE_EVENT Century;                                  //0x218
    struct _TIMEZONE_CHANGE_EVENT NextYear;                                 //0x270
    LONG OkToTimeZoneRefresh;                                               //0x2c8
    union _LARGE_INTEGER NextCenturyTimeInUTC;                              //0x2d0
    struct _TIME_FIELDS NextCenturyTimeFieldsInLocalTime;                   //0x2d8
    union _LARGE_INTEGER NextYearTimeInUTC;                                 //0x2e8
    struct _TIME_FIELDS NextYearTimeFieldsInLocalTime;                      //0x2f0
    SHORT LastDynamicTimeZoneYear;                                          //0x300
    union _LARGE_INTEGER NextSystemCutoverInUTC;                            //0x308
    ULONG RefreshFailures;                                                  //0x310
};
/* Used in */
// _ESERVERSILO_GLOBALS

