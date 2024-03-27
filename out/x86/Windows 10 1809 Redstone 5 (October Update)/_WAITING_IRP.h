#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_IRP.h>
#include <_KEVENT.h>
#include <_FILE_OBJECT.h>

//0x24 bytes (sizeof)
struct _WAITING_IRP
{
    struct _LIST_ENTRY Links;                                               //0x0
    struct _IRP* Irp;                                                       //0x8
    VOID (*CompletionRoutine)(VOID* arg1, struct _IRP* arg2);               //0xc
    VOID* Context;                                                          //0x10
    struct _KEVENT* Event;                                                  //0x14
    ULONG Information;                                                      //0x18
    UCHAR BreakAllRH;                                                       //0x1c
    UCHAR OplockBreakNotify;                                                //0x1d
    struct _FILE_OBJECT* FileObject;                                        //0x20
};
