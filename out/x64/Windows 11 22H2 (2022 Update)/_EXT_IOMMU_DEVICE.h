#pragma once
/* ------------------ */

#include <_EXT_IOMMU.h>
#include <_EXT_IOMMU_DOMAIN.h>

//0x28 bytes (sizeof)
struct _EXT_IOMMU_DEVICE
{
    VOID* Context;                                                          //0x0
    struct _EXT_IOMMU* Iommu;                                               //0x8
    struct _EXT_IOMMU_DOMAIN* Domain;                                       //0x10
    ULONGLONG AssociatedDomainId;                                           //0x18
    USHORT FirmwareDomainId;                                                //0x20
    UCHAR FaultReportingEnabled;                                            //0x22
};
/* Used in */
// _EXT_IOMMU_FUNCTION_TABLE
// _IOMMU_DMA_DEVICE

