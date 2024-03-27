#pragma once
/* ------------------ */

#include <_RTL_TIME_ZONE_INFORMATION.h>

//0x1b0 bytes (sizeof)
struct _RTL_DYNAMIC_TIME_ZONE_INFORMATION
{
    struct _RTL_TIME_ZONE_INFORMATION tzi;                                  //0x0
    WCHAR TimeZoneKeyName[128];                                             //0xac
    UCHAR DynamicDaylightTimeDisabled;                                      //0x1ac
};
/* Used in */
// _EX_TIMEZONE_STATE

