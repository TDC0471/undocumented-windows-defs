#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_KINTERRUPT_POLARITY.h>
#include <_KINTERRUPT_MODE.h>
#include <_EXT_IOMMU_FUNCTION_TABLE.h>
#include <_EXT_IOMMU_FUNCTION_TABLE_EXTENDED.h>
#include <_IOMMU_PAGE_HANDLING_DATA.h>
#include <_RTL_BITMAP.h>
#include <_EXT_IOMMU_KNOWN_IOMMU_TYPE.h>
#include <_PCI_SLOT_NUMBER.h>
#include <_LARGE_INTEGER.h>
#include <_UNICODE_STRING.h>
#include <_IOMMU_RESERVED_DEVICE_LIST.h>

//0x228 bytes (sizeof)
struct _REGISTERED_IOMMU
{
    struct _LIST_ENTRY ListEntry;                                           //0x0
    VOID* InternalData;                                                     //0x10
    ULONG InternalDataSize;                                                 //0x18
    VOID* InterruptContext;                                                 //0x20
    UCHAR Irql;                                                             //0x28
    LONG Gsi;                                                               //0x2c
    enum _KINTERRUPT_POLARITY InterruptPolarity;                            //0x30
    enum _KINTERRUPT_MODE InterruptMode;                                    //0x34
    struct _EXT_IOMMU_FUNCTION_TABLE FunctionTable;                         //0x38
    struct _EXT_IOMMU_FUNCTION_TABLE_EXTENDED FunctionTableExtended;        //0xc0
    ULONG Flags;                                                            //0x178
    struct _LIST_ENTRY PasidTableListHead;                                  //0x180
    struct _IOMMU_PAGE_HANDLING_DATA PageHandling;                          //0x190
    ULONG MaximumDomainIds;                                                 //0x1b8
    ULONGLONG DomainIdBitmapLock;                                           //0x1c0
    struct _RTL_BITMAP DomainIdBitmap;                                      //0x1c8
    ULONG Capabilities;                                                     //0x1d8
    enum _EXT_IOMMU_KNOWN_IOMMU_TYPE KnownType;                             //0x1dc
    ULONG PciSegment;                                                       //0x1e0
    ULONG PciBus;                                                           //0x1e4
    struct _PCI_SLOT_NUMBER PciSlot;                                        //0x1e8
    union _LARGE_INTEGER MsiAddress;                                        //0x1f0
    ULONGLONG MsiData;                                                      //0x1f8
    ULONG MaximumAsids;                                                     //0x200
    ULONG FaultPacketBytes;                                                 //0x204
    ULONG Identifier;                                                       //0x208
    struct _UNICODE_STRING ResourceId;                                      //0x210
    struct _IOMMU_RESERVED_DEVICE_LIST* ReservedDevices;                    //0x220
};
/* Used in */
// _IOMMU_DMA_DEVICE

