#pragma once
/* ------------------ */

#include <_RTLP_HP_ADDRESS_SPACE_TYPE.h>
#include <_RTL_SPARSE_ARRAY.h>

//0x30 bytes (sizeof)
struct _HEAP_VAMGR_VASPACE
{
    enum _RTLP_HP_ADDRESS_SPACE_TYPE AddressSpaceType;                      //0x0
    ULONG BaseAddress;                                                      //0x4
    struct _RTL_SPARSE_ARRAY VaRangeArray;                                  //0x8
};
/* Used in */
// _HEAP_VAMGR_ALLOCATOR
// _HEAP_VAMGR_CTX

