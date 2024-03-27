#pragma once
/* ------------------ */


//0x3 bytes (sizeof)
struct _IOMMU_DMA_DEVICE_INFORMATION
{
    UCHAR DefaultPasidEnabled;                                              //0x0
    UCHAR PasidTaggedDmaEnabled;                                            //0x1
    UCHAR PasidFaultsSuppressed;                                            //0x2
};
/* Used in */
// _DMA_IOMMU_INTERFACE_V3

