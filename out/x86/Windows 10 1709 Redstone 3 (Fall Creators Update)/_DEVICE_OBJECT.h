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

//0xb8 bytes (sizeof)
struct _DEVICE_OBJECT
{
    SHORT Type;                                                             //0x0
    USHORT Size;                                                            //0x2
    LONG ReferenceCount;                                                    //0x4
    struct _DRIVER_OBJECT* DriverObject;                                    //0x8
    struct _DEVICE_OBJECT* NextDevice;                                      //0xc
    struct _DEVICE_OBJECT* AttachedDevice;                                  //0x10
    struct _IRP* CurrentIrp;                                                //0x14
    struct _IO_TIMER* Timer;                                                //0x18
    ULONG Flags;                                                            //0x1c
    ULONG Characteristics;                                                  //0x20
    struct _VPB* Vpb;                                                       //0x24
    VOID* DeviceExtension;                                                  //0x28
    ULONG DeviceType;                                                       //0x2c
    CHAR StackSize;                                                         //0x30
    union
    {
        struct _LIST_ENTRY ListEntry;                                       //0x34
        struct _WAIT_CONTEXT_BLOCK Wcb;                                     //0x34
    } Queue;                                                                //0x34
    ULONG AlignmentRequirement;                                             //0x5c
    struct _KDEVICE_QUEUE DeviceQueue;                                      //0x60
    struct _KDPC Dpc;                                                       //0x74
    ULONG ActiveThreadCount;                                                //0x94
    VOID* SecurityDescriptor;                                               //0x98
    struct _KEVENT DeviceLock;                                              //0x9c
    USHORT SectorSize;                                                      //0xac
    USHORT Spare1;                                                          //0xae
    struct _DEVOBJ_EXTENSION* DeviceObjectExtension;                        //0xb0
    VOID* Reserved;                                                         //0xb4
};
/* Used in */
// _ARBITER_ADD_RESERVED_PARAMETERS
// _ARBITER_CONFLICT_INFO
// _ARBITER_INSTANCE
// _ARBITER_LIST_ENTRY
// _ARBITER_QUERY_CONFLICT_PARAMETERS
// _DEVICE_NODE
// _DEVICE_OBJECT
// _DEVICE_OBJECT_LIST_ENTRY
// _DEVICE_OBJECT_POWER_EXTENSION
// _DEVICE_RELATIONS
// _DEVOBJ_EXTENSION
// _DIAGNOSTIC_CONTEXT
// _DRIVER_EXTENSION
// _DRIVER_OBJECT
// _ETHREAD
// _FAST_IO_DISPATCH
// _FILE_OBJECT
// _FS_FILTER_CALLBACK_DATA
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
// _TRIAGE_DEVICE_NODE
// _TRIAGE_POP_IRP_DATA
// _VF_DRIVER_IO_CALLBACKS
// _VOLUME_CACHE_MAP
// _VPB
// _WAIT_CONTEXT_BLOCK

