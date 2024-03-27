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

//0x1e0 bytes (sizeof)
struct _KENLISTMENT
{
    ULONG cookie;                                                           //0x0
    struct _KTMOBJECT_NAMESPACE_LINK NamespaceLink;                         //0x8
    struct _GUID EnlistmentId;                                              //0x30
    struct _KMUTANT Mutex;                                                  //0x40
    struct _LIST_ENTRY NextSameTx;                                          //0x78
    struct _LIST_ENTRY NextSameRm;                                          //0x88
    struct _KRESOURCEMANAGER* ResourceManager;                              //0x98
    struct _KTRANSACTION* Transaction;                                      //0xa0
    enum _KENLISTMENT_STATE State;                                          //0xa8
    ULONG Flags;                                                            //0xac
    ULONG NotificationMask;                                                 //0xb0
    VOID* Key;                                                              //0xb8
    ULONG KeyRefCount;                                                      //0xc0
    VOID* RecoveryInformation;                                              //0xc8
    ULONG RecoveryInformationLength;                                        //0xd0
    VOID* DynamicNameInformation;                                           //0xd8
    ULONG DynamicNameInformationLength;                                     //0xe0
    struct _KTMNOTIFICATION_PACKET* FinalNotification;                      //0xe8
    struct _KENLISTMENT* SupSubEnlistment;                                  //0xf0
    VOID* SupSubEnlHandle;                                                  //0xf8
    VOID* SubordinateTxHandle;                                              //0x100
    struct _GUID CrmEnlistmentEnId;                                         //0x108
    struct _GUID CrmEnlistmentTmId;                                         //0x118
    struct _GUID CrmEnlistmentRmId;                                         //0x128
    ULONG NextHistory;                                                      //0x138
    struct _KENLISTMENT_HISTORY History[20];                                //0x13c
};
/* Used in */
// _CM_TRANS
// _KENLISTMENT
// _KRESOURCEMANAGER
// _KTRANSACTION

