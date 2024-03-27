#pragma once
/* ------------------ */

#include <_EXT_IOMMU.h>

//0x20 bytes (sizeof)
struct _EXT_IOMMU_DEVICE
{
    VOID* Context;                                                          //0x0
    struct _EXT_IOMMU* Iommu;                                               //0x8
    ULONGLONG AssociatedDomainId;                                           //0x10
    USHORT FirmwareDomainId;                                                //0x18
    UCHAR FaultReportingEnabled;                                            //0x1a
};
/* Used in */
// _EXT_IOMMU_FUNCTION_TABLE
// _IOMMU_DMA_DEVICE

