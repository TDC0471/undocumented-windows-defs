#pragma once
/* ------------------ */

#include <_SYSTEM_POWER_STATE.h>
#include <_KEVENT.h>
#include <_KTHREAD.h>
#include <_PO_DEVICE_NOTIFY_ORDER.h>
#include <_DEVICE_OBJECT.h>
#include <_LIST_ENTRY.h>
#include <_POP_DEVICE_POWER_IRP.h>

//0xba8 bytes (sizeof)
struct _POP_DEVICE_SYS_STATE
{
    UCHAR IrpMinor;                                                         //0x0
    enum _SYSTEM_POWER_STATE SystemState;                                   //0x4
    struct _KEVENT Event;                                                   //0x8
    ULONGLONG SpinLock;                                                     //0x20
    struct _KTHREAD* Thread;                                                //0x28
    UCHAR GetNewDeviceList;                                                 //0x30
    struct _PO_DEVICE_NOTIFY_ORDER Order;                                   //0x38
    LONG Status;                                                            //0x448
    struct _DEVICE_OBJECT* FailedDevice;                                    //0x450
    UCHAR Waking;                                                           //0x458
    UCHAR Cancelled;                                                        //0x459
    UCHAR IgnoreErrors;                                                     //0x45a
    UCHAR IgnoreNotImplemented;                                             //0x45b
    UCHAR WaitAny;                                                          //0x45c
    UCHAR WaitAll;                                                          //0x45d
    struct _LIST_ENTRY PresentIrpQueue;                                     //0x460
    struct _POP_DEVICE_POWER_IRP Head;                                      //0x470
    struct _POP_DEVICE_POWER_IRP PowerIrpState[20];                         //0x4c8
};
/* Used in */
// _POP_POWER_ACTION

