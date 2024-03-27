#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_IOMMU_DEVICE_CREATION_CONFIGURATION_TYPE.h>
#include <_IOMMU_DEVICE_CREATION_CONFIGURATION_ACPI.h>
#include <_IOMMU_DEVICE_CREATION_CONFIGURATION_PASID.h>

//0x20 bytes (sizeof)
struct _IOMMU_DEVICE_CREATION_CONFIGURATION
{
    struct _LIST_ENTRY NextConfiguration;                                   //0x0
    enum _IOMMU_DEVICE_CREATION_CONFIGURATION_TYPE ConfigType;              //0x10
    union
    {
        struct _IOMMU_DEVICE_CREATION_CONFIGURATION_ACPI Acpi;              //0x18
        VOID* DeviceId;                                                     //0x18
        struct _IOMMU_DEVICE_CREATION_CONFIGURATION_PASID Pasid;            //0x18
    };
};
/* Used in */
// _DMA_IOMMU_INTERFACE_V2
// _DMA_IOMMU_INTERFACE_V3

