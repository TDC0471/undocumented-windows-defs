#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_EPROCESS.h>

//0x28 bytes (sizeof)
struct _KRESOURCEMANAGER_COMPLETION_BINDING
{
    struct _LIST_ENTRY NotificationListHead;                                //0x0
    VOID* Port;                                                             //0x10
    ULONGLONG Key;                                                          //0x18
    struct _EPROCESS* BindingProcess;                                       //0x20
};
/* Used in */
// _KRESOURCEMANAGER

