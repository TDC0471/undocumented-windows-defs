#pragma once
/* ------------------ */

#include <_IOMMU_DMA_LOGICAL_ALLOCATOR_OPERATIONS_V1.h>
#include <_IOMMU_DMA_LOGICAL_ALLOCATOR_TYPE.h>

//0x18 bytes (sizeof)
struct _IOMMU_DMA_LOGICAL_ALLOCATOR
{
    struct _IOMMU_DMA_LOGICAL_ALLOCATOR_OPERATIONS_V1* Operations;          //0x0
    ULONG Version;                                                          //0x8
    ULONG Size;                                                             //0xc
    enum _IOMMU_DMA_LOGICAL_ALLOCATOR_TYPE AllocatorType;                   //0x10
};
/* Used in */
// _IOMMU_DMA_DOMAIN
// _IOMMU_DMA_LOGICAL_ALLOCATOR_OPERATIONS_V1

