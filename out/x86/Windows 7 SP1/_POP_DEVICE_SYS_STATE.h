#pragma once
/* ------------------ */

#include <_SYSTEM_POWER_STATE.h>
#include <_KTHREAD.h>
#include <_KEVENT.h>
#include <_KSEMAPHORE.h>
#include <_PO_DEVICE_NOTIFY_ORDER.h>
#include <_LIST_ENTRY.h>
#include <_DEVICE_OBJECT.h>

//0x1a8 bytes (sizeof)
struct _POP_DEVICE_SYS_STATE
{
    UCHAR IrpMinor;                                                         //0x0
    enum _SYSTEM_POWER_STATE SystemState;                                   //0x4
    ULONG SpinLock;                                                         //0x8
    struct _KTHREAD* Thread;                                                //0xc
    struct _KEVENT* AbortEvent;                                             //0x10
    struct _KSEMAPHORE* ReadySemaphore;                                     //0x14
    struct _KSEMAPHORE* FinishedSemaphore;                                  //0x18
    UCHAR GetNewDeviceList;                                                 //0x1c
    struct _PO_DEVICE_NOTIFY_ORDER Order;                                   //0x20
    struct _LIST_ENTRY Pending;                                             //0x190
    LONG Status;                                                            //0x198
    struct _DEVICE_OBJECT* FailedDevice;                                    //0x19c
    UCHAR Waking;                                                           //0x1a0
    UCHAR Cancelled;                                                        //0x1a1
    UCHAR IgnoreErrors;                                                     //0x1a2
    UCHAR IgnoreNotImplemented;                                             //0x1a3
    UCHAR TimeRefreshLockAcquired;                                          //0x1a4
};
/* Used in */
// _POP_POWER_ACTION

