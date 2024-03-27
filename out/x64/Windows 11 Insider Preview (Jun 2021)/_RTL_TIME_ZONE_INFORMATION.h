#pragma once
/* ------------------ */

#include <_TIME_FIELDS.h>

//0xac bytes (sizeof)
struct _RTL_TIME_ZONE_INFORMATION
{
    LONG Bias;                                                              //0x0
    WCHAR StandardName[32];                                                 //0x4
    struct _TIME_FIELDS StandardStart;                                      //0x44
    LONG StandardBias;                                                      //0x54
    WCHAR DaylightName[32];                                                 //0x58
    struct _TIME_FIELDS DaylightStart;                                      //0x98
    LONG DaylightBias;                                                      //0xa8
};
/* Used in */
// _RTL_DYNAMIC_TIME_ZONE_INFORMATION
// _TRACE_LOGFILE_HEADER

