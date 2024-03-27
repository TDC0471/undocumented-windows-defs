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

//0x140 bytes (sizeof)
struct _POP_FX_DEVICE
{
    struct _LIST_ENTRY Link;                                                //0x0
    struct _IRP* Irp;                                                       //0x8
    struct _POP_IRP_DATA* IrpData;                                          //0xc
    unionvolatile _POP_FX_DEVICE_STATUS Status;                             //0x10
    volatile LONG PowerReqCall;                                             //0x14
    volatile LONG PowerNotReqCall;                                          //0x18
    struct _POP_FX_PLUGIN* Plugin;                                          //0x1c
    struct PEPHANDLE__* PluginHandle;                                       //0x20
    struct _POP_FX_PLUGIN* MiniPlugin;                                      //0x24
    struct PEPHANDLE__* MiniPluginHandle;                                   //0x28
    struct _DEVICE_NODE* DevNode;                                           //0x2c
    struct _DEVICE_OBJECT* DeviceObject;                                    //0x30
    struct _DEVICE_OBJECT* TargetDevice;                                    //0x34
    struct _POP_FX_DRIVER_CALLBACKS Callbacks;                              //0x38
    VOID* DriverContext;                                                    //0x54
    struct _IO_REMOVE_LOCK RemoveLock;                                      //0x58
    struct _POP_FX_WORK_ORDER WorkOrder;                                    //0x70
    ULONG IdleLock;                                                         //0x8c
    struct _KTIMER IdleTimer;                                               //0x90
    struct _KDPC IdleDpc;                                                   //0xb8
    ULONGLONG IdleTimeout;                                                  //0xd8
    ULONGLONG IdleStamp;                                                    //0xe0
    struct _DEVICE_OBJECT* NextIrpDeviceObject;                             //0xe8
    union _POWER_STATE NextIrpPowerState;                                   //0xec
    VOID (*NextIrpCallerCompletion)(struct _DEVICE_OBJECT* arg1, UCHAR arg2, union _POWER_STATE arg3, VOID* arg4, struct _IO_STATUS_BLOCK* arg5); //0xf0
    VOID* NextIrpCallerContext;                                             //0xf4
    struct _KEVENT IrpCompleteEvent;                                        //0xf8
    UCHAR (*PowerOnDumpDeviceCallback)(struct _PEP_CRASHDUMP_INFORMATION* arg1); //0x108
    struct _POP_FX_ACCOUNTING Accounting;                                   //0x110
    ULONG ComponentCount;                                                   //0x138
    struct _POP_FX_COMPONENT* Components[1];                                //0x13c
};
/* Used in */
// _DEVICE_NODE
// _POP_FX_COMPONENT
// _POP_IRP_DATA

