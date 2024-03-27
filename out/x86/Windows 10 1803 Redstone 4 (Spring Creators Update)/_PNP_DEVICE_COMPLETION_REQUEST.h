#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_DEVICE_NODE.h>
#include <_PNP_DEVNODE_STATE.h>
#include <_FAST_MUTEX.h>
#include <_PNP_WATCHDOG.h>

//0x48 bytes (sizeof)
struct _PNP_DEVICE_COMPLETION_REQUEST
{
    struct _LIST_ENTRY ListEntry;                                           //0x0
    struct _DEVICE_NODE* DeviceNode;                                        //0x8
    VOID* Context;                                                          //0xc
    enum _PNP_DEVNODE_STATE CompletionState;                                //0x10
    ULONG IrpPended;                                                        //0x14
    LONG Status;                                                            //0x18
    VOID* Information;                                                      //0x1c
    LONG ReferenceCount;                                                    //0x20
    struct _FAST_MUTEX PnpDeviceCompletionQueueWatchdogLock;                //0x24
    struct _PNP_WATCHDOG* Watchdog;                                         //0x44
};
