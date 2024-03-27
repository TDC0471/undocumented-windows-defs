#pragma once
/* ------------------ */

#include <_WNF_NODE_HEADER.h>
#include <_EX_RUNDOWN_REF.h>
#include <_RTL_BALANCED_NODE.h>
#include <_WNF_STATE_NAME_STRUCT.h>
#include <_WNF_SCOPE_INSTANCE.h>
#include <_WNF_STATE_NAME_REGISTRATION.h>
#include <_WNF_LOCK.h>
#include <_WNF_STATE_DATA.h>
#include <_LIST_ENTRY.h>
#include <_EPROCESS.h>

//0xa8 bytes (sizeof)
struct _WNF_NAME_INSTANCE
{
    struct _WNF_NODE_HEADER Header;                                         //0x0
    struct _EX_RUNDOWN_REF RunRef;                                          //0x8
    struct _RTL_BALANCED_NODE TreeLinks;                                    //0x10
    struct _WNF_STATE_NAME_STRUCT StateName;                                //0x28
    struct _WNF_SCOPE_INSTANCE* ScopeInstance;                              //0x30
    struct _WNF_STATE_NAME_REGISTRATION StateNameInfo;                      //0x38
    struct _WNF_LOCK StateDataLock;                                         //0x50
    struct _WNF_STATE_DATA* StateData;                                      //0x58
    ULONG CurrentChangeStamp;                                               //0x60
    VOID* PermanentDataStore;                                               //0x68
    struct _WNF_LOCK StateSubscriptionListLock;                             //0x70
    struct _LIST_ENTRY StateSubscriptionListHead;                           //0x78
    struct _LIST_ENTRY TemporaryNameListEntry;                              //0x88
    struct _EPROCESS* CreatorProcess;                                       //0x98
    LONG DataSubscribersCount;                                              //0xa0
    LONG CurrentDeliveryCount;                                              //0xa4
};
/* Used in */
// _WNF_SUBSCRIPTION

