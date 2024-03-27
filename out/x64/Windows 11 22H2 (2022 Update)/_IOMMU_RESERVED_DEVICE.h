#pragma once
/* ------------------ */

#include <_EXT_IOMMU_DEVICE_ID.h>
#include <_LARGE_INTEGER.h>
#include <_EXT_IOMMU_RESERVED_MEMORY_REGION.h>

//0x38 bytes (sizeof)
struct _IOMMU_RESERVED_DEVICE
{
    struct _EXT_IOMMU_DEVICE_ID* DeviceId;                                  //0x0
    VOID* PageTable;                                                        //0x8
    union _LARGE_INTEGER PageTablePhysical;                                 //0x10
    ULONG RegionCount;                                                      //0x18
    struct _EXT_IOMMU_RESERVED_MEMORY_REGION Regions[1];                    //0x20
};
/* Used in */
// _EXT_IOMMU_FUNCTION_TABLE_EXTENDED
// _IOMMU_RESERVED_DEVICE_LIST

