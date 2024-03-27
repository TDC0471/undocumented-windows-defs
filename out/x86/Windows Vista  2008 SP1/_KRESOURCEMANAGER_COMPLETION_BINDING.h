#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_EPROCESS.h>

//0x14 bytes (sizeof)
struct _KRESOURCEMANAGER_COMPLETION_BINDING
{
    struct _LIST_ENTRY NotificationListHead;                                //0x0
    VOID* Port;                                                             //0x8
    ULONG Key;                                                              //0xc
    struct _EPROCESS* BindingProcess;                                       //0x10
};
/* Used in */
// _KRESOURCEMANAGER

