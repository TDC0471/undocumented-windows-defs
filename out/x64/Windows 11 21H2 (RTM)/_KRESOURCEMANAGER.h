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

//0x250 bytes (sizeof)
struct _KRESOURCEMANAGER
{
    struct _KEVENT NotificationAvailable;                                   //0x0
    ULONG cookie;                                                           //0x18
    enum _KRESOURCEMANAGER_STATE State;                                     //0x1c
    ULONG Flags;                                                            //0x20
    struct _KMUTANT Mutex;                                                  //0x28
    struct _KTMOBJECT_NAMESPACE_LINK NamespaceLink;                         //0x60
    struct _GUID RmId;                                                      //0x88
    struct _KQUEUE NotificationQueue;                                       //0x98
    struct _KMUTANT NotificationMutex;                                      //0xd8
    struct _LIST_ENTRY EnlistmentHead;                                      //0x110
    ULONG EnlistmentCount;                                                  //0x120
    LONG (*NotificationRoutine)(struct _KENLISTMENT* arg1, VOID* arg2, VOID* arg3, ULONG arg4, union _LARGE_INTEGER* arg5, ULONG arg6, VOID* arg7); //0x128
    VOID* Key;                                                              //0x130
    struct _LIST_ENTRY ProtocolListHead;                                    //0x138
    struct _LIST_ENTRY PendingPropReqListHead;                              //0x148
    struct _LIST_ENTRY CRMListEntry;                                        //0x158
    struct _KTM* Tm;                                                        //0x168
    struct _UNICODE_STRING Description;                                     //0x170
    struct _KTMOBJECT_NAMESPACE Enlistments;                                //0x180
    struct _KRESOURCEMANAGER_COMPLETION_BINDING CompletionBinding;          //0x228
};
/* Used in */
// _KENLISTMENT
// _KTM

