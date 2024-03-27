#pragma once
/* ------------------ */

#include <_IOMMU_DMA_DOMAIN.h>
#include <_DEVICE_OBJECT.h>
#include <_INPUT_MAPPING_ELEMENT.h>
#include <_MDL.h>
#include <_DEVICE_FAULT_CONFIGURATION.h>
#include <_DOMAIN_CONFIGURATION.h>

//0x38 bytes (sizeof)
struct _DMA_IOMMU_INTERFACE
{
    ULONG Version;                                                          //0x0
    LONG (*CreateDomain)(UCHAR arg1, struct _IOMMU_DMA_DOMAIN** arg2);      //0x4
    LONG (*DeleteDomain)(struct _IOMMU_DMA_DOMAIN* arg1);                   //0x8
    LONG (*AttachDevice)(struct _IOMMU_DMA_DOMAIN* arg1, struct _DEVICE_OBJECT* arg2, ULONG arg3, ULONG arg4); //0xc
    LONG (*DetachDevice)(struct _IOMMU_DMA_DOMAIN* arg1, struct _DEVICE_OBJECT* arg2, ULONG arg3); //0x10
    LONG (*FlushDomain)(struct _IOMMU_DMA_DOMAIN* arg1);                    //0x14
    LONG (*FlushDomainByVaList)(struct _IOMMU_DMA_DOMAIN* arg1, UCHAR arg2, ULONG arg3, VOID* arg4); //0x18
    LONG (*QueryInputMappings)(struct _DEVICE_OBJECT* arg1, struct _INPUT_MAPPING_ELEMENT* arg2, ULONG arg3, ULONG* arg4); //0x1c
    LONG (*MapLogicalRange)(struct _IOMMU_DMA_DOMAIN* arg1, ULONG arg2, struct _MDL* arg3, ULONGLONG arg4); //0x20
    LONG (*UnmapLogicalRange)(struct _IOMMU_DMA_DOMAIN* arg1, ULONGLONG arg2, ULONGLONG arg3); //0x24
    LONG (*MapIdentityRange)(struct _IOMMU_DMA_DOMAIN* arg1, ULONG arg2, struct _MDL* arg3); //0x28
    LONG (*UnmapIdentityRange)(struct _IOMMU_DMA_DOMAIN* arg1, struct _MDL* arg2); //0x2c
    LONG (*SetDeviceFaultReporting)(struct _DEVICE_OBJECT* arg1, ULONG arg2, UCHAR arg3, struct _DEVICE_FAULT_CONFIGURATION* arg4); //0x30
    LONG (*ConfigureDomain)(struct _IOMMU_DMA_DOMAIN* arg1, struct _DOMAIN_CONFIGURATION* arg2); //0x34
};
/* Used in */
// HAL_PRIVATE_DISPATCH

