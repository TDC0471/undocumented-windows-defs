#pragma once
/* ------------------ */

#include <_DMA_IOMMU_INTERFACE_V1.h>
#include <_DMA_IOMMU_INTERFACE_V2.h>
#include <_DMA_IOMMU_INTERFACE_V3.h>

//0xe8 bytes (sizeof)
struct _DMA_IOMMU_INTERFACE_EX
{
    ULONGLONG Size;                                                         //0x0
    ULONG Version;                                                          //0x8
    union
    {
        struct _DMA_IOMMU_INTERFACE_V1 V1;                                  //0x10
        struct _DMA_IOMMU_INTERFACE_V2 V2;                                  //0x10
        struct _DMA_IOMMU_INTERFACE_V3 V3;                                  //0x10
    };
};
/* Used in */
// HAL_PRIVATE_DISPATCH

