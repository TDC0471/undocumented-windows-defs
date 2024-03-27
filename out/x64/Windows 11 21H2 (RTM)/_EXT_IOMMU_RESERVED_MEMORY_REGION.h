#pragma once
/* ------------------ */

#include <_LARGE_INTEGER.h>

//0x18 bytes (sizeof)
struct _EXT_IOMMU_RESERVED_MEMORY_REGION
{
    union _LARGE_INTEGER Base;                                              //0x0
    union _LARGE_INTEGER Limit;                                             //0x8
    UCHAR Ignored;                                                          //0x10
};
/* Used in */
// _IOMMU_RESERVED_DEVICE

