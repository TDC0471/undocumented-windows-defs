#pragma once
/* ------------------ */

#include <_EXT_IOMMU_DEVICE_ID.h>
#include <_DEVICE_OBJECT.h>
#include <_IOMMU_DMA_DOMAIN.h>
#include <_REGISTERED_IOMMU.h>
#include <_EXT_IOMMU_DEVICE.h>
#include <_EX_RUNDOWN_REF.h>
#include <_IOMMU_INTERFACE_CALLBACK_RECORD.h>
#include <_IOMMU_TRACKED_DEVICE.h>
#include <_FAULT_INFORMATION.h>
#include <_KDPC.h>
#include <_WORK_QUEUE_ITEM.h>
#include <_IOMMU_BUS_INTERFACE.h>
#include <_LIST_ENTRY.h>
#include <_EX_PUSH_LOCK.h>
#include <_IOMMU_SVM_CAPABILITIES.h>
#include <_IOMMU_DMA_DEVICE_CREATION_STATE.h>

//0x1a0 bytes (sizeof)
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
            ULONGLONG SourceId;                                             //0x30
            ULONG AtsReferenceCount;                                        //0x38
            ULONG InvalidationQueueDepth;                                   //0x3c
            struct _EX_RUNDOWN_REF DeviceActive;                            //0x40
        } Native;                                                           //0x20
    };
    struct _IOMMU_INTERFACE_CALLBACK_RECORD* InterfaceCallbackRecord;       //0x48
    UCHAR DpptException;                                                    //0x50
    struct _IOMMU_TRACKED_DEVICE* SvmDevice;                                //0x58
    VOID (*FaultHandler)(VOID* arg1, struct _FAULT_INFORMATION* arg2);      //0x60
    VOID* FaultContext;                                                     //0x68
    struct _FAULT_INFORMATION FaultInfo;                                    //0x70
    struct _KDPC FaultDpc;                                                  //0xa8
    struct _WORK_QUEUE_ITEM FaultWorkItem;                                  //0xe8
    UCHAR PasidFaultsSuppressed;                                            //0x108
    UCHAR PasidTaggedDmaEnabled;                                            //0x109
    UCHAR DefaultPasidEnabled;                                              //0x10a
    struct _IOMMU_BUS_INTERFACE IommuInterface;                             //0x110
    ULONG PasidDomainId;                                                    //0x160
    struct _LIST_ENTRY PasidDevicesList;                                    //0x168
    struct _EX_PUSH_LOCK PasidDevicesListLock;                              //0x178
    union _IOMMU_SVM_CAPABILITIES SvmCapControl;                            //0x180
    enum _IOMMU_DMA_DEVICE_CREATION_STATE CreationStateInitial;             //0x184
    enum _IOMMU_DMA_DEVICE_CREATION_STATE CreationStateCurrent;             //0x188
    struct _LIST_ENTRY DomainDmaDeviceEntry;                                //0x190
};
/* Used in */
// HAL_PRIVATE_DISPATCH
// _ADAPTER_OBJECT
// _DMA_IOMMU_INTERFACE_V2
// _DMA_IOMMU_INTERFACE_V3
// _IOMMU_INTERFACE_CALLBACK_RECORD
// _IOMMU_TRACKED_DEVICE

