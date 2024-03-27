#pragma once
/* ------------------ */

#include <_KTMOBJECT_NAMESPACE_LINK.h>
#include <_GUID.h>
#include <_KMUTANT.h>
#include <_LIST_ENTRY.h>
#include <_KRESOURCEMANAGER.h>
#include <_KTRANSACTION.h>
#include <_KENLISTMENT_STATE.h>
#include <_KTMNOTIFICATION_PACKET.h>
#include <_KENLISTMENT.h>
#include <_KENLISTMENT_HISTORY.h>

//0x168 bytes (sizeof)
struct _KENLISTMENT
{
    ULONG cookie;                                                           //0x0
    struct _KTMOBJECT_NAMESPACE_LINK NamespaceLink;                         //0x4
    struct _GUID EnlistmentId;                                              //0x18
    struct _KMUTANT Mutex;                                                  //0x28
    struct _LIST_ENTRY NextSameTx;                                          //0x48
    struct _LIST_ENTRY NextSameRm;                                          //0x50
    struct _KRESOURCEMANAGER* ResourceManager;                              //0x58
    struct _KTRANSACTION* Transaction;                                      //0x5c
    enum _KENLISTMENT_STATE State;                                          //0x60
    ULONG Flags;                                                            //0x64
    ULONG NotificationMask;                                                 //0x68
    VOID* Key;                                                              //0x6c
    ULONG KeyRefCount;                                                      //0x70
    VOID* RecoveryInformation;                                              //0x74
    ULONG RecoveryInformationLength;                                        //0x78
    VOID* DynamicNameInformation;                                           //0x7c
    ULONG DynamicNameInformationLength;                                     //0x80
    struct _KTMNOTIFICATION_PACKET* FinalNotification;                      //0x84
    struct _KENLISTMENT* SupSubEnlistment;                                  //0x88
    VOID* SupSubEnlHandle;                                                  //0x8c
    VOID* SubordinateTxHandle;                                              //0x90
    struct _GUID CrmEnlistmentEnId;                                         //0x94
    struct _GUID CrmEnlistmentTmId;                                         //0xa4
    struct _GUID CrmEnlistmentRmId;                                         //0xb4
    ULONG NextHistory;                                                      //0xc4
    struct _KENLISTMENT_HISTORY History[20];                                //0xc8
};
/* Used in */
// _CM_TRANS
// _KENLISTMENT
// _KRESOURCEMANAGER
// _KTRANSACTION

