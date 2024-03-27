#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
enum _IOMMU_DMA_DOMAIN_TYPE
{
    DomainTypeTranslate = 0,
    DomainTypePassThrough = 1,
    DomainTypeUnmanaged = 2,
    DomainTypeTranslateS1 = 3,
    DomainTypeMax = 4
};
/* Used in */
// _DMA_IOMMU_INTERFACE_V2
// _DMA_IOMMU_INTERFACE_V3
// _IOMMU_DMA_DOMAIN

