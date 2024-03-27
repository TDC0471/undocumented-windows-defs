#pragma once
/* ------------------ */

#include <_HALP_DMA_DOMAIN_OBJECT.h>
#include <_IOMMU_DMA_DOMAIN_TYPE.h>
#include <_EXT_IOMMU_TRANSLATION_TYPE.h>
#include <_LIST_ENTRY.h>
#include <_DMAR_PAGE_TABLE_STATE.h>
#include <_IOMMU_DMA_LOGICAL_ALLOCATOR.h>
#include <_EX_PUSH_LOCK.h>

//0x70 bytes (sizeof)
struct _IOMMU_DMA_DOMAIN
{
    struct _HALP_DMA_DOMAIN_OBJECT* DmaDomainOwner;                         //0x0
    enum _IOMMU_DMA_DOMAIN_TYPE DomainType;                                 //0x8
    enum _EXT_IOMMU_TRANSLATION_TYPE TranslationType;                       //0xc
    struct _LIST_ENTRY HardwareDomainListHead;                              //0x10
    ULONGLONG HardwareDomainListLock;                                       //0x20
    struct _DMAR_PAGE_TABLE_STATE* DmarptState;                             //0x28
    ULONG DomainId;                                                         //0x30
    UCHAR IsStage1;                                                         //0x34
    ULONG Asid;                                                             //0x38
    struct _IOMMU_DMA_LOGICAL_ALLOCATOR* LogicalAllocator;                  //0x40
    struct _LIST_ENTRY AttachedDevicesList;                                 //0x48
    ULONGLONG AttachedDevicesListLock;                                      //0x58
    ULONG HvReferences;                                                     //0x60
    UCHAR HvDomainIdAllocated;                                              //0x64
    struct _EX_PUSH_LOCK HvPushLock;                                        //0x68
};
/* Used in */
// _DMA_IOMMU_INTERFACE
// _DMA_IOMMU_INTERFACE_V1
// _DMA_IOMMU_INTERFACE_V2
// _DMA_IOMMU_INTERFACE_V3
// _HALP_DMA_DOMAIN_OBJECT
// _IOMMU_DMA_DEVICE

