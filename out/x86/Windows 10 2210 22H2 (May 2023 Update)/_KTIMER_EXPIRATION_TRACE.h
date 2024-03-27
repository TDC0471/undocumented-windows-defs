#pragma once
/* ------------------ */

#include <_LARGE_INTEGER.h>

//0x10 bytes (sizeof)
struct _KTIMER_EXPIRATION_TRACE
{
    ULONGLONG InterruptTime;                                                //0x0
    union _LARGE_INTEGER PerformanceCounter;                                //0x8
};
/* Used in */
// _KPRCB

