#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_POP_RW_LOCK.h>
#include <_DEVICE_OBJECT.h>
#include <_KEVENT.h>
#include <_THERMAL_COOLING_INTERFACE.h>

//0x90 bytes (sizeof)
struct _POP_COOLING_EXTENSION
{
    struct _LIST_ENTRY Link;                                                //0x0
    struct _LIST_ENTRY RequestListHead;                                     //0x10
    struct _POP_RW_LOCK Lock;                                               //0x20
    struct _DEVICE_OBJECT* DeviceObject;                                    //0x30
    VOID* NotificationEntry;                                                //0x38
    UCHAR Enabled;                                                          //0x40
    UCHAR ActiveEngaged;                                                    //0x41
    UCHAR ThrottleLimit;                                                    //0x42
    UCHAR UpdatingToCurrent;                                                //0x43
    struct _KEVENT* RemovalFlushEvent;                                      //0x48
    struct _KEVENT* PnpFlushEvent;                                          //0x50
    struct _THERMAL_COOLING_INTERFACE Interface;                            //0x58
};
/* Used in */
// _DEVICE_OBJECT_POWER_EXTENSION

