#pragma once
/* ------------------ */

#include <_RTL_BITMAP.h>

//0x1c bytes (sizeof)
struct _MI_VAD_ALLOCATION_CELL
{
    struct _RTL_BITMAP AllocationBitMap;                                    //0x0
    ULONG BitMapHint;                                                       //0x8
    ULONG LastAllocationSize;                                               //0xc
    ULONG LastAllocationSizeHint;                                           //0x10
    ULONG LowestBottomUpVadBit;                                             //0x14
    VOID* LowestBottomUpAllocationAddress;                                  //0x18
};
/* Used in */
// _MI_USER_VA_INFO

