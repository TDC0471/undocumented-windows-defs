#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_IRP.h>
#include <_KEVENT.h>

//0x38 bytes (sizeof)
struct _WAITING_IRP
{
    struct _LIST_ENTRY Links;                                               //0x0
    struct _IRP* Irp;                                                       //0x10
    VOID (*CompletionRoutine)(VOID* arg1, struct _IRP* arg2);               //0x18
    VOID* Context;                                                          //0x20
    struct _KEVENT* Event;                                                  //0x28
    ULONG Information;                                                      //0x30
    UCHAR BreakAllRH;                                                       //0x34
};
