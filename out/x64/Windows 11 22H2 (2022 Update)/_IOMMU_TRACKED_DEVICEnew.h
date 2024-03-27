#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_IOMMU_SVM_CAPABILITIES.h>
#include <_IOMMU_PASID_TABLE_OBJECT.h>
#include <_IOMMU_DMA_DEVICE.h>

//0x70 bytes (sizeof)
struct _IOMMU_TRACKED_DEVICE
{
    struct _LIST_ENTRY ListEntry;                                           //0x0
    ULONGLONG Lock;                                                         //0x10
    VOID* Iommu;                                                            //0x18
    ULONG IommuCapabilities;                                                //0x20
    ULONG ReferenceCount;                                                   //0x24
    ULONGLONG SourceId;                                                     //0x28
    union _IOMMU_SVM_CAPABILITIES Capabilities;                             //0x30
    ULONG Flags;                                                            //0x3c
    struct _IOMMU_PASID_TABLE_OBJECT* CurrentPasidTable;                    //0x40
    struct _LIST_ENTRY PasidTableDeviceList;                                //0x48
    struct _LIST_ENTRY ActiveDeviceListHead;                                //0x58
    struct _IOMMU_DMA_DEVICE* DmaDevice;                                    //0x68
};
/* Used in */
// _IOMMU_DMA_DEVICE

