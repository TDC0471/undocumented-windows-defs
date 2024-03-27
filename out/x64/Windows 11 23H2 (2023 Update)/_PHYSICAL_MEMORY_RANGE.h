#pragma once
/* ------------------ */

#include <_LARGE_INTEGER.h>

//0x10 bytes (sizeof)
struct _PHYSICAL_MEMORY_RANGE
{
    union _LARGE_INTEGER BaseAddress;                                       //0x0
    union _LARGE_INTEGER NumberOfBytes;                                     //0x8
};
/* Used in */
// _KSR_FIRMWARE_INFORMATION

