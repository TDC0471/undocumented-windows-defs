#pragma once
/* ------------------ */

#include <_SYSTEM_POWER_STATE.h>
#include <_KTHREAD.h>
#include <_KEVENT.h>
#include <_KSEMAPHORE.h>
#include <_PO_DEVICE_NOTIFY_ORDER.h>
#include <_LIST_ENTRY.h>
#include <_DEVICE_OBJECT.h>

//0x2b8 bytes (sizeof)
struct _POP_DEVICE_SYS_STATE
{
    UCHAR IrpMinor;                                                         //0x0
    enum _SYSTEM_POWER_STATE SystemState;                                   //0x4
    ULONGLONG SpinLock;                                                     //0x8
    struct _KTHREAD* Thread;                                                //0x10
    struct _KEVENT* AbortEvent;                                             //0x18
    struct _KSEMAPHORE* ReadySemaphore;                                     //0x20
    struct _KSEMAPHORE* FinishedSemaphore;                                  //0x28
    UCHAR GetNewDeviceList;                                                 //0x30
    struct _PO_DEVICE_NOTIFY_ORDER Order;                                   //0x38
    LONG NotifyGdiLevelForPowerOn;                                          //0x288
    LONG NotifyGdiLevelForResumeUI;                                         //0x28c
    struct _LIST_ENTRY Pending;                                             //0x290
    LONG Status;                                                            //0x2a0
    struct _DEVICE_OBJECT* FailedDevice;                                    //0x2a8
    UCHAR Waking;                                                           //0x2b0
    UCHAR Cancelled;                                                        //0x2b1
    UCHAR IgnoreErrors;                                                     //0x2b2
    UCHAR IgnoreNotImplemented;                                             //0x2b3
    UCHAR TimeRefreshLockAcquired;                                          //0x2b4
};
/* Used in */
// _POP_POWER_ACTION

