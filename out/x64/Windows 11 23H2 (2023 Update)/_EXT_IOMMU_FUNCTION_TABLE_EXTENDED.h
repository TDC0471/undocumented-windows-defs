#pragma once
/* ------------------ */

#include <_EXT_IOMMU_DEVICE_ID.h>
#include <_EXT_IOMMU_OUTPUT_MAPPING.h>
#include <_IOMMU_PASID_TABLE_OBJECT.h>
#include <_LIST_ENTRY.h>
#include <_KTB_FLUSH_VA.h>
#include <_LARGE_INTEGER.h>
#include <_IOMMU_RESERVED_DEVICE.h>

//0xb8 bytes (sizeof)
struct _EXT_IOMMU_FUNCTION_TABLE_EXTENDED
{
    UCHAR (*FindDevice)(VOID* arg1, struct _EXT_IOMMU_DEVICE_ID* arg2, UCHAR arg3, struct _EXT_IOMMU_OUTPUT_MAPPING* arg4); //0x0
    LONG (*SetDeviceSvmCapabilities)(VOID* arg1, ULONGLONG arg2, UCHAR arg3); //0x8
    VOID (*SetDevicePasidTable)(VOID* arg1, ULONGLONG arg2, struct _IOMMU_PASID_TABLE_OBJECT* arg3, UCHAR arg4); //0x10
    LONG (*GrowPasidTable)(VOID* arg1, struct _IOMMU_PASID_TABLE_OBJECT* arg2, ULONG arg3); //0x18
    LONG (*SetPasidAddressSpace)(VOID* arg1, struct _IOMMU_PASID_TABLE_OBJECT* arg2, ULONG arg3, ULONGLONG arg4, UCHAR* arg5); //0x20
    VOID (*FlushTb)(VOID* arg1, ULONG arg2, ULONGLONG arg3, VOID* arg4, struct _LIST_ENTRY* arg5, ULONG arg6, struct _KTB_FLUSH_VA* arg7); //0x28
    VOID (*FlushDeviceTbOnly)(VOID* arg1, ULONGLONG arg2, ULONG arg3);      //0x30
    VOID (*DismissPageFault)(VOID* arg1, ULONG arg2, ULONGLONG arg3, USHORT arg4, LONG arg5); //0x38
    ULONG (*GetPageFault)(VOID* arg1, ULONG* arg2, ULONGLONG* arg3, USHORT* arg4, VOID** arg5, ULONGLONG* arg6); //0x40
    LONG (*SetMessageInterruptRouting)(VOID* arg1, UCHAR arg2, union _LARGE_INTEGER arg3, ULONG arg4); //0x48
    VOID (*EnableInterrupt)(VOID* arg1);                                    //0x50
    VOID (*DisableInterrupt)(VOID* arg1);                                   //0x58
    UCHAR (*HandleInterrupt)(VOID* arg1);                                   //0x60
    UCHAR (*CheckForReservedRegion)(struct _EXT_IOMMU_DEVICE_ID* arg1);     //0x68
    VOID (*MarkHiberRegions)(VOID* arg1, VOID* arg2, struct _LIST_ENTRY* arg3); //0x70
    VOID (*DrainSvmPageRequests)(VOID* arg1, ULONGLONG arg2, ULONG arg3);   //0x78
    VOID (*CancelPageRequests)(VOID* arg1, ULONGLONG arg2, ULONG arg3);     //0x80
    LONG (*EnumerateReservedDevices)(VOID* arg1, ULONG* arg2, struct _IOMMU_RESERVED_DEVICE** arg3); //0x88
    LONG (*ProcessReservedDomains)(VOID* arg1, ULONG arg2, struct _IOMMU_RESERVED_DEVICE** arg3); //0x90
    LONG (*QueryAcpiDeviceMapping)(VOID* arg1, struct _EXT_IOMMU_DEVICE_ID* arg2, struct _EXT_IOMMU_DEVICE_ID* arg3); //0x98
    ULONG (*GetRidAcpiMapCount)(VOID* arg1, struct _EXT_IOMMU_DEVICE_ID* arg2); //0xa0
    VOID (*FreePasidTable)(VOID* arg1, struct _IOMMU_PASID_TABLE_OBJECT* arg2, VOID* arg3); //0xa8
    LONG (*ConfigureAts)(VOID* arg1, ULONGLONG arg2, UCHAR arg3);           //0xb0
};
/* Used in */
// _REGISTERED_IOMMU

