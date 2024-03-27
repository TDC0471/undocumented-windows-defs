#pragma once
/* ------------------ */


//0x10 bytes (sizeof)
struct _IOMMU_DMA_LOGICAL_ADDRESS_TOKEN
{
    ULONGLONG LogicalAddressBase;                                           //0x0
    ULONGLONG Size;                                                         //0x8
};
/* Used in */
// _ADAPTER_OBJECT
// _DMA_IOMMU_INTERFACE_V2
// _DMA_IOMMU_INTERFACE_V3
// _IOMMU_DMA_LOGICAL_ADDRESS_TOKEN_MAPPED_SEGMENT

