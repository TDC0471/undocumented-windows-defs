#pragma once
/* ------------------ */

#include <_SYSTEM_POWER_STATE.h>
#include <_KEVENT.h>
#include <_KTHREAD.h>
#include <_PO_DEVICE_NOTIFY_ORDER.h>
#include <_DEVICE_OBJECT.h>
#include <_LIST_ENTRY.h>
#include <_POP_DEVICE_POWER_IRP.h>

//0x620 bytes (sizeof)
struct _POP_DEVICE_SYS_STATE
{
    UCHAR IrpMinor;                                                         //0x0
    enum _SYSTEM_POWER_STATE SystemState;                                   //0x4
    struct _KEVENT Event;                                                   //0x8
    ULONG SpinLock;                                                         //0x18
    struct _KTHREAD* Thread;                                                //0x1c
    UCHAR GetNewDeviceList;                                                 //0x20
    struct _PO_DEVICE_NOTIFY_ORDER Order;                                   //0x24
    LONG Status;                                                            //0x26c
    struct _DEVICE_OBJECT* FailedDevice;                                    //0x270
    UCHAR Waking;                                                           //0x274
    UCHAR Cancelled;                                                        //0x275
    UCHAR IgnoreErrors;                                                     //0x276
    UCHAR IgnoreNotImplemented;                                             //0x277
    UCHAR WaitAny;                                                          //0x278
    UCHAR WaitAll;                                                          //0x279
    struct _LIST_ENTRY PresentIrpQueue;                                     //0x27c
    struct _POP_DEVICE_POWER_IRP Head;                                      //0x284
    struct _POP_DEVICE_POWER_IRP PowerIrpState[20];                         //0x2b0
};
/* Used in */
// _POP_POWER_ACTION

