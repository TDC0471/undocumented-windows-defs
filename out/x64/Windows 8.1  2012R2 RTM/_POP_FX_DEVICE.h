#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_IRP.h>
#include <_POP_IRP_DATA.h>
#include <_POP_FX_DEVICE_STATUS.h>
#include <_POP_FX_PLUGIN.h>
#include <PEPHANDLE__.h>
#include <_DEVICE_NODE.h>
#include <_DEVICE_OBJECT.h>
#include <_POP_FX_DRIVER_CALLBACKS.h>
#include <_IO_REMOVE_LOCK.h>
#include <_POP_FX_WORK_ORDER.h>
#include <_KTIMER.h>
#include <_KDPC.h>
#include <_POWER_STATE.h>
#include <_IO_STATUS_BLOCK.h>
#include <_KEVENT.h>
#include <_PEP_CRASHDUMP_INFORMATION.h>
#include <_POP_FX_ACCOUNTING.h>
#include <_POP_FX_COMPONENT.h>

//0x218 bytes (sizeof)
struct _POP_FX_DEVICE
{
    struct _LIST_ENTRY Link;                                                //0x0
    struct _IRP* Irp;                                                       //0x10
    struct _POP_IRP_DATA* IrpData;                                          //0x18
    unionvolatile _POP_FX_DEVICE_STATUS Status;                             //0x20
    volatile LONG PowerReqCall;                                             //0x24
    volatile LONG PowerNotReqCall;                                          //0x28
    struct _POP_FX_PLUGIN* Plugin;                                          //0x30
    struct PEPHANDLE__* PluginHandle;                                       //0x38
    struct _POP_FX_PLUGIN* MiniPlugin;                                      //0x40
    struct PEPHANDLE__* MiniPluginHandle;                                   //0x48
    struct _DEVICE_NODE* DevNode;                                           //0x50
    struct _DEVICE_OBJECT* DeviceObject;                                    //0x58
    struct _DEVICE_OBJECT* TargetDevice;                                    //0x60
    struct _POP_FX_DRIVER_CALLBACKS Callbacks;                              //0x68
    VOID* DriverContext;                                                    //0xa0
    struct _IO_REMOVE_LOCK RemoveLock;                                      //0xa8
    struct _POP_FX_WORK_ORDER WorkOrder;                                    //0xc8
    ULONGLONG IdleLock;                                                     //0x100
    struct _KTIMER IdleTimer;                                               //0x108
    struct _KDPC IdleDpc;                                                   //0x148
    ULONGLONG IdleTimeout;                                                  //0x188
    ULONGLONG IdleStamp;                                                    //0x190
    struct _DEVICE_OBJECT* NextIrpDeviceObject;                             //0x198
    union _POWER_STATE NextIrpPowerState;                                   //0x1a0
    VOID (*NextIrpCallerCompletion)(struct _DEVICE_OBJECT* arg1, UCHAR arg2, union _POWER_STATE arg3, VOID* arg4, struct _IO_STATUS_BLOCK* arg5); //0x1a8
    VOID* NextIrpCallerContext;                                             //0x1b0
    struct _KEVENT IrpCompleteEvent;                                        //0x1b8
    UCHAR (*PowerOnDumpDeviceCallback)(struct _PEP_CRASHDUMP_INFORMATION* arg1); //0x1d0
    struct _POP_FX_ACCOUNTING Accounting;                                   //0x1d8
    ULONG ComponentCount;                                                   //0x208
    struct _POP_FX_COMPONENT* Components[1];                                //0x210
};
/* Used in */
// _DEVICE_NODE
// _POP_FX_COMPONENT
// _POP_IRP_DATA

