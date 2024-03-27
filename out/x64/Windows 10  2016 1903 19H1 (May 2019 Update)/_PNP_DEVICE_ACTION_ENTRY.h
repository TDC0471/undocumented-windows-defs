#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_DEVICE_OBJECT.h>
#include <_PNP_DEVICE_ACTION_REQUEST.h>
#include <_KEVENT.h>
#include <_GUID.h>
#include <_EX_PUSH_LOCK.h>

//0x60 bytes (sizeof)
struct _PNP_DEVICE_ACTION_ENTRY
{
    struct _LIST_ENTRY ListEntry;                                           //0x0
    struct _DEVICE_OBJECT* DeviceObject;                                    //0x10
    enum _PNP_DEVICE_ACTION_REQUEST RequestType;                            //0x18
    UCHAR ReorderingBarrier;                                                //0x1c
    ULONGLONG RequestArgument;                                              //0x20
    struct _KEVENT* CompletionEvent;                                        //0x28
    LONG* CompletionStatus;                                                 //0x30
    struct _GUID ActivityId;                                                //0x38
    LONG RefCount;                                                          //0x48
    UCHAR Dequeued;                                                         //0x4c
    struct _EX_PUSH_LOCK CancelLock;                                        //0x50
    UCHAR CancelRequested;                                                  //0x58
};
