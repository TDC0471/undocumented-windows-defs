#pragma once
/* ------------------ */

#include <_SYSTEM_POWER_STATE.h>
#include <_KTHREAD.h>
#include <_KEVENT.h>
#include <_KSEMAPHORE.h>
#include <_PO_DEVICE_NOTIFY_ORDER.h>
#include <_LIST_ENTRY.h>
#include <_DEVICE_OBJECT.h>

//0x104 bytes (sizeof)
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
    struct _LIST_ENTRY Pending;                                             //0xec
    LONG Status;                                                            //0xf4
    struct _DEVICE_OBJECT* FailedDevice;                                    //0xf8
    UCHAR Waking;                                                           //0xfc
    UCHAR Cancelled;                                                        //0xfd
    UCHAR IgnoreErrors;                                                     //0xfe
    UCHAR IgnoreNotImplemented;                                             //0xff
    UCHAR TimeRefreshLockAcquired;                                          //0x100
};
/* Used in */
// _POP_CURRENT_BROADCAST
// _POP_POWER_ACTION

