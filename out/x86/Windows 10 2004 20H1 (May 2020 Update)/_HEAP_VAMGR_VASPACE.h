#pragma once
/* ------------------ */

#include <_RTLP_HP_ADDRESS_SPACE_TYPE.h>
#include <_RTL_SPARSE_ARRAY.h>

//0x34 bytes (sizeof)
struct _HEAP_VAMGR_VASPACE
{
    enum _RTLP_HP_ADDRESS_SPACE_TYPE AddressSpaceType;                      //0x0
    ULONG BaseAddress;                                                      //0x4
    union
    {
        struct _RTL_SPARSE_ARRAY VaRangeArray;                              //0x8
        UCHAR VaRangeArrayBuffer[44];                                       //0x8
    };
};
/* Used in */
// _HEAP_VAMGR_ALLOCATOR
// _HEAP_VAMGR_CTX

