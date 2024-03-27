#pragma once
/* ------------------ */

#include <_WNF_NODE_HEADER.h>
#include <_EX_RUNDOWN_REF.h>
#include <_LIST_ENTRY.h>
#include <_EPROCESS.h>
#include <_WNF_NAME_INSTANCE.h>
#include <_WNF_STATE_NAME_STRUCT.h>
#include <_WNF_SUBSCRIPTION_STATE.h>

//0x58 bytes (sizeof)
struct _WNF_SUBSCRIPTION
{
    struct _WNF_NODE_HEADER Header;                                         //0x0
    struct _EX_RUNDOWN_REF RunRef;                                          //0x4
    ULONGLONG SubscriptionId;                                               //0x8
    struct _LIST_ENTRY ProcessSubscriptionListEntry;                        //0x10
    struct _EPROCESS* Process;                                              //0x18
    struct _WNF_NAME_INSTANCE* NameInstance;                                //0x1c
    struct _WNF_STATE_NAME_STRUCT StateName;                                //0x20
    struct _LIST_ENTRY StateSubscriptionListEntry;                          //0x28
    ULONG CallbackRoutine;                                                  //0x30
    VOID* CallbackContext;                                                  //0x34
    ULONG CurrentChangeStamp;                                               //0x38
    ULONG SubscribedEventSet;                                               //0x3c
    struct _LIST_ENTRY PendingSubscriptionListEntry;                        //0x40
    enum _WNF_SUBSCRIPTION_STATE SubscriptionState;                         //0x48
    ULONG SignaledEventSet;                                                 //0x4c
    ULONG InDeliveryEventSet;                                               //0x50
};
