#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_LARGE_INTEGER.h>
#include <_EXT_IOMMU_TRANSLATION_TYPE.h>
#include <_ADAPTER_OBJECT.h>
#include <_RTL_RB_TREE.h>

//0x88 bytes (sizeof)
struct _HALP_DMA_DOMAIN_OBJECT
{
    struct _LIST_ENTRY ListEntry;                                           //0x0
    union _LARGE_INTEGER MaximumPhysicalAddress;                            //0x10
    union _LARGE_INTEGER BoundaryAddressMultiple;                           //0x18
    UCHAR CacheCoherent;                                                    //0x20
    UCHAR FirmwareReserved;                                                 //0x21
    VOID* IommuDomainPointer;                                               //0x28
    VOID* LaState;                                                          //0x30
    ULONGLONG LaStateLock;                                                  //0x38
    enum _EXT_IOMMU_TRANSLATION_TYPE TranslationType;                       //0x40
    struct _ADAPTER_OBJECT* OwningAdapter;                                  //0x48
    struct _RTL_RB_TREE CommonBufferRoot;                                   //0x50
    ULONGLONG CommonBufferTreeLock;                                         //0x60
    struct _LIST_ENTRY VectorCommonBufferListHead;                          //0x68
    ULONGLONG VectorCommonBufferLock;                                       //0x78
    ULONG DomainRefCount;                                                   //0x80
};
/* Used in */
// _ADAPTER_OBJECT
// _DMA_COMMON_BUFFER_VECTOR

