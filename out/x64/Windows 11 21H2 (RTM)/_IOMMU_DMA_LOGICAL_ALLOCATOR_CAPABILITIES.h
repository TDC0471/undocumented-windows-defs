#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
struct _IOMMU_DMA_LOGICAL_ALLOCATOR_CAPABILITIES
{
    ULONG ExplicitAddressCapable:1;                                         //0x0
    ULONG Reserved:31;                                                      //0x0
};
/* Used in */
// _IOMMU_DMA_LOGICAL_ALLOCATOR_OPERATIONS_V1

