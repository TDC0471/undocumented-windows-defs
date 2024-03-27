#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_LARGE_INTEGER.h>
#include <_IOMMU_DMA_DOMAIN.h>
#include <_HALP_DMA_TRANSLATION_TYPE.h>
#include <_ADAPTER_OBJECT.h>
#include <_RTL_RB_TREE.h>

//0x78 bytes (sizeof)
struct _HALP_DMA_DOMAIN_OBJECT
{
    struct _LIST_ENTRY ListEntry;                                           //0x0
    union _LARGE_INTEGER MaximumPhysicalAddress;                            //0x10
    union _LARGE_INTEGER BoundaryAddressMultiple;                           //0x18
    UCHAR CacheCoherent;                                                    //0x20
    UCHAR FirmwareReserved;                                                 //0x21
    struct _IOMMU_DMA_DOMAIN* IommuDomainPointer;                           //0x28
    enum _HALP_DMA_TRANSLATION_TYPE TranslationType;                        //0x30
    struct _ADAPTER_OBJECT* OwningAdapter;                                  //0x38
    struct _RTL_RB_TREE CommonBufferRoot;                                   //0x40
    ULONGLONG CommonBufferTreeLock;                                         //0x50
    struct _LIST_ENTRY VectorCommonBufferListHead;                          //0x58
    ULONGLONG VectorCommonBufferLock;                                       //0x68
    ULONG DomainRefCount;                                                   //0x70
};
/* Used in */
// _ADAPTER_OBJECT
// _DMA_COMMON_BUFFER_VECTOR
// _IOMMU_DMA_DOMAIN

