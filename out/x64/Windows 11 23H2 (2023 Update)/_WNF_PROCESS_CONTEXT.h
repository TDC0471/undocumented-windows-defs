#pragma once
/* ------------------ */

#include <_WNF_NODE_HEADER.h>
#include <_EPROCESS.h>
#include <_LIST_ENTRY.h>
#include <_WNF_LOCK.h>
#include <_KEVENT.h>

//0x88 bytes (sizeof)
struct _WNF_PROCESS_CONTEXT
{
    struct _WNF_NODE_HEADER Header;                                         //0x0
    struct _EPROCESS* Process;                                              //0x8
    struct _LIST_ENTRY WnfProcessesListEntry;                               //0x10
    VOID* ImplicitScopeInstances[3];                                        //0x20
    struct _WNF_LOCK TemporaryNamesListLock;                                //0x38
    struct _LIST_ENTRY TemporaryNamesListHead;                              //0x40
    struct _WNF_LOCK ProcessSubscriptionListLock;                           //0x50
    struct _LIST_ENTRY ProcessSubscriptionListHead;                         //0x58
    struct _WNF_LOCK DeliveryPendingListLock;                               //0x68
    struct _LIST_ENTRY DeliveryPendingListHead;                             //0x70
    struct _KEVENT* NotificationEvent;                                      //0x80
};
