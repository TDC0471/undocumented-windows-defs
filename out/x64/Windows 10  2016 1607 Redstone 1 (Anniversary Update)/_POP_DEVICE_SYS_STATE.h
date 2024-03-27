#pragma once
/* ------------------ */

#include <_SYSTEM_POWER_STATE.h>
#include <_KTHREAD.h>
#include <_KEVENT.h>
#include <_KSEMAPHORE.h>
#include <_PO_DEVICE_NOTIFY_ORDER.h>
#include <_LIST_ENTRY.h>
#include <_DEVICE_OBJECT.h>

//0x1d0 bytes (sizeof)
struct _POP_DEVICE_SYS_STATE
{
    UCHAR IrpMinor;                                                         //0x0
    enum _SYSTEM_POWER_STATE SystemState;                                   //0x4
    ULONGLONG SpinLock;                                                     //0x8
    struct _KTHREAD* Thread;                                                //0x10
    struct _KEVENT* AbortEvent;                                             //0x18
    struct _KSEMAPHORE* ReadySemaphore;                                     //0x20
    struct _KSEMAPHORE* FinishedSemaphore;                                  //0x28
    struct _PO_DEVICE_NOTIFY_ORDER Order;                                   //0x30
    struct _LIST_ENTRY Pending;                                             //0x1a8
    LONG Status;                                                            //0x1b8
    struct _DEVICE_OBJECT* FailedDevice;                                    //0x1c0
    UCHAR Waking;                                                           //0x1c8
    UCHAR Cancelled;                                                        //0x1c9
    UCHAR IgnoreErrors;                                                     //0x1ca
    UCHAR IgnoreNotImplemented;                                             //0x1cb
    UCHAR TimeRefreshLockAcquired;                                          //0x1cc
};
/* Used in */
// _POP_CURRENT_BROADCAST
// _POP_POWER_ACTION

