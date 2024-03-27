#pragma once
/* ------------------ */

#include <_LARGE_INTEGER.h>

//0x10 bytes (sizeof)
struct _LEAP_SECOND_DATA
{
    UCHAR Enabled;                                                          //0x0
    ULONG Count;                                                            //0x4
    union _LARGE_INTEGER Data[1];                                           //0x8
};
/* Used in */
// _LOADER_PARAMETER_EXTENSION
// _PEB

