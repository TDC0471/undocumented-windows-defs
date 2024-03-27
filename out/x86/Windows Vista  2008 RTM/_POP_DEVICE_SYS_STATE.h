#pragma once
/* ------------------ */

#include <_SYSTEM_POWER_STATE.h>
#include <_KTHREAD.h>
#include <_KEVENT.h>
#include <_KSEMAPHORE.h>
#include <_PO_DEVICE_NOTIFY_ORDER.h>
#include <_LIST_ENTRY.h>
#include <_DEVICE_OBJECT.h>

//0x188 bytes (sizeof)
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
    LONG NotifyGdiLevelForPowerOn;                                          //0x168
    LONG NotifyGdiLevelForResumeUI;                                         //0x16c
    struct _LIST_ENTRY Pending;                                             //0x170
    LONG Status;                                                            //0x178
    struct _DEVICE_OBJECT* FailedDevice;                                    //0x17c
    UCHAR Waking;                                                           //0x180
    UCHAR Cancelled;                                                        //0x181
    UCHAR IgnoreErrors;                                                     //0x182
    UCHAR IgnoreNotImplemented;                                             //0x183
    UCHAR TimeRefreshLockAcquired;                                          //0x184
};
/* Used in */
// _POP_POWER_ACTION

