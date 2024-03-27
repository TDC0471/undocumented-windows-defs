#pragma once
/* ------------------ */

#include <_KEVENT.h>
#include <_KMUTANT.h>
#include <_KTRANSACTION.h>
#include <_KTMOBJECT_NAMESPACE_LINK.h>
#include <_GUID.h>
#include <_KTRANSACTION_STATE.h>
#include <_LIST_ENTRY.h>
#include <_KENLISTMENT.h>
#include <_CLS_LSN.h>
#include <_LARGE_INTEGER.h>
#include <_UNICODE_STRING.h>
#include <_KTHREAD.h>
#include <_WORK_QUEUE_ITEM.h>
#include <_KDPC.h>
#include <_KTIMER.h>
#include <_KTRANSACTION_OUTCOME.h>
#include <_KTM.h>
#include <_KTRANSACTION_HISTORY.h>

//0x1a8 bytes (sizeof)
struct _KTRANSACTION
{
    struct _KEVENT OutcomeEvent;                                            //0x0
    ULONG cookie;                                                           //0x10
    struct _KMUTANT Mutex;                                                  //0x14
    struct _KTRANSACTION* TreeTx;                                           //0x34
    struct _KTMOBJECT_NAMESPACE_LINK GlobalNamespaceLink;                   //0x38
    struct _KTMOBJECT_NAMESPACE_LINK TmNamespaceLink;                       //0x4c
    struct _GUID UOW;                                                       //0x60
    enum _KTRANSACTION_STATE State;                                         //0x70
    ULONG Flags;                                                            //0x74
    struct _LIST_ENTRY EnlistmentHead;                                      //0x78
    ULONG EnlistmentCount;                                                  //0x80
    ULONG RecoverableEnlistmentCount;                                       //0x84
    ULONG PrePrepareRequiredEnlistmentCount;                                //0x88
    ULONG PrepareRequiredEnlistmentCount;                                   //0x8c
    ULONG OutcomeRequiredEnlistmentCount;                                   //0x90
    ULONG PendingResponses;                                                 //0x94
    struct _KENLISTMENT* SuperiorEnlistment;                                //0x98
    union _CLS_LSN LastLsn;                                                 //0xa0
    struct _LIST_ENTRY PromotedEntry;                                       //0xa8
    struct _KTRANSACTION* PromoterTransaction;                              //0xb0
    VOID* PromotePropagation;                                               //0xb4
    ULONG IsolationLevel;                                                   //0xb8
    ULONG IsolationFlags;                                                   //0xbc
    union _LARGE_INTEGER Timeout;                                           //0xc0
    struct _UNICODE_STRING Description;                                     //0xc8
    struct _KTHREAD* RollbackThread;                                        //0xd0
    struct _WORK_QUEUE_ITEM RollbackWorkItem;                               //0xd4
    struct _KDPC RollbackDpc;                                               //0xe4
    struct _KTIMER RollbackTimer;                                           //0x108
    struct _LIST_ENTRY LsnOrderedEntry;                                     //0x130
    enum _KTRANSACTION_OUTCOME Outcome;                                     //0x138
    ULONG NextSavepoint;                                                    //0x13c
    struct _KTM* Tm;                                                        //0x140
    LONGLONG CommitReservation;                                             //0x148
    struct _KTRANSACTION_HISTORY TransactionHistory[10];                    //0x150
    ULONG TransactionHistoryCount;                                          //0x1a0
};
/* Used in */
// _KENLISTMENT
// _KTRANSACTION

