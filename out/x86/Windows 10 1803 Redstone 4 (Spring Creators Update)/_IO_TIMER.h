#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_DEVICE_OBJECT.h>

//0x18 bytes (sizeof)
struct _IO_TIMER
{
    SHORT Type;                                                             //0x0
    SHORT TimerFlag;                                                        //0x2
    struct _LIST_ENTRY TimerList;                                           //0x4
    VOID (*TimerRoutine)(struct _DEVICE_OBJECT* arg1, VOID* arg2);          //0xc
    VOID* Context;                                                          //0x10
    struct _DEVICE_OBJECT* DeviceObject;                                    //0x14
};
/* Used in */
// _DEVICE_OBJECT

