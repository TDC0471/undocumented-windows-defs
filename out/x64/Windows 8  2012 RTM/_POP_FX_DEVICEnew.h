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

//0x1d0 bytes (sizeof)
struct _POP_FX_DEVICE
{
    struct _LIST_ENTRY Link;                                                //0x0
    struct _POP_FX_PLUGIN* Plugin;                                          //0x10
    struct PEPHANDLE__* PluginHandle;                                       //0x18
    struct _POP_FX_PLUGIN* MiniPlugin;                                      //0x20
    struct PEPHANDLE__* MiniPluginHandle;                                   //0x28
    struct _DEVICE_NODE* DevNode;                                           //0x30
    struct _DEVICE_OBJECT* DeviceObject;                                    //0x38
    struct _DEVICE_OBJECT* TargetDevice;                                    //0x40
    struct _POP_FX_DRIVER_CALLBACKS Callbacks;                              //0x48
    VOID* DriverContext;                                                    //0x80
    struct _IO_REMOVE_LOCK RemoveLock;                                      //0x88
    struct _POP_FX_WORK_ORDER WorkOrder;                                    //0xa8
    unionvolatile _POP_FX_DEVICE_STATUS Status;                             //0xd0
    volatile LONG PowerReqCall;                                             //0xd4
    volatile LONG PowerNotReqCall;                                          //0xd8
    ULONGLONG IdleLock;                                                     //0xe0
    struct _KTIMER IdleTimer;                                               //0xe8
    struct _KDPC IdleDpc;                                                   //0x128
    ULONGLONG IdleTimeout;                                                  //0x168
    ULONGLONG IdleStamp;                                                    //0x170
    struct _IRP* Irp;                                                       //0x178
    struct _POP_IRP_DATA* IrpData;                                          //0x180
    struct _DEVICE_OBJECT* NextIrpDeviceObject;                             //0x188
    union _POWER_STATE NextIrpPowerState;                                   //0x190
    VOID (*NextIrpCallerCompletion)(struct _DEVICE_OBJECT* arg1, UCHAR arg2, union _POWER_STATE arg3, VOID* arg4, struct _IO_STATUS_BLOCK* arg5); //0x198
    VOID* NextIrpCallerContext;                                             //0x1a0
    struct _KEVENT IrpCompleteEvent;                                        //0x1a8
    ULONG ComponentCount;                                                   //0x1c0
    struct _POP_FX_COMPONENT* Components[1];                                //0x1c8
};
/* Used in */
// _DEVICE_NODE
// _POP_FX_COMPONENT
// _POP_IRP_DATA

