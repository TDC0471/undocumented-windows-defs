#pragma once
/* ------------------ */

#include <_IOMMU_DMA_LOGICAL_ADDRESS_TOKEN.h>

//0x18 bytes (sizeof)
struct _IOMMU_DMA_LOGICAL_ADDRESS_TOKEN_MAPPED_SEGMENT
{
    struct _IOMMU_DMA_LOGICAL_ADDRESS_TOKEN* OwningToken;                   //0x0
    ULONGLONG Offset;                                                       //0x8
    ULONGLONG Size;                                                         //0x10
};
/* Used in */
// _DMA_IOMMU_INTERFACE_V2
// _DMA_IOMMU_INTERFACE_V3
// _HALP_DMA_TRANSLATION_ENTRY

