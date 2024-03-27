#pragma once
/* ------------------ */

#include <_EXT_IOMMU.h>
#include <_EXT_IOMMU_SETTINGS.h>
#include <_EXT_IOMMU_DOMAIN.h>
#include <_EXT_IOMMU_DEVICE_ID.h>
#include <_EXT_IOMMU_CREATE_DEVICE_FLAGS.h>
#include <_EXT_IOMMU_DEVICE.h>
#include <_EXT_IOMMU_FLUSH_CONTEXT.h>
#include <_KTB_FLUSH_VA.h>
#include <_INTERRUPT_LINE_STATE.h>

//0x98 bytes (sizeof)
struct _EXT_IOMMU_FUNCTION_TABLE
{
    LONG (*ConfigureSettings)(struct _EXT_IOMMU* arg1, struct _EXT_IOMMU_SETTINGS* arg2); //0x0
    LONG (*Initialize)(struct _EXT_IOMMU* arg1, ULONG arg2, UCHAR arg3);    //0x8
    LONG (*AllocateDomain)(struct _EXT_IOMMU* arg1, struct _EXT_IOMMU_DOMAIN* arg2, struct _EXT_IOMMU_DOMAIN* arg3, VOID* arg4); //0x10
    VOID (*FreeDomain)(struct _EXT_IOMMU* arg1, struct _EXT_IOMMU_DOMAIN* arg2, VOID* arg3); //0x18
    LONG (*CreateDevice)(struct _EXT_IOMMU* arg1, struct _EXT_IOMMU_DEVICE_ID* arg2, union _EXT_IOMMU_CREATE_DEVICE_FLAGS arg3, VOID* arg4, struct _EXT_IOMMU_DEVICE** arg5, VOID* arg6); //0x20
    VOID (*DeleteDevice)(struct _EXT_IOMMU* arg1, struct _EXT_IOMMU_DEVICE* arg2, VOID* arg3); //0x28
    UCHAR (*OwnDevice)(struct _EXT_IOMMU* arg1, struct _EXT_IOMMU_DEVICE_ID* arg2); //0x30
    VOID (*ConfigureDeviceFaultReporting)(struct _EXT_IOMMU* arg1, struct _EXT_IOMMU_DEVICE* arg2, UCHAR arg3); //0x38
    LONG (*AttachDeviceDomain)(struct _EXT_IOMMU* arg1, struct _EXT_IOMMU_DEVICE* arg2, struct _EXT_IOMMU_DOMAIN* arg3, VOID* arg4); //0x40
    VOID (*DetachDeviceDomain)(struct _EXT_IOMMU* arg1, struct _EXT_IOMMU_DEVICE* arg2, VOID* arg3); //0x48
    VOID (*FlushDomainTb)(struct _EXT_IOMMU* arg1, struct _EXT_IOMMU_DOMAIN* arg2, struct _EXT_IOMMU_FLUSH_CONTEXT* arg3, ULONG arg4, struct _KTB_FLUSH_VA* arg5); //0x50
    VOID (*SyncFlush)(struct _EXT_IOMMU* arg1, struct _EXT_IOMMU_FLUSH_CONTEXT* arg2); //0x58
    VOID (*CompleteFlush)(struct _EXT_IOMMU* arg1, struct _EXT_IOMMU_FLUSH_CONTEXT* arg2); //0x60
    LONG (*AllocateRemappingTableEntry)(VOID* arg1, ULONG arg2, ULONG arg3, ULONG arg4, USHORT arg5, UCHAR arg6, UCHAR arg7, ULONG arg8, struct _EXT_IOMMU_DEVICE_ID* arg9); //0x68
    LONG (*FreeRemappingTableEntry)(VOID* arg1, ULONG arg2, ULONG arg3);    //0x70
    UCHAR (*UpdateRemappingTableEntry)(VOID* arg1, UCHAR arg2, ULONG arg3, struct _INTERRUPT_LINE_STATE* arg4); //0x78
    VOID (*InvalidateRemappingTableEntry)(VOID* arg1, ULONG arg2);          //0x80
    VOID (*UpdateRemappingDestination)(VOID* arg1, UCHAR arg2, ULONG* arg3, ULONG* arg4, ULONG arg5); //0x88
    VOID (*CaptureGlobalCrashdumpState)(VOID* arg1);                        //0x90
};
/* Used in */
// _EXT_IOMMU
// _REGISTERED_IOMMU

