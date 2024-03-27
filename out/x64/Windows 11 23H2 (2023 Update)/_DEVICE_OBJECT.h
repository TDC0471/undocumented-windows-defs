#pragma once
/* ------------------ */

#include <_DRIVER_OBJECT.h>
#include <_DEVICE_OBJECT.h>
#include <_IRP.h>
#include <_IO_TIMER.h>
#include <_VPB.h>
#include <_LIST_ENTRY.h>
#include <_WAIT_CONTEXT_BLOCK.h>
#include <_KDEVICE_QUEUE.h>
#include <_KDPC.h>
#include <_KEVENT.h>
#include <_DEVOBJ_EXTENSION.h>

//0x150 bytes (sizeof)
struct _DEVICE_OBJECT
{
    SHORT Type;                                                             //0x0
    USHORT Size;                                                            //0x2
    LONG ReferenceCount;                                                    //0x4
    struct _DRIVER_OBJECT* DriverObject;                                    //0x8
    struct _DEVICE_OBJECT* NextDevice;                                      //0x10
    struct _DEVICE_OBJECT* AttachedDevice;                                  //0x18
    struct _IRP* CurrentIrp;                                                //0x20
    struct _IO_TIMER* Timer;                                                //0x28
    ULONG Flags;                                                            //0x30
    ULONG Characteristics;                                                  //0x34
    struct _VPB* Vpb;                                                       //0x38
    VOID* DeviceExtension;                                                  //0x40
    ULONG DeviceType;                                                       //0x48
    CHAR StackSize;                                                         //0x4c
    union
    {
        struct _LIST_ENTRY ListEntry;                                       //0x50
        struct _WAIT_CONTEXT_BLOCK Wcb;                                     //0x50
    } Queue;                                                                //0x50
    ULONG AlignmentRequirement;                                             //0x98
    struct _KDEVICE_QUEUE DeviceQueue;                                      //0xa0
    struct _KDPC Dpc;                                                       //0xc8
    ULONG ActiveThreadCount;                                                //0x108
    VOID* SecurityDescriptor;                                               //0x110
    struct _KEVENT DeviceLock;                                              //0x118
    USHORT SectorSize;                                                      //0x130
    USHORT Spare1;                                                          //0x132
    struct _DEVOBJ_EXTENSION* DeviceObjectExtension;                        //0x138
    VOID* Reserved;                                                         //0x140
};
/* Used in */
// HAL_PRIVATE_DISPATCH
// _ADAPTER_OBJECT
// _ARBITER_ADD_RESERVED_PARAMETERS
// _ARBITER_CONFLICT_INFO
// _ARBITER_INSTANCE
// _ARBITER_LIST_ENTRY
// _ARBITER_QUERY_CONFLICT_PARAMETERS
// _BUS_HANDLER
// _DEVICE_NODE
// _DEVICE_OBJECT
// _DEVICE_OBJECT_LIST_ENTRY
// _DEVICE_OBJECT_POWER_EXTENSION
// _DEVICE_RELATIONS
// _DEVOBJ_EXTENSION
// _DIAGNOSTIC_CONTEXT
// _DMA_IOMMU_INTERFACE
// _DMA_IOMMU_INTERFACE_V1
// _DMA_IOMMU_INTERFACE_V2
// _DMA_IOMMU_INTERFACE_V3
// _DMA_OPERATIONS
// _DRIVER_EXTENSION
// _DRIVER_OBJECT
// _ETHREAD
// _FAST_IO_DISPATCH
// _FAULT_INFORMATION_ARM64
// _FILE_OBJECT
// _FS_FILTER_CALLBACK_DATA
// _HALP_DMA_CHANNEL
// _HAL_IOMMU_DISPATCH
// _IOMMU_BUS_INTERFACE
// _IOMMU_DMA_DEVICE
// _IO_STACK_LOCATION
// _IO_TIMER
// _IRP
// _OPEN_PACKET
// _PENDING_RELATIONS_LIST_ENTRY
// _PI_BUS_EXTENSION
// _PNP_ASSIGN_RESOURCES_CONTEXT
// _PNP_DEVICE_ACTION_ENTRY
// _PNP_RESOURCE_REQUEST
// _POP_COOLING_EXTENSION
// _POP_DEVICE_SYS_STATE
// _POP_FX_DEVICE
// _POP_FX_DRIVER_CALLBACKS
// _POP_IRP_DATA
// _POP_IRP_WORKER_ENTRY
// _POP_POLICY_DEVICE
// _POP_THERMAL_ZONE
// _PO_DEVICE_NOTIFY
// _PO_DEVICE_NOTIFY_ORDER
// _PRIVATE_VOLUME_CACHEMAP
// _TRIAGE_DEVICE_NODE
// _TRIAGE_POP_IRP_DATA
// _VF_DRIVER_IO_CALLBACKS
// _VOLUME_CACHE_MAP
// _VPB
// _WAIT_CONTEXT_BLOCK

