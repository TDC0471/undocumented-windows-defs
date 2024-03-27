#pragma once
/* ------------------ */

#include <_LARGE_INTEGER.h>

//0x10 bytes (sizeof)
struct _ETW_REF_CLOCK
{
    union _LARGE_INTEGER StartTime;                                         //0x0
    union _LARGE_INTEGER StartPerfClock;                                    //0x8
};
/* Used in */
// _WMI_BUFFER_HEADER
// _WMI_LOGGER_CONTEXT

