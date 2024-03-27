#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_KEVENT.h>
#include <_PNP_VETO_TYPE.h>
#include <_UNICODE_STRING.h>
#include <_PNP_DEVICE_EVENT_ENTRY.h>
#include <_GUID.h>
#include <_PNP_WATCHDOG.h>
#include <_PLUGPLAY_EVENT_BLOCK.h>

//0x8c bytes (sizeof)
struct _PNP_DEVICE_EVENT_ENTRY
{
    struct _LIST_ENTRY ListEntry;                                           //0x0
    ULONG Argument;                                                         //0x8
    LONG ArgumentStatus;                                                    //0xc
    struct _KEVENT* CallerEvent;                                            //0x10
    VOID (*Callback)(VOID* arg1);                                           //0x14
    VOID* Context;                                                          //0x18
    enum _PNP_VETO_TYPE* VetoType;                                          //0x1c
    struct _UNICODE_STRING* VetoName;                                       //0x20
    ULONG RefCount;                                                         //0x24
    ULONG Lock;                                                             //0x28
    UCHAR Cancel;                                                           //0x2c
    struct _PNP_DEVICE_EVENT_ENTRY* Parent;                                 //0x30
    struct _GUID ActivityId;                                                //0x34
    struct _PNP_WATCHDOG* Watchdog;                                         //0x44
    struct _PLUGPLAY_EVENT_BLOCK Data;                                      //0x48
};
/* Used in */
// _PENDING_RELATIONS_LIST_ENTRY
// _PNP_DEVICE_EVENT_ENTRY

