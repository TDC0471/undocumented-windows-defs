#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_DEVICE_NODE.h>
#include <_PNP_DEVNODE_STATE.h>
#include <_WORK_QUEUE_ITEM.h>
#include <_DRIVER_OBJECT.h>

//0x68 bytes (sizeof)
struct _PNP_DEVICE_COMPLETION_REQUEST
{
    struct _LIST_ENTRY ListEntry;                                           //0x0
    struct _DEVICE_NODE* DeviceNode;                                        //0x10
    VOID* Context;                                                          //0x18
    enum _PNP_DEVNODE_STATE CompletionState;                                //0x20
    ULONG IrpPended;                                                        //0x24
    LONG Status;                                                            //0x28
    VOID* Information;                                                      //0x30
    struct _WORK_QUEUE_ITEM WorkItem;                                       //0x38
    struct _DRIVER_OBJECT* FailingDriver;                                   //0x58
    LONG ReferenceCount;                                                    //0x60
};
