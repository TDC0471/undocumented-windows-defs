#pragma once
/* ------------------ */

#include <_LARGE_INTEGER.h>

//0x20 bytes (sizeof)
struct DEBUG_MEMORY_REQUIREMENTS
{
    union _LARGE_INTEGER Start;                                             //0x0
    union _LARGE_INTEGER MaxEnd;                                            //0x8
    VOID* VirtualAddress;                                                   //0x10
    ULONG Length;                                                           //0x18
    UCHAR Cached;                                                           //0x1c
    UCHAR Aligned;                                                          //0x1d
};
/* Used in */
// _DEBUG_DEVICE_DESCRIPTOR

