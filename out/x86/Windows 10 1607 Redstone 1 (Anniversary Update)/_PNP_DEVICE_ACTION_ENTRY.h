#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_DEVICE_OBJECT.h>
#include <_PNP_DEVICE_ACTION_REQUEST.h>
#include <_KEVENT.h>
#include <_GUID.h>

//0x30 bytes (sizeof)
struct _PNP_DEVICE_ACTION_ENTRY
{
    struct _LIST_ENTRY ListEntry;                                           //0x0
    struct _DEVICE_OBJECT* DeviceObject;                                    //0x8
    enum _PNP_DEVICE_ACTION_REQUEST RequestType;                            //0xc
    UCHAR ReorderingBarrier;                                                //0x10
    ULONG RequestArgument;                                                  //0x14
    struct _KEVENT* CompletionEvent;                                        //0x18
    LONG* CompletionStatus;                                                 //0x1c
    struct _GUID ActivityId;                                                //0x20
};
