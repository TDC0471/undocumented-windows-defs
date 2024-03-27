#pragma once
/* ------------------ */

#include <_IOMMU_DMA_RESERVED_REGION.h>

//0x20 bytes (sizeof)
struct _IOMMU_DMA_RESERVED_REGION
{
    struct _IOMMU_DMA_RESERVED_REGION* RegionNext;                          //0x0
    ULONGLONG Base;                                                         //0x8
    ULONGLONG NumberOfPages;                                                //0x10
    UCHAR ShouldMap;                                                        //0x18
};
/* Used in */
// _DMA_IOMMU_INTERFACE_V2
// _DMA_IOMMU_INTERFACE_V3
// _IOMMU_DMA_RESERVED_REGION

