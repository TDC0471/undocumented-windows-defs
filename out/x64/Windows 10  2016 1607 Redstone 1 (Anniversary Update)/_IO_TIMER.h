#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_DEVICE_OBJECT.h>

//0x30 bytes (sizeof)
struct _IO_TIMER
{
    SHORT Type;                                                             //0x0
    SHORT TimerFlag;                                                        //0x2
    struct _LIST_ENTRY TimerList;                                           //0x8
    VOID (*TimerRoutine)(struct _DEVICE_OBJECT* arg1, VOID* arg2);          //0x18
    VOID* Context;                                                          //0x20
    struct _DEVICE_OBJECT* DeviceObject;                                    //0x28
};
/* Used in */
// _DEVICE_OBJECT

