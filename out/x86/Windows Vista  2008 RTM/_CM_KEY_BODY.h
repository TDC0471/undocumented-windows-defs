#pragma once
/* ------------------ */

#include <_CM_KEY_CONTROL_BLOCK.h>
#include <_CM_NOTIFY_BLOCK.h>
#include <_LIST_ENTRY.h>
#include <_GUID.h>
#include <_EX_PUSH_LOCK.h>

//0x30 bytes (sizeof)
struct _CM_KEY_BODY
{
    ULONG Type;                                                             //0x0
    struct _CM_KEY_CONTROL_BLOCK* KeyControlBlock;                          //0x4
    struct _CM_NOTIFY_BLOCK* NotifyBlock;                                   //0x8
    VOID* ProcessID;                                                        //0xc
    struct _LIST_ENTRY KeyBodyList;                                         //0x10
    ULONG Flags;                                                            //0x18
    VOID* KtmTrans;                                                         //0x1c
    struct _GUID* KtmUow;                                                   //0x20
    struct _EX_PUSH_LOCK KeyBodyLock;                                       //0x24
    struct _LIST_ENTRY ContextListHead;                                     //0x28
};
/* Used in */
// _CM_KEY_CONTROL_BLOCK
// _CM_NOTIFY_BLOCK
