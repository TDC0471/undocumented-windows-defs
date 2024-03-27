#pragma once
/* ------------------ */

#include <_IOMMU_RESERVED_DEVICE.h>

//0x10 bytes (sizeof)
struct _IOMMU_RESERVED_DEVICE_LIST
{
    ULONG Count;                                                            //0x0
    struct _IOMMU_RESERVED_DEVICE* Devices[1];                              //0x8
};
/* Used in */
// _REGISTERED_IOMMU

