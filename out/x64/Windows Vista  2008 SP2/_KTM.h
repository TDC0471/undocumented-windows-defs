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

//0x3a0 bytes (sizeof)
struct _KTM
{
    ULONG cookie;                                                           //0x0
    struct _KMUTANT Mutex;                                                  //0x8
    enum KTM_STATE State;                                                   //0x40
    struct _KTMOBJECT_NAMESPACE_LINK NamespaceLink;                         //0x48
    struct _GUID TmIdentity;                                                //0x70
    ULONG Flags;                                                            //0x80
    ULONG VolatileFlags;                                                    //0x84
    struct _UNICODE_STRING LogFileName;                                     //0x88
    struct _FILE_OBJECT* LogFileObject;                                     //0x98
    VOID* MarshallingContext;                                               //0xa0
    VOID* LogManagementContext;                                             //0xa8
    struct _KTMOBJECT_NAMESPACE Transactions;                               //0xb0
    struct _KTMOBJECT_NAMESPACE ResourceManagers;                           //0x158
    struct _KMUTANT LsnOrderedMutex;                                        //0x200
    struct _LIST_ENTRY LsnOrderedList;                                      //0x238
    union _LARGE_INTEGER CommitVirtualClock;                                //0x248
    struct _FAST_MUTEX CommitVirtualClockMutex;                             //0x250
    union _CLS_LSN BaseLsn;                                                 //0x288
    union _CLS_LSN CurrentReadLsn;                                          //0x290
    union _CLS_LSN LastRecoveredLsn;                                        //0x298
    VOID* TmRmHandle;                                                       //0x2a0
    struct _KRESOURCEMANAGER* TmRm;                                         //0x2a8
    struct _KEVENT LogFullNotifyEvent;                                      //0x2b0
    struct _WORK_QUEUE_ITEM CheckpointWorkItem;                             //0x2c8
    union _CLS_LSN CheckpointTargetLsn;                                     //0x2e8
    struct _WORK_QUEUE_ITEM LogFullCompletedWorkItem;                       //0x2f0
    struct _ERESOURCE LogWriteResource;                                     //0x310
    ULONG LogFlags;                                                         //0x378
    LONG LogFullStatus;                                                     //0x37c
    LONG RecoveryStatus;                                                    //0x380
    union _CLS_LSN LastCheckBaseLsn;                                        //0x388
    struct _LIST_ENTRY RestartOrderedList;                                  //0x390
};
/* Used in */
// _KRESOURCEMANAGER
// _KTRANSACTION

