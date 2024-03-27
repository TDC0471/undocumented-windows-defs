#pragma once
/* ------------------ */

#include <_IOMMU_PASID_CONFIGURATION_TYPE.h>

//0x8 bytes (sizeof)
struct _IOMMU_DEVICE_CREATION_CONFIGURATION_PASID
{
    enum _IOMMU_PASID_CONFIGURATION_TYPE ConfigType;                        //0x0
    UCHAR SuppressPasidFaults;                                              //0x4
};
/* Used in */
// _IOMMU_DEVICE_CREATION_CONFIGURATION

