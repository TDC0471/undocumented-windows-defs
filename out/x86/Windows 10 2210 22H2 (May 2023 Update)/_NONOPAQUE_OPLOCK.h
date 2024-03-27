#pragma once
/* ------------------ */

#include <_IRP.h>
#include <_FILE_OBJECT.h>
#include <_EPROCESS.h>
#include <_ETHREAD.h>
#include <_LIST_ENTRY.h>
#include <_GUID.h>
#include <_FAST_MUTEX.h>

//0x50 bytes (sizeof)
struct _NONOPAQUE_OPLOCK
{
    struct _IRP* IrpExclusiveOplock;                                        //0x0
    struct _FILE_OBJECT* FileObject;                                        //0x4
    struct _EPROCESS* ExclusiveOplockOwner;                                 //0x8
    struct _ETHREAD* ExclusiveOplockOwnerThread;                            //0xc
    UCHAR WaiterPriority;                                                   //0x10
    struct _LIST_ENTRY IrpOplocksR;                                         //0x14
    struct _LIST_ENTRY IrpOplocksRH;                                        //0x1c
    struct _LIST_ENTRY RHBreakQueue;                                        //0x24
    struct _LIST_ENTRY WaitingIrps;                                         //0x2c
    struct _LIST_ENTRY DelayAckFileObjectQueue;                             //0x34
    struct _LIST_ENTRY AtomicQueue;                                         //0x3c
    struct _GUID* DeleterParentKey;                                         //0x44
    ULONG OplockState;                                                      //0x48
    struct _FAST_MUTEX* FastMutex;                                          //0x4c
};
