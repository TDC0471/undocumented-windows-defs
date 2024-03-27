#pragma once
/* ------------------ */

#include <_LARGE_INTEGER.h>

//0x18 bytes (sizeof)
struct _SCATTER_GATHER_ELEMENT
{
    union _LARGE_INTEGER Address;                                           //0x0
    ULONG Length;                                                           //0x8
    ULONGLONG Reserved;                                                     //0x10
};
/* Used in */
// _DMA_SCATTER_GATHER_LIST
// _SCATTER_GATHER_LIST

