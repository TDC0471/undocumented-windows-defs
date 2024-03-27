#pragma once
/* ------------------ */

#include <_CM_KEY_CONTROL_BLOCK.h>
#include <_CM_NOTIFY_BLOCK.h>
#include <_LIST_ENTRY.h>

//0x30 bytes (sizeof)
struct _CM_KEY_BODY
{
    ULONG Type;                                                             //0x0
    struct _CM_KEY_CONTROL_BLOCK* KeyControlBlock;                          //0x8
    struct _CM_NOTIFY_BLOCK* NotifyBlock;                                   //0x10
    VOID* ProcessID;                                                        //0x18
    struct _LIST_ENTRY KeyBodyList;                                         //0x20
};
/* Used in */
// _CM_KEY_CONTROL_BLOCK
// _CM_NOTIFY_BLOCK

