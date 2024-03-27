#pragma once
/* ------------------ */

#include <_IOMMU_DMA_DOMAIN_TYPE.h>
#include <_IOMMU_DMA_DOMAIN_CREATION_FLAGS.h>
#include <_IOMMU_DMA_LOGICAL_ALLOCATOR_CONFIG.h>
#include <_IOMMU_DMA_RESERVED_REGION.h>
#include <_IOMMU_DMA_DOMAIN.h>
#include <_IOMMU_DMA_DEVICE.h>
#include <_DEVICE_OBJECT.h>
#include <_INPUT_MAPPING_ELEMENT.h>
#include <_IOMMU_MAP_PHYSICAL_ADDRESS.h>
#include <_DEVICE_FAULT_CONFIGURATION.h>
#include <_DOMAIN_CONFIGURATION.h>
#include <_IOMMU_INTERFACE_STATE_CHANGE.h>
#include <_IOMMU_INTERFACE_STATE_CHANGE_FIELDS.h>
#include <_IOMMU_DMA_LOGICAL_ADDRESS_TOKEN.h>
#include <_IOMMU_DMA_LOGICAL_ADDRESS_TOKEN_MAPPED_SEGMENT.h>
#include <_IOMMU_DEVICE_CREATION_CONFIGURATION.h>
#include <_IOMMU_DMA_PASID_DEVICE.h>
#include <_IOMMU_DMA_DEVICE_INFORMATION.h>

//0xd8 bytes (sizeof)
struct _DMA_IOMMU_INTERFACE_V3
{
    LONG (*CreateDomainEx)(enum _IOMMU_DMA_DOMAIN_TYPE arg1, union _IOMMU_DMA_DOMAIN_CREATION_FLAGS arg2, struct _IOMMU_DMA_LOGICAL_ALLOCATOR_CONFIG* arg3, struct _IOMMU_DMA_RESERVED_REGION* arg4, struct _IOMMU_DMA_DOMAIN** arg5); //0x0
    LONG (*DeleteDomain)(struct _IOMMU_DMA_DOMAIN* arg1);                   //0x8
    LONG (*AttachDeviceEx)(struct _IOMMU_DMA_DOMAIN* arg1, struct _IOMMU_DMA_DEVICE* arg2); //0x10
    LONG (*DetachDeviceEx)(struct _IOMMU_DMA_DEVICE* arg1);                 //0x18
    LONG (*FlushDomain)(struct _IOMMU_DMA_DOMAIN* arg1);                    //0x20
    LONG (*FlushDomainByVaList)(struct _IOMMU_DMA_DOMAIN* arg1, UCHAR arg2, ULONG arg3, VOID* arg4); //0x28
    LONG (*QueryInputMappings)(struct _DEVICE_OBJECT* arg1, struct _INPUT_MAPPING_ELEMENT* arg2, ULONG arg3, ULONG* arg4); //0x30
    LONG (*MapLogicalRangeEx)(struct _IOMMU_DMA_DOMAIN* arg1, ULONG arg2, struct _IOMMU_MAP_PHYSICAL_ADDRESS* arg3, ULONGLONG* arg4, ULONGLONG* arg5, ULONGLONG* arg6, ULONGLONG* arg7); //0x38
    LONG (*UnmapLogicalRange)(struct _IOMMU_DMA_DOMAIN* arg1, ULONGLONG arg2, ULONGLONG arg3); //0x40
    LONG (*MapIdentityRangeEx)(struct _IOMMU_DMA_DOMAIN* arg1, ULONG arg2, struct _IOMMU_MAP_PHYSICAL_ADDRESS* arg3); //0x48
    LONG (*UnmapIdentityRangeEx)(struct _IOMMU_DMA_DOMAIN* arg1, struct _IOMMU_MAP_PHYSICAL_ADDRESS* arg2); //0x50
    LONG (*SetDeviceFaultReportingEx)(struct _IOMMU_DMA_DEVICE* arg1, ULONG arg2, UCHAR arg3, struct _DEVICE_FAULT_CONFIGURATION* arg4); //0x58
    LONG (*ConfigureDomain)(struct _IOMMU_DMA_DOMAIN* arg1, struct _DOMAIN_CONFIGURATION* arg2); //0x60
    VOID (*QueryAvailableDomainTypes)(struct _IOMMU_DMA_DEVICE* arg1, ULONG* arg2); //0x68
    LONG (*RegisterInterfaceStateChangeCallback)(VOID (*arg1)(struct _IOMMU_INTERFACE_STATE_CHANGE* arg1, VOID* arg2), VOID* arg2, struct _IOMMU_DMA_DEVICE* arg3, union _IOMMU_INTERFACE_STATE_CHANGE_FIELDS* arg4); //0x70
    LONG (*UnregisterInterfaceStateChangeCallback)(VOID (*arg1)(struct _IOMMU_INTERFACE_STATE_CHANGE* arg1, VOID* arg2), struct _IOMMU_DMA_DEVICE* arg2); //0x78
    LONG (*ReserveLogicalAddressRange)(struct _IOMMU_DMA_DOMAIN* arg1, ULONGLONG arg2, ULONGLONG* arg3, ULONGLONG* arg4, ULONGLONG* arg5, struct _IOMMU_DMA_LOGICAL_ADDRESS_TOKEN** arg6); //0x80
    LONG (*FreeReservedLogicalAddressRange)(struct _IOMMU_DMA_LOGICAL_ADDRESS_TOKEN* arg1); //0x88
    LONG (*MapReservedLogicalRange)(struct _IOMMU_DMA_LOGICAL_ADDRESS_TOKEN* arg1, ULONGLONG arg2, ULONG arg3, struct _IOMMU_MAP_PHYSICAL_ADDRESS* arg4, struct _IOMMU_DMA_LOGICAL_ADDRESS_TOKEN_MAPPED_SEGMENT* arg5); //0x90
    LONG (*UnmapReservedLogicalRange)(struct _IOMMU_DMA_LOGICAL_ADDRESS_TOKEN_MAPPED_SEGMENT* arg1); //0x98
    LONG (*CreateDevice)(struct _DEVICE_OBJECT* arg1, struct _IOMMU_DEVICE_CREATION_CONFIGURATION* arg2, struct _IOMMU_DMA_DEVICE** arg3); //0xa0
    LONG (*DeleteDevice)(struct _IOMMU_DMA_DEVICE* arg1);                   //0xa8
    LONG (*CreatePasidDevice)(struct _IOMMU_DMA_DEVICE* arg1, struct _IOMMU_DMA_PASID_DEVICE** arg2, ULONG* arg3); //0xb0
    LONG (*DeletePasidDevice)(struct _IOMMU_DMA_PASID_DEVICE* arg1);        //0xb8
    LONG (*AttachPasidDevice)(struct _IOMMU_DMA_DOMAIN* arg1, struct _IOMMU_DMA_PASID_DEVICE* arg2); //0xc0
    LONG (*DetachPasidDevice)(struct _IOMMU_DMA_PASID_DEVICE* arg1);        //0xc8
    LONG (*QueryDeviceInfo)(struct _IOMMU_DMA_DEVICE* arg1, ULONG arg2, ULONG* arg3, struct _IOMMU_DMA_DEVICE_INFORMATION* arg4); //0xd0
};
/* Used in */
// _DMA_IOMMU_INTERFACE_EX

