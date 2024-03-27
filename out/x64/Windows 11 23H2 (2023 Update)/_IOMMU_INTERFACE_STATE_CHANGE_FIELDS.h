#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
union _IOMMU_INTERFACE_STATE_CHANGE_FIELDS
{
    ULONG AvailableDomainTypes:1;                                           //0x0
    ULONG Reserved:31;                                                      //0x0
    ULONG AsULONG;                                                          //0x0
};
/* Used in */
// _DMA_IOMMU_INTERFACE_V2
// _DMA_IOMMU_INTERFACE_V3
// _IOMMU_INTERFACE_STATE_CHANGE

