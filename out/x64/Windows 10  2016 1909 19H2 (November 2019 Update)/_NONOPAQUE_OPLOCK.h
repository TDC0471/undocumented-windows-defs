#pragma once
/* ------------------ */

#include <_IRP.h>
#include <_FILE_OBJECT.h>
#include <_EPROCESS.h>
#include <_ETHREAD.h>
#include <_LIST_ENTRY.h>
#include <_GUID.h>
#include <_FAST_MUTEX.h>

//0xa0 bytes (sizeof)
struct _NONOPAQUE_OPLOCK
{
    struct _IRP* IrpExclusiveOplock;                                        //0x0
    struct _FILE_OBJECT* FileObject;                                        //0x8
    struct _EPROCESS* ExclusiveOplockOwner;                                 //0x10
    struct _ETHREAD* ExclusiveOplockOwnerThread;                            //0x18
    UCHAR WaiterPriority;                                                   //0x20
    struct _LIST_ENTRY IrpOplocksR;                                         //0x28
    struct _LIST_ENTRY IrpOplocksRH;                                        //0x38
    struct _LIST_ENTRY RHBreakQueue;                                        //0x48
    struct _LIST_ENTRY WaitingIrps;                                         //0x58
    struct _LIST_ENTRY DelayAckFileObjectQueue;                             //0x68
    struct _LIST_ENTRY AtomicQueue;                                         //0x78
    struct _GUID* DeleterParentKey;                                         //0x88
    ULONG OplockState;                                                      //0x90
    struct _FAST_MUTEX* FastMutex;                                          //0x98
};
