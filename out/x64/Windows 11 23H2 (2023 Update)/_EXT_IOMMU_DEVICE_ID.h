#pragma once
/* ------------------ */

#include <_EXT_IOMMU_DEVICE_TYPE.h>
#include <_EXT_IOMMU_DEVICE_ID_FLAGS.h>
#include <_EXT_IOMMU_DEVICE_ID_PCI.h>
#include <_EXT_IOMMU_DEVICE_ID_ACPI.h>
#include <_EXT_IOMMU_DEVICE_ID_TEST.h>
#include <_EXT_IOMMU_DEVICE_ID_GIC.h>

//0x18 bytes (sizeof)
struct _EXT_IOMMU_DEVICE_ID
{
    enum _EXT_IOMMU_DEVICE_TYPE DeviceType;                                 //0x0
    union _EXT_IOMMU_DEVICE_ID_FLAGS Flags;                                 //0x4
    union
    {
        struct _EXT_IOMMU_DEVICE_ID_PCI Pci;                                //0x8
        struct _EXT_IOMMU_DEVICE_ID_ACPI Acpi;                              //0x8
        UCHAR IoApicId;                                                     //0x8
        ULONGLONG LogicalId;                                                //0x8
        struct _EXT_IOMMU_DEVICE_ID_TEST Test;                              //0x8
        struct _EXT_IOMMU_DEVICE_ID_GIC Gic;                                //0x8
    };
};
/* Used in */
// HAL_PRIVATE_DISPATCH
// _ADAPTER_OBJECT
// _EXT_IOMMU_FUNCTION_TABLE
// _EXT_IOMMU_FUNCTION_TABLE_EXTENDED
// _HAL_INTEL_ENLIGHTENMENT_INFORMATION
// _HAL_IOMMU_DISPATCH
// _IOMMU_BUS_INTERFACE
// _IOMMU_DMA_DEVICE
// _IOMMU_RESERVED_DEVICE

