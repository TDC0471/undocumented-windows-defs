#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <POWER_POLICY_DEVICE_TYPE.h>
#include <_UNICODE_STRING.h>
#include <_DEVICE_OBJECT.h>
#include <_IRP.h>

//0x20 bytes (sizeof)
struct _POP_POLICY_DEVICE
{
    struct _LIST_ENTRY Link;                                                //0x0
    enum POWER_POLICY_DEVICE_TYPE DeviceType;                               //0x8
    VOID* Notification;                                                     //0xc
    struct _UNICODE_STRING Name;                                            //0x10
    struct _DEVICE_OBJECT* Device;                                          //0x18
    struct _IRP* Irp;                                                       //0x1c
};
/* Used in */
// _POP_THERMAL_ZONE

