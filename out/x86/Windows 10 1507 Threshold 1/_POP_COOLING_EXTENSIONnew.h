#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_POP_RW_LOCK.h>
#include <_DEVICE_OBJECT.h>
#include <_KEVENT.h>
#include <_THERMAL_COOLING_INTERFACE.h>

//0x48 bytes (sizeof)
struct _POP_COOLING_EXTENSION
{
    struct _LIST_ENTRY Link;                                                //0x0
    struct _LIST_ENTRY RequestListHead;                                     //0x8
    struct _POP_RW_LOCK Lock;                                               //0x10
    struct _DEVICE_OBJECT* DeviceObject;                                    //0x18
    VOID* NotificationEntry;                                                //0x1c
    UCHAR Enabled;                                                          //0x20
    UCHAR ActiveEngaged;                                                    //0x21
    UCHAR ThrottleLimit;                                                    //0x22
    UCHAR UpdatingToCurrent;                                                //0x23
    struct _KEVENT* RemovalFlushEvent;                                      //0x24
    struct _KEVENT* PnpFlushEvent;                                          //0x28
    struct _THERMAL_COOLING_INTERFACE Interface;                            //0x2c
};
/* Used in */
// _DEVICE_OBJECT_POWER_EXTENSION

