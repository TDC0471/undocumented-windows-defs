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

//0x2d8 bytes (sizeof)
struct _KTRANSACTION
{
    struct _KEVENT OutcomeEvent;                                            //0x0
    ULONG cookie;                                                           //0x18
    struct _KMUTANT Mutex;                                                  //0x20
    struct _KTRANSACTION* TreeTx;                                           //0x58
    struct _KTMOBJECT_NAMESPACE_LINK GlobalNamespaceLink;                   //0x60
    struct _KTMOBJECT_NAMESPACE_LINK TmNamespaceLink;                       //0x88
    struct _GUID UOW;                                                       //0xb0
    enum _KTRANSACTION_STATE State;                                         //0xc0
    ULONG Flags;                                                            //0xc4
    struct _LIST_ENTRY EnlistmentHead;                                      //0xc8
    ULONG EnlistmentCount;                                                  //0xd8
    ULONG RecoverableEnlistmentCount;                                       //0xdc
    ULONG PrePrepareRequiredEnlistmentCount;                                //0xe0
    ULONG PrepareRequiredEnlistmentCount;                                   //0xe4
    ULONG OutcomeRequiredEnlistmentCount;                                   //0xe8
    ULONG PendingResponses;                                                 //0xec
    struct _KENLISTMENT* SuperiorEnlistment;                                //0xf0
    union _CLS_LSN LastLsn;                                                 //0xf8
    struct _LIST_ENTRY PromotedEntry;                                       //0x100
    struct _KTRANSACTION* PromoterTransaction;                              //0x110
    VOID* PromotePropagation;                                               //0x118
    ULONG IsolationLevel;                                                   //0x120
    ULONG IsolationFlags;                                                   //0x124
    union _LARGE_INTEGER Timeout;                                           //0x128
    struct _UNICODE_STRING Description;                                     //0x130
    struct _KTHREAD* RollbackThread;                                        //0x140
    struct _WORK_QUEUE_ITEM RollbackWorkItem;                               //0x148
    struct _KDPC RollbackDpc;                                               //0x168
    struct _KTIMER RollbackTimer;                                           //0x1a8
    struct _LIST_ENTRY LsnOrderedEntry;                                     //0x1e8
    enum _KTRANSACTION_OUTCOME Outcome;                                     //0x1f8
    struct _KTM* Tm;                                                        //0x200
    LONGLONG CommitReservation;                                             //0x208
    struct _KTRANSACTION_HISTORY TransactionHistory[10];                    //0x210
    ULONG TransactionHistoryCount;                                          //0x260
    VOID* DTCPrivateInformation;                                            //0x268
    ULONG DTCPrivateInformationLength;                                      //0x270
    struct _KMUTANT DTCPrivateInformationMutex;                             //0x278
    VOID* PromotedTxSelfHandle;                                             //0x2b0
    ULONG PendingPromotionCount;                                            //0x2b8
    struct _KEVENT PromotionCompletedEvent;                                 //0x2c0
};
/* Used in */
// _KENLISTMENT
// _KTRANSACTION

