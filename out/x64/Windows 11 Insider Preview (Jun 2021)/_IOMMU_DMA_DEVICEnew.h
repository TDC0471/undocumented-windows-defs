#pragma once
/* ------------------ */

#include <_EXT_IOMMU_DEVICE_ID.h>
#include <_DEVICE_OBJECT.h>
#include <_IOMMU_DMA_DOMAIN.h>
#include <_REGISTERED_IOMMU.h>
#include <_EXT_IOMMU_DEVICE.h>
#include <_IOMMU_INTERFACE_CALLBACK_RECORD.h>
#include <_FAULT_INFORMATION.h>
#include <_KDPC.h>
#include <_WORK_QUEUE_ITEM.h>

//0xe8 bytes (sizeof)
struct _IOMMU_DMA_DEVICE
{
    struct _EXT_IOMMU_DEVICE_ID* DeviceId;                                  //0x0
    struct _DEVICE_OBJECT* DeviceObject;                                    //0x8
    LONG DeviceState;                                                       //0x10
    struct _IOMMU_DMA_DOMAIN* DomainOwner;                                  //0x18
    union
    {
        struct
        {
            ULONGLONG LogicalId;                                            //0x20
        } Hypervisor;                                                       //0x20
        struct
        {
            struct _REGISTERED_IOMMU* Iommu;                                //0x20
            struct _EXT_IOMMU_DEVICE* ExtDevice;                            //0x28
        } Native;                                                           //0x20
    };
    struct _IOMMU_INTERFACE_CALLBACK_RECORD* InterfaceCallbackRecord;       //0x30
    UCHAR DpptException;                                                    //0x38
    VOID (*FaultHandler)(VOID* arg1, struct _FAULT_INFORMATION* arg2);      //0x40
    VOID* FaultContext;                                                     //0x48
    struct _FAULT_INFORMATION FaultInfo;                                    //0x50
    struct _KDPC FaultDpc;                                                  //0x88
    struct _WORK_QUEUE_ITEM FaultWorkItem;                                  //0xc8
};
/* Used in */
// HAL_PRIVATE_DISPATCH
// _ADAPTER_OBJECT
// _DMA_IOMMU_INTERFACE_V2
// _IOMMU_INTERFACE_CALLBACK_RECORD

