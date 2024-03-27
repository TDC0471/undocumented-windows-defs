#pragma once
/* ------------------ */

#include <_KEVENT.h>
#include <_KRESOURCEMANAGER_STATE.h>
#include <_KMUTANT.h>
#include <_KTMOBJECT_NAMESPACE_LINK.h>
#include <_GUID.h>
#include <_KQUEUE.h>
#include <_LIST_ENTRY.h>
#include <_KENLISTMENT.h>
#include <_LARGE_INTEGER.h>
#include <_KTM.h>
#include <_UNICODE_STRING.h>
#include <_KTMOBJECT_NAMESPACE.h>
#include <_KRESOURCEMANAGER_COMPLETION_BINDING.h>

//0x154 bytes (sizeof)
struct _KRESOURCEMANAGER
{
    struct _KEVENT NotificationAvailable;                                   //0x0
    ULONG cookie;                                                           //0x10
    enum _KRESOURCEMANAGER_STATE State;                                     //0x14
    ULONG Flags;                                                            //0x18
    struct _KMUTANT Mutex;                                                  //0x1c
    struct _KTMOBJECT_NAMESPACE_LINK NamespaceLink;                         //0x3c
    struct _GUID RmId;                                                      //0x50
    struct _KQUEUE NotificationQueue;                                       //0x60
    struct _KMUTANT NotificationMutex;                                      //0x88
    struct _LIST_ENTRY EnlistmentHead;                                      //0xa8
    ULONG EnlistmentCount;                                                  //0xb0
    LONG (*NotificationRoutine)(struct _KENLISTMENT* arg1, VOID* arg2, VOID* arg3, ULONG arg4, union _LARGE_INTEGER* arg5, ULONG arg6, VOID* arg7); //0xb4
    VOID* Key;                                                              //0xb8
    struct _LIST_ENTRY ProtocolListHead;                                    //0xbc
    struct _LIST_ENTRY PendingPropReqListHead;                              //0xc4
    struct _LIST_ENTRY CRMListEntry;                                        //0xcc
    struct _KTM* Tm;                                                        //0xd4
    struct _UNICODE_STRING Description;                                     //0xd8
    struct _KTMOBJECT_NAMESPACE Enlistments;                                //0xe0
    struct _KRESOURCEMANAGER_COMPLETION_BINDING CompletionBinding;          //0x140
};
/* Used in */
// _KENLISTMENT
// _KTM

