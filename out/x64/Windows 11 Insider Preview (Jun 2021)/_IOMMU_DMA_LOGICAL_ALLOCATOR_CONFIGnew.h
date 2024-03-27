#pragma once
/* ------------------ */

#include <_IOMMU_DMA_LOGICAL_ALLOCATOR_TYPE.h>

//0x8 bytes (sizeof)
struct _IOMMU_DMA_LOGICAL_ALLOCATOR_CONFIG
{
    enum _IOMMU_DMA_LOGICAL_ALLOCATOR_TYPE LogicalAllocatorType;            //0x0
    struct
    {
        ULONG AddressWidth;                                                 //0x4
    } BuddyAllocatorConfig;                                                 //0x4
};
/* Used in */
// _DMA_IOMMU_INTERFACE_V2

