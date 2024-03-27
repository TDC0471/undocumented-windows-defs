#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_POP_FX_WORK_ORDER.h>
#include <_KQUEUE.h>
#include <PEPHANDLE__.h>

//0x60 bytes (sizeof)
struct _POP_FX_PLUGIN
{
    struct _LIST_ENTRY Link;                                                //0x0
    ULONG Version;                                                          //0x8
    ULONGLONG Flags;                                                        //0x10
    struct _POP_FX_WORK_ORDER WorkOrder;                                    //0x18
    struct _KQUEUE WorkQueue;                                               //0x2c
    UCHAR (*AcceptDeviceNotification)(ULONG arg1, VOID* arg2);              //0x54
    UCHAR (*AcceptProcessorNotification)(struct PEPHANDLE__* arg1, ULONG arg2, VOID* arg3); //0x58
};
/* Used in */
// _DEVICE_NODE
// _POP_FX_DEVICE

