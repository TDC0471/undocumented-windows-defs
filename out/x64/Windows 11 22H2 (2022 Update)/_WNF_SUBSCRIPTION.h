#pragma once
/* ------------------ */

#include <_WNF_NODE_HEADER.h>
#include <_EX_RUNDOWN_REF.h>
#include <_LIST_ENTRY.h>
#include <_EPROCESS.h>
#include <_WNF_NAME_INSTANCE.h>
#include <_WNF_STATE_NAME_STRUCT.h>
#include <_WNF_SUBSCRIPTION_STATE.h>

//0x88 bytes (sizeof)
struct _WNF_SUBSCRIPTION
{
    struct _WNF_NODE_HEADER Header;                                         //0x0
    struct _EX_RUNDOWN_REF RunRef;                                          //0x8
    ULONGLONG SubscriptionId;                                               //0x10
    struct _LIST_ENTRY ProcessSubscriptionListEntry;                        //0x18
    struct _EPROCESS* Process;                                              //0x28
    struct _WNF_NAME_INSTANCE* NameInstance;                                //0x30
    struct _WNF_STATE_NAME_STRUCT StateName;                                //0x38
    struct _LIST_ENTRY StateSubscriptionListEntry;                          //0x40
    ULONGLONG CallbackRoutine;                                              //0x50
    VOID* CallbackContext;                                                  //0x58
    ULONG CurrentChangeStamp;                                               //0x60
    ULONG SubscribedEventSet;                                               //0x64
    struct _LIST_ENTRY PendingSubscriptionListEntry;                        //0x68
    enum _WNF_SUBSCRIPTION_STATE SubscriptionState;                         //0x78
    ULONG SignaledEventSet;                                                 //0x7c
    ULONG InDeliveryEventSet;                                               //0x80
};
