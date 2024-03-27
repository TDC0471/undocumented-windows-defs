#pragma once
/* ------------------ */

#include <_CM_KEY_CONTROL_BLOCK.h>
#include <_CM_NOTIFY_BLOCK.h>
#include <_LIST_ENTRY.h>
#include <_CM_TRANS_PTR.h>
#include <_GUID.h>

//0x2c bytes (sizeof)
struct _CM_KEY_BODY
{
    ULONG Type;                                                             //0x0
    struct _CM_KEY_CONTROL_BLOCK* KeyControlBlock;                          //0x4
    struct _CM_NOTIFY_BLOCK* NotifyBlock;                                   //0x8
    VOID* ProcessID;                                                        //0xc
    struct _LIST_ENTRY KeyBodyList;                                         //0x10
    ULONG Flags:16;                                                         //0x18
    ULONG HandleTags:16;                                                    //0x18
    union _CM_TRANS_PTR Trans;                                              //0x1c
    struct _GUID* KtmUow;                                                   //0x20
    struct _LIST_ENTRY ContextListHead;                                     //0x24
};
/* Used in */
// _CM_KEY_CONTROL_BLOCK
// _CM_NOTIFY_BLOCK

