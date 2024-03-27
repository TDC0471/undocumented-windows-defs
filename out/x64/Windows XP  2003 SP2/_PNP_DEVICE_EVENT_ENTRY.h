#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_KEVENT.h>
#include <_PNP_VETO_TYPE.h>
#include <_UNICODE_STRING.h>
#include <_PLUGPLAY_EVENT_BLOCK.h>

//0x88 bytes (sizeof)
struct _PNP_DEVICE_EVENT_ENTRY
{
    struct _LIST_ENTRY ListEntry;                                           //0x0
    ULONG Argument;                                                         //0x10
    struct _KEVENT* CallerEvent;                                            //0x18
    VOID (*Callback)(VOID* arg1);                                           //0x20
    VOID* Context;                                                          //0x28
    enum _PNP_VETO_TYPE* VetoType;                                          //0x30
    struct _UNICODE_STRING* VetoName;                                       //0x38
    struct _PLUGPLAY_EVENT_BLOCK Data;                                      //0x40
};
