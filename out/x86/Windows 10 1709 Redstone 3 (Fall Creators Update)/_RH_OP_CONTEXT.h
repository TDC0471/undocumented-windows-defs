#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_IRP.h>
#include <_FILE_OBJECT.h>
#include <_EPROCESS.h>
#include <_ETHREAD.h>

//0x24 bytes (sizeof)
struct _RH_OP_CONTEXT
{
    struct _LIST_ENTRY Links;                                               //0x0
    struct _IRP* OplockRequestIrp;                                          //0x8
    struct _FILE_OBJECT* OplockRequestFileObject;                           //0xc
    struct _EPROCESS* OplockRequestProcess;                                 //0x10
    struct _ETHREAD* OplockOwnerThread;                                     //0x14
    ULONG Flags;                                                            //0x18
    struct _LIST_ENTRY AtomicLinks;                                         //0x1c
};
