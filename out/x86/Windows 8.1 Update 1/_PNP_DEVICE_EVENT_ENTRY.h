#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_KEVENT.h>
#include <_PNP_VETO_TYPE.h>
#include <_UNICODE_STRING.h>
#include <_PNP_DEVICE_EVENT_ENTRY.h>
#include <_PLUGPLAY_EVENT_BLOCK.h>

//0x74 bytes (sizeof)
struct _PNP_DEVICE_EVENT_ENTRY
{
    struct _LIST_ENTRY ListEntry;                                           //0x0
    ULONG Argument;                                                         //0x8
    struct _KEVENT* CallerEvent;                                            //0xc
    VOID (*Callback)(VOID* arg1);                                           //0x10
    VOID* Context;                                                          //0x14
    enum _PNP_VETO_TYPE* VetoType;                                          //0x18
    struct _UNICODE_STRING* VetoName;                                       //0x1c
    ULONG RefCount;                                                         //0x20
    ULONG Lock;                                                             //0x24
    UCHAR Cancel;                                                           //0x28
    struct _PNP_DEVICE_EVENT_ENTRY* Parent;                                 //0x2c
    struct _PLUGPLAY_EVENT_BLOCK Data;                                      //0x30
};
/* Used in */
// _PENDING_RELATIONS_LIST_ENTRY
// _PNP_DEVICE_EVENT_ENTRY

