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
#include <_PO_DEVICE_NOTIFY.h>
#include <_POP_PEP_NOTIFY_DEVICE_DSTATE_REASON.h>

//0x98 bytes (sizeof)
struct _POP_IRP_DATA
{
    struct _LIST_ENTRY Link;                                                //0x0
    struct _IRP* Irp;                                                       //0x8
    struct _DEVICE_OBJECT* Pdo;                                             //0xc
    struct _DEVICE_OBJECT* TargetDevice;                                    //0x10
    struct _DEVICE_OBJECT* CurrentDevice;                                   //0x14
    ULONGLONG WatchdogStart;                                                //0x18
    struct _KTIMER WatchdogTimer;                                           //0x20
    struct _KDPC WatchdogDpc;                                               //0x48
    UCHAR MinorFunction;                                                    //0x68
    enum _POWER_STATE_TYPE PowerStateType;                                  //0x6c
    union _POWER_STATE PowerState;                                          //0x70
    UCHAR WatchdogEnabled;                                                  //0x74
    struct _POP_FX_DEVICE* FxDevice;                                        //0x78
    UCHAR SystemTransition;                                                 //0x7c
    UCHAR NotifyPEP;                                                        //0x7d
    LONG IrpSequenceID;                                                     //0x80
    union
    {
        struct
        {
            VOID (*CallerCompletion)(struct _DEVICE_OBJECT* arg1, UCHAR arg2, union _POWER_STATE arg3, VOID* arg4, struct _IO_STATUS_BLOCK* arg5); //0x84
            VOID* CallerContext;                                            //0x88
            struct _DEVICE_OBJECT* CallerDevice;                            //0x8c
            UCHAR SystemWake;                                               //0x90
        } Device;                                                           //0x84
        struct
        {
            struct _PO_DEVICE_NOTIFY* NotifyDevice;                         //0x84
            UCHAR FxDeviceActivated;                                        //0x88
        } System;                                                           //0x84
    };
    enum _POP_PEP_NOTIFY_DEVICE_DSTATE_REASON DStateReason;                 //0x94
};
/* Used in */
// _POP_FX_DEVICE

