#pragma once
/* ------------------ */

#include <_RTL_BITMAP_EX.h>

//0x40 bytes (sizeof)
struct _MI_ULTRA_VA_CONTEXT
{
    ULONGLONG Lock;                                                         //0x0
    VOID* ZeroMapping;                                                      //0x8
    ULONGLONG AllocationHintBit;                                            //0x10
    struct _RTL_BITMAP_EX Bitmap[2];                                        //0x18
    volatile LONG ConcurrencyMaximum;                                       //0x38
    volatile LONG ConcurrencyCount;                                         //0x3c
};
/* Used in */
// _MI_SYSTEM_PTE_STATE

