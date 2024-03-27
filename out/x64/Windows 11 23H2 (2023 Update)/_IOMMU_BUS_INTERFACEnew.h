#pragma once
/* ------------------ */

#include <_IOMMU_SVM_CAPABILITIES.h>
#include <_DEVICE_OBJECT.h>
#include <_DEVICE_POWER_STATE.h>
#include <_IOMMU_DEVICE_PROPERTIES.h>
#include <_EXT_IOMMU_DEVICE_ID.h>

//0x50 bytes (sizeof)
struct _IOMMU_BUS_INTERFACE
{
    USHORT Size;                                                            //0x0
    USHORT Version;                                                         //0x2
    VOID* Context;                                                          //0x8
    VOID (*InterfaceReference)(VOID* arg1);                                 //0x10
    VOID (*InterfaceDereference)(VOID* arg1);                               //0x18
    LONG (*GetSvmCapabilities)(VOID* arg1, union _IOMMU_SVM_CAPABILITIES* arg2); //0x20
    LONG (*EnableSvmCapabilities)(VOID* arg1, union _IOMMU_SVM_CAPABILITIES* arg2, LONG (*arg3)(struct _DEVICE_OBJECT* arg1, enum _DEVICE_POWER_STATE arg2, VOID* arg3), VOID* arg4); //0x28
    LONG (*DisableSvmCapabilities)(VOID* arg1, union _IOMMU_SVM_CAPABILITIES* arg2); //0x30
    LONG (*GetDeviceProperties)(VOID* arg1, union _IOMMU_DEVICE_PROPERTIES* arg2); //0x38
    LONG (*GetDeviceId)(VOID* arg1, ULONGLONG arg2, struct _EXT_IOMMU_DEVICE_ID* arg3, ULONGLONG* arg4); //0x40
    struct _DEVICE_OBJECT* (*GetRootDevice)(VOID* arg1);                    //0x48
};
/* Used in */
// _IOMMU_DMA_DEVICE

