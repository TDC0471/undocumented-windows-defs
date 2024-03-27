#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_IRP.h>
#include <_DEVICE_OBJECT.h>
#include <_KTIMER.h>
#include <_KDPC.h>
#include <_POWER_STATE_TYPE.h>
#include <_POWER_STATE.h>
#include <_POP_FX_DEVICE.h>
#include <_IO_STATUS_BLOCK.h>
#include <_WORK_QUEUE_ITEM.h>
#include <_PO_DEVICE_NOTIFY.h>
#include <_POP_PEP_NOTIFY_DEVICE_DSTATE_REASON.h>

//0x120 bytes (sizeof)
struct _POP_IRP_DATA
{
    struct _LIST_ENTRY Link;                                                //0x0
    struct _IRP* Irp;                                                       //0x10
    struct _DEVICE_OBJECT* Pdo;                                             //0x18
    struct _DEVICE_OBJECT* TargetDevice;                                    //0x20
    struct _DEVICE_OBJECT* CurrentDevice;                                   //0x28
    ULONGLONG WatchdogStart;                                                //0x30
    struct _KTIMER WatchdogTimer;                                           //0x38
    struct _KDPC WatchdogDpc;                                               //0x78
    UCHAR MinorFunction;                                                    //0xb8
    enum _POWER_STATE_TYPE PowerStateType;                                  //0xbc
    union _POWER_STATE PowerState;                                          //0xc0
    UCHAR WatchdogEnabled;                                                  //0xc4
    struct _POP_FX_DEVICE* FxDevice;                                        //0xc8
    UCHAR SystemTransition;                                                 //0xd0
    UCHAR NotifyPEP;                                                        //0xd1
    LONG IrpSequenceID;                                                     //0xd4
    union
    {
        struct
        {
            VOID (*CallerCompletion)(struct _DEVICE_OBJECT* arg1, UCHAR arg2, union _POWER_STATE arg3, VOID* arg4, struct _IO_STATUS_BLOCK* arg5); //0xd8
            VOID* CallerContext;                                            //0xe0
            struct _DEVICE_OBJECT* CallerDevice;                            //0xe8
            UCHAR SystemWake;                                               //0xf0
            struct _WORK_QUEUE_ITEM PassiveCompletionWorkItem;              //0xf8
        } Device;                                                           //0xd8
        struct
        {
            struct _PO_DEVICE_NOTIFY* NotifyDevice;                         //0xd8
            UCHAR FxDeviceActivated;                                        //0xe0
        } System;                                                           //0xd8
    };
    enum _POP_PEP_NOTIFY_DEVICE_DSTATE_REASON DStateReason;                 //0x118
};
/* Used in */
// _POP_FX_DEVICE

