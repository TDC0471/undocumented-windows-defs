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

//0x60 bytes (sizeof)
struct _WNF_NAME_INSTANCE
{
    struct _WNF_NODE_HEADER Header;                                         //0x0
    struct _EX_RUNDOWN_REF RunRef;                                          //0x4
    struct _RTL_BALANCED_NODE TreeLinks;                                    //0x8
    struct _WNF_STATE_NAME_STRUCT StateName;                                //0x18
    struct _WNF_SCOPE_INSTANCE* ScopeInstance;                              //0x20
    struct _WNF_STATE_NAME_REGISTRATION StateNameInfo;                      //0x24
    struct _WNF_LOCK StateDataLock;                                         //0x30
    struct _WNF_STATE_DATA* StateData;                                      //0x34
    ULONG CurrentChangeStamp;                                               //0x38
    VOID* PermanentDataStore;                                               //0x3c
    struct _WNF_LOCK StateSubscriptionListLock;                             //0x40
    struct _LIST_ENTRY StateSubscriptionListHead;                           //0x44
    struct _LIST_ENTRY TemporaryNameListEntry;                              //0x4c
    struct _EPROCESS* CreatorProcess;                                       //0x54
    LONG DataSubscribersCount;                                              //0x58
    LONG CurrentDeliveryCount;                                              //0x5c
};
/* Used in */
// _WNF_SUBSCRIPTION

