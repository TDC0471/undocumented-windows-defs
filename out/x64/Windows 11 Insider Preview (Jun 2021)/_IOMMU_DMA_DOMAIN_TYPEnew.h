#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
enum _IOMMU_DMA_DOMAIN_TYPE
{
    DomainTypeTranslate = 0,
    DomainTypePassThrough = 1,
    DomainTypeUnmanaged = 2,
    DomainTypeMax = 3
};
/* Used in */
// _DMA_IOMMU_INTERFACE_V2
// _IOMMU_DMA_DOMAIN

