#pragma once
/* ------------------ */

#include <_EXT_IOMMU_DEVICE_ID.h>
#include <_IOMMU_SVM_CAPABILITIES.h>
#include <_KTB_FLUSH_VA.h>

//0x4c bytes (sizeof)
struct _HAL_IOMMU_DISPATCH
{
    UCHAR (*HalIommuSupportEnabled)();                                      //0x0
    LONG (*HalIommuGetConfiguration)(ULONG arg1, ULONG* arg2, ULONG* arg3, VOID** arg4); //0x4
    LONG (*HalIommuGetLibraryContext)(ULONG arg1, ULONG arg2, VOID** arg3); //0x8
    LONG (*HalIommuMapDevice)(VOID* arg1, struct _EXT_IOMMU_DEVICE_ID* arg2, union _IOMMU_SVM_CAPABILITIES* arg3, VOID** arg4); //0xc
    LONG (*HalIommuEnableDevicePasid)(VOID* arg1, VOID* arg2);              //0x10
    LONG (*HalIommuSetAddressSpace)(VOID* arg1, ULONG arg2);                //0x14
    LONG (*HalIommuDisableDevicePasid)(VOID* arg1, VOID* arg2);             //0x18
    LONG (*HalIommuUnmapDevice)(VOID* arg1, VOID* arg2);                    //0x1c
    LONG (*HalIommuFreeLibraryContext)(VOID* arg1);                         //0x20
    VOID (*HalIommuFlushTb)(VOID* arg1, ULONG arg2, struct _KTB_FLUSH_VA* arg3); //0x24
    VOID (*HalIommuFlushAllPasid)(VOID* arg1, ULONG arg2, struct _KTB_FLUSH_VA* arg3); //0x28
    UCHAR (*HalIommuProcessPageRequestQueue)(ULONG arg1);                   //0x2c
    VOID (*HalIommuFaultRoutine)(ULONG arg1);                               //0x30
    VOID* (*HalIommuReferenceAsid)(ULONG arg1);                             //0x34
    VOID (*HalIommuDereferenceAsid)(ULONG arg1);                            //0x38
    LONG (*HalIommuServicePageFault)(ULONG arg1, VOID* arg2, ULONG arg3);   //0x3c
    LONG (*HalIommuDevicePowerChange)(VOID* arg1, VOID* arg2, UCHAR arg3);  //0x40
    LONG (*HalIommuBeginDeviceReset)(VOID* arg1, ULONG* arg2);              //0x44
    LONG (*HalIommuFinalizeDeviceReset)(VOID* arg1);                        //0x48
};
/* Used in */
// HAL_PRIVATE_DISPATCH

