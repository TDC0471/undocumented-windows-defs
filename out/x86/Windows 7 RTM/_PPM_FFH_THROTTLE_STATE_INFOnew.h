#pragma once
/* ------------------ */

#include <_LARGE_INTEGER.h>

//0x20 bytes (sizeof)
struct _PPM_FFH_THROTTLE_STATE_INFO
{
    UCHAR EnableLogging;                                                    //0x0
    ULONG MismatchCount;                                                    //0x4
    UCHAR Initialized;                                                      //0x8
    ULONGLONG LastValue;                                                    //0x10
    union _LARGE_INTEGER LastLogTickCount;                                  //0x18
};
/* Used in */
// _PROCESSOR_POWER_STATE

