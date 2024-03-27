#pragma once
/* ------------------ */

#include <_KMUTANT.h>
#include <KTM_STATE.h>
#include <_KTMOBJECT_NAMESPACE_LINK.h>
#include <_GUID.h>
#include <_UNICODE_STRING.h>
#include <_FILE_OBJECT.h>
#include <_KTMOBJECT_NAMESPACE.h>
#include <_LIST_ENTRY.h>
#include <_LARGE_INTEGER.h>
#include <_FAST_MUTEX.h>
#include <_CLS_LSN.h>
#include <_KRESOURCEMANAGER.h>
#include <_KEVENT.h>
#include <_WORK_QUEUE_ITEM.h>
#include <_ERESOURCE.h>

//0x210 bytes (sizeof)
struct _KTM
{
    ULONG cookie;                                                           //0x0
    struct _KMUTANT Mutex;                                                  //0x4
    enum KTM_STATE State;                                                   //0x24
    struct _KTMOBJECT_NAMESPACE_LINK NamespaceLink;                         //0x28
    struct _GUID TmIdentity;                                                //0x3c
    ULONG Flags;                                                            //0x4c
    ULONG VolatileFlags;                                                    //0x50
    struct _UNICODE_STRING LogFileName;                                     //0x54
    struct _FILE_OBJECT* LogFileObject;                                     //0x5c
    VOID* MarshallingContext;                                               //0x60
    VOID* LogManagementContext;                                             //0x64
    struct _KTMOBJECT_NAMESPACE Transactions;                               //0x68
    struct _KTMOBJECT_NAMESPACE ResourceManagers;                           //0xc8
    struct _KMUTANT LsnOrderedMutex;                                        //0x128
    struct _LIST_ENTRY LsnOrderedList;                                      //0x148
    union _LARGE_INTEGER CommitVirtualClock;                                //0x150
    struct _FAST_MUTEX CommitVirtualClockMutex;                             //0x158
    union _CLS_LSN BaseLsn;                                                 //0x178
    union _CLS_LSN CurrentReadLsn;                                          //0x180
    VOID* TmRmHandle;                                                       //0x188
    struct _KRESOURCEMANAGER* TmRm;                                         //0x18c
    struct _KEVENT LogFullNotifyEvent;                                      //0x190
    struct _WORK_QUEUE_ITEM CheckpointWorkItem;                             //0x1a0
    union _CLS_LSN CheckpointTargetLsn;                                     //0x1b0
    struct _WORK_QUEUE_ITEM LogFullCompletedWorkItem;                       //0x1b8
    struct _ERESOURCE LogWriteResource;                                     //0x1c8
    ULONG LogFlags;                                                         //0x200
    LONG LogFullStatus;                                                     //0x204
    LONG RecoveryStatus;                                                    //0x208
};
/* Used in */
// _KRESOURCEMANAGER
// _KTRANSACTION

