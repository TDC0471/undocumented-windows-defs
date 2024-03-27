#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_IRP.h>
#include <_FILE_OBJECT.h>
#include <_EPROCESS.h>
#include <_ETHREAD.h>

//0x48 bytes (sizeof)
struct _RH_OP_CONTEXT
{
    struct _LIST_ENTRY Links;                                               //0x0
    struct _IRP* OplockRequestIrp;                                          //0x10
    struct _FILE_OBJECT* OplockRequestFileObject;                           //0x18
    struct _EPROCESS* OplockRequestProcess;                                 //0x20
    struct _ETHREAD* OplockOwnerThread;                                     //0x28
    ULONG Flags;                                                            //0x30
    struct _LIST_ENTRY AtomicLinks;                                         //0x38
};
