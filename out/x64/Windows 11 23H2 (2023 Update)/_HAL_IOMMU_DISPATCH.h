#pragma once
/* ------------------ */

#include <_EXT_IOMMU_DEVICE_ID.h>
#include <_DEVICE_OBJECT.h>
#include <_IOMMU_SVM_CAPABILITIES.h>
#include <_KTB_FLUSH_VA.h>
#include <_IOMMU_ATS_SETTINGS.h>

//0xb8 bytes (sizeof)
struct _HAL_IOMMU_DISPATCH
{
    UCHAR (*HalIommuSupportEnabled)();                                      //0x0
    LONG (*HalIommuGetConfiguration)(ULONG arg1, ULONG* arg2, ULONG* arg3, VOID** arg4); //0x8
    LONG (*HalIommuGetLibraryContext)(ULONG arg1, ULONG arg2, VOID** arg3); //0x10
    LONG (*HalIommuMapDevice)(VOID* arg1, struct _EXT_IOMMU_DEVICE_ID* arg2, struct _DEVICE_OBJECT* arg3, union _IOMMU_SVM_CAPABILITIES* arg4, VOID** arg5); //0x18
    LONG (*HalIommuEnableDevicePasid)(VOID* arg1, VOID* arg2);              //0x20
    LONG (*HalIommuSetAddressSpace)(VOID* arg1, ULONGLONG arg2);            //0x28
    LONG (*HalIommuDisableDevicePasid)(VOID* arg1, VOID* arg2);             //0x30
    LONG (*HalIommuUnmapDevice)(VOID* arg1, VOID* arg2);                    //0x38
    LONG (*HalIommuFreeLibraryContext)(VOID* arg1);                         //0x40
    VOID (*HalIommuFlushTb)(VOID* arg1, ULONG arg2, struct _KTB_FLUSH_VA* arg3); //0x48
    VOID (*HalIommuFlushAllPasid)(VOID* arg1, ULONG arg2, struct _KTB_FLUSH_VA* arg3); //0x50
    UCHAR (*HalIommuProcessPageRequestQueue)(ULONG arg1);                   //0x58
    VOID (*HalIommuFaultRoutine)(ULONG arg1);                               //0x60
    VOID* (*HalIommuReferenceAsid)(ULONG arg1);                             //0x68
    VOID (*HalIommuDereferenceAsid)(ULONG arg1);                            //0x70
    LONG (*HalIommuServicePageFault)(ULONGLONG arg1, VOID* arg2, ULONG arg3); //0x78
    LONG (*HalIommuDevicePowerChange)(VOID* arg1, VOID* arg2, UCHAR arg3);  //0x80
    LONG (*HalIommuBeginDeviceReset)(VOID* arg1, ULONG* arg2);              //0x88
    LONG (*HalIommuFinalizeDeviceReset)(VOID* arg1);                        //0x90
    LONG (*HalIommuGetAtsSettings)(struct _EXT_IOMMU_DEVICE_ID* arg1, union _IOMMU_ATS_SETTINGS* arg2); //0x98
    LONG (*HalIommuCreateAtsDevice)(struct _EXT_IOMMU_DEVICE_ID* arg1, struct _DEVICE_OBJECT* arg2, union _IOMMU_SVM_CAPABILITIES* arg3, VOID** arg4); //0xa0
    VOID (*HalIommuDeleteAtsDevice)(VOID* arg1);                            //0xa8
    LONG (*HalIommuGetDomainTransitionSupport)(struct _EXT_IOMMU_DEVICE_ID* arg1, UCHAR* arg2); //0xb0
};
/* Used in */
// HAL_PRIVATE_DISPATCH

