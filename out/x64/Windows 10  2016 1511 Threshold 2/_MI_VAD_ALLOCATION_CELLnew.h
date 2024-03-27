#pragma once
/* ------------------ */

#include <_RTL_BITMAP.h>

//0x28 bytes (sizeof)
struct _MI_VAD_ALLOCATION_CELL
{
    struct _RTL_BITMAP AllocationBitMap;                                    //0x0
    ULONG BitMapHint;                                                       //0x10
    ULONG LastAllocationSize;                                               //0x14
    ULONG LastAllocationSizeHint;                                           //0x18
    ULONG LowestBottomUpVadBit;                                             //0x1c
    VOID* LowestBottomUpAllocationAddress;                                  //0x20
};
/* Used in */
// _MI_USER_VA_INFO

