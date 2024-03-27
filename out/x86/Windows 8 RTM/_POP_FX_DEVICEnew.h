#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_POP_FX_PLUGIN.h>
#include <PEPHANDLE__.h>
#include <_DEVICE_NODE.h>
#include <_DEVICE_OBJECT.h>
#include <_POP_FX_DRIVER_CALLBACKS.h>
#include <_IO_REMOVE_LOCK.h>
#include <_POP_FX_WORK_ORDER.h>
#include <_POP_FX_DEVICE_STATUS.h>
#include <_KTIMER.h>
#include <_KDPC.h>
#include <_IRP.h>
#include <_POP_IRP_DATA.h>
#include <_POWER_STATE.h>
#include <_IO_STATUS_BLOCK.h>
#include <_KEVENT.h>
#include <_POP_FX_COMPONENT.h>

//0x108 bytes (sizeof)
struct _POP_FX_DEVICE
{
    struct _LIST_ENTRY Link;                                                //0x0
    struct _POP_FX_PLUGIN* Plugin;                                          //0x8
    struct PEPHANDLE__* PluginHandle;                                       //0xc
    struct _POP_FX_PLUGIN* MiniPlugin;                                      //0x10
    struct PEPHANDLE__* MiniPluginHandle;                                   //0x14
    struct _DEVICE_NODE* DevNode;                                           //0x18
    struct _DEVICE_OBJECT* DeviceObject;                                    //0x1c
    struct _DEVICE_OBJECT* TargetDevice;                                    //0x20
    struct _POP_FX_DRIVER_CALLBACKS Callbacks;                              //0x24
    VOID* DriverContext;                                                    //0x40
    struct _IO_REMOVE_LOCK RemoveLock;                                      //0x44
    struct _POP_FX_WORK_ORDER WorkOrder;                                    //0x5c
    unionvolatile _POP_FX_DEVICE_STATUS Status;                             //0x70
    volatile LONG PowerReqCall;                                             //0x74
    volatile LONG PowerNotReqCall;                                          //0x78
    ULONG IdleLock;                                                         //0x7c
    struct _KTIMER IdleTimer;                                               //0x80
    struct _KDPC IdleDpc;                                                   //0xa8
    ULONGLONG IdleTimeout;                                                  //0xc8
    ULONGLONG IdleStamp;                                                    //0xd0
    struct _IRP* Irp;                                                       //0xd8
    struct _POP_IRP_DATA* IrpData;                                          //0xdc
    struct _DEVICE_OBJECT* NextIrpDeviceObject;                             //0xe0
    union _POWER_STATE NextIrpPowerState;                                   //0xe4
    VOID (*NextIrpCallerCompletion)(struct _DEVICE_OBJECT* arg1, UCHAR arg2, union _POWER_STATE arg3, VOID* arg4, struct _IO_STATUS_BLOCK* arg5); //0xe8
    VOID* NextIrpCallerContext;                                             //0xec
    struct _KEVENT IrpCompleteEvent;                                        //0xf0
    ULONG ComponentCount;                                                   //0x100
    struct _POP_FX_COMPONENT* Components[1];                                //0x104
};
/* Used in */
// _DEVICE_NODE
// _POP_FX_COMPONENT
// _POP_IRP_DATA

