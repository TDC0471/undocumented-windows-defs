#pragma once
/* ------------------ */

#include <_LARGE_INTEGER.h>

//0x10 bytes (sizeof)
struct _DMA_COMMON_BUFFER_ENTRY
{
    VOID* VirtualAddress;                                                   //0x0
    union _LARGE_INTEGER LogicalAddress;                                    //0x8
};
/* Used in */
// _DMA_COMMON_BUFFER_VECTOR

