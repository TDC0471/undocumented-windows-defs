#pragma once
/* ------------------ */

#include <_SYSTEM_POWER_STATE.h>
#include <_KTHREAD.h>
#include <_KEVENT.h>
#include <_KSEMAPHORE.h>
#include <_PO_DEVICE_NOTIFY_ORDER.h>
#include <_LIST_ENTRY.h>
#include <_DEVICE_OBJECT.h>

//0x108 bytes (sizeof)
struct _POP_DEVICE_SYS_STATE
{
    UCHAR IrpMinor;                                                         //0x0
    enum _SYSTEM_POWER_STATE SystemState;                                   //0x4
    ULONG SpinLock;                                                         //0x8
    struct _KTHREAD* Thread;                                                //0xc
    struct _KEVENT* AbortEvent;                                             //0x10
    struct _KSEMAPHORE* ReadySemaphore;                                     //0x14
    struct _KSEMAPHORE* FinishedSemaphore;                                  //0x18
    struct _PO_DEVICE_NOTIFY_ORDER Order;                                   //0x1c
    struct _LIST_ENTRY Pending;                                             //0xf0
    LONG Status;                                                            //0xf8
    struct _DEVICE_OBJECT* FailedDevice;                                    //0xfc
    UCHAR Waking;                                                           //0x100
    UCHAR Cancelled;                                                        //0x101
    UCHAR IgnoreErrors;                                                     //0x102
    UCHAR IgnoreNotImplemented;                                             //0x103
    UCHAR TimeRefreshLockAcquired;                                          //0x104
};
/* Used in */
// _POP_CURRENT_BROADCAST
// _POP_POWER_ACTION

