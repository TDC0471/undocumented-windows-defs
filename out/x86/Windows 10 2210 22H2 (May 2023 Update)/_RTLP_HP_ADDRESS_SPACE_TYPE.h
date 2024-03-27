#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
enum _RTLP_HP_ADDRESS_SPACE_TYPE
{
    HeapAddressUser = 0,
    HeapAddressKernel = 1,
    HeapAddressSession = 2,
    HeapAddressSecureKernel = 3,
    HeapAddressTypeMax = 4
};
/* Used in */
// _HEAP_VAMGR_VASPACE

