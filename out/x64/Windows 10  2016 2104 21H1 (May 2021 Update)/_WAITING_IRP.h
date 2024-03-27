#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_IRP.h>
#include <_KEVENT.h>
#include <_FILE_OBJECT.h>

//0x40 bytes (sizeof)
struct _WAITING_IRP
{
    struct _LIST_ENTRY Links;                                               //0x0
    struct _IRP* Irp;                                                       //0x10
    VOID (*CompletionRoutine)(VOID* arg1, struct _IRP* arg2);               //0x18
    VOID* Context;                                                          //0x20
    struct _KEVENT* Event;                                                  //0x28
    ULONG Information;                                                      //0x30
    UCHAR BreakAllRH;                                                       //0x34
    UCHAR OplockBreakNotify;                                                //0x35
    struct _FILE_OBJECT* FileObject;                                        //0x38
};
