#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_IRP.h>
#include <_POP_IRP_DATA.h>
#include <_POP_FX_DEVICE_STATUS.h>
#include <_DEVICE_NODE.h>
#include <PEPHANDLE__.h>
#include <_POP_FX_PLUGIN.h>
#include <_DEVICE_OBJECT.h>
#include <_POP_FX_DRIVER_CALLBACKS.h>
#include <_UNICODE_STRING.h>
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
#include <_POP_FX_LOG_ENTRY.h>
#include <_DRIVER_OBJECT.h>

//0x198 bytes (sizeof)
struct _POP_FX_DEVICE
{
    struct _LIST_ENTRY Link;                                                //0x0
    struct _IRP* Irp;                                                       //0x8
    struct _POP_IRP_DATA* IrpData;                                          //0xc
    unionvolatile _POP_FX_DEVICE_STATUS Status;                             //0x10
    volatile LONG PowerReqCall;                                             //0x14
    volatile LONG PowerNotReqCall;                                          //0x18
    struct _DEVICE_NODE* DevNode;                                           //0x1c
    struct PEPHANDLE__* DpmContext;                                         //0x20
    struct _POP_FX_PLUGIN* Plugin;                                          //0x24
    struct PEPHANDLE__* PluginHandle;                                       //0x28
    struct _POP_FX_PLUGIN* AcpiPlugin;                                      //0x2c
    struct PEPHANDLE__* AcpiPluginHandle;                                   //0x30
    struct _DEVICE_OBJECT* DeviceObject;                                    //0x34
    struct _DEVICE_OBJECT* TargetDevice;                                    //0x38
    struct _POP_FX_DRIVER_CALLBACKS Callbacks;                              //0x3c
    VOID* DriverContext;                                                    //0x5c
    struct _LIST_ENTRY AcpiLink;                                            //0x60
    struct _UNICODE_STRING DeviceId;                                        //0x68
    struct _IO_REMOVE_LOCK RemoveLock;                                      //0x70
    struct _IO_REMOVE_LOCK AcpiRemoveLock;                                  //0x88
    struct _POP_FX_WORK_ORDER WorkOrder;                                    //0xa0
    ULONG IdleLock;                                                         //0xbc
    struct _KTIMER IdleTimer;                                               //0xc0
    struct _KDPC IdleDpc;                                                   //0xe8
    ULONGLONG IdleTimeout;                                                  //0x108
    ULONGLONG IdleStamp;                                                    //0x110
    struct _DEVICE_OBJECT* NextIrpDeviceObject[2];                          //0x118
    union _POWER_STATE NextIrpPowerState[2];                                //0x120
    VOID (*NextIrpCallerCompletion[2])(struct _DEVICE_OBJECT* arg1, UCHAR arg2, union _POWER_STATE arg3, VOID* arg4, struct _IO_STATUS_BLOCK* arg5); //0x128
    VOID* NextIrpCallerContext[2];                                          //0x130
    struct _KEVENT IrpCompleteEvent;                                        //0x138
    UCHAR (*PowerOnDumpDeviceCallback)(struct _PEP_CRASHDUMP_INFORMATION* arg1); //0x148
    struct _POP_FX_ACCOUNTING Accounting;                                   //0x150
    volatile ULONG Flags;                                                   //0x178
    ULONG ComponentCount;                                                   //0x17c
    struct _POP_FX_COMPONENT** Components;                                  //0x180
    ULONG LogEntries;                                                       //0x184
    struct _POP_FX_LOG_ENTRY* Log;                                          //0x188
    volatile LONG LogIndex;                                                 //0x18c
    struct _DRIVER_OBJECT* DripsWatchdogDriverObject;                       //0x190
};
/* Used in */
// _DEVICE_NODE
// _POP_FX_COMPONENT
// _POP_IRP_DATA

