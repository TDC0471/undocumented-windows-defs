#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_KQUEUE.h>
#include <PEPHANDLE__.h>
#include <_POP_FX_WORK_POOL.h>

//0xf0 bytes (sizeof)
struct _POP_FX_PLUGIN
{
    struct _LIST_ENTRY Link;                                                //0x0
    ULONG Version;                                                          //0x8
    ULONGLONG Flags;                                                        //0x10
    struct _KQUEUE WorkQueue;                                               //0x18
    UCHAR (*AcceptDeviceNotification)(ULONG arg1, VOID* arg2);              //0x40
    UCHAR (*AcceptProcessorNotification)(struct PEPHANDLE__* arg1, ULONG arg2, VOID* arg3); //0x44
    UCHAR (*AcceptAcpiNotification)(ULONG arg1, VOID* arg2);                //0x48
    struct _POP_FX_WORK_POOL PluginWorkPool;                                //0x4c
};
/* Used in */
// _DEVICE_NODE
// _POP_FX_DEVICE
// _POP_FX_WORK_POOL

