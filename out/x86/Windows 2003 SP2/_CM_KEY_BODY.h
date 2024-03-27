#pragma once
/* ------------------ */

#include <_CM_KEY_CONTROL_BLOCK.h>
#include <_CM_NOTIFY_BLOCK.h>
#include <_LIST_ENTRY.h>

//0x44 bytes (sizeof)
struct _CM_KEY_BODY
{
    ULONG Type;                                                             //0x0
    struct _CM_KEY_CONTROL_BLOCK* KeyControlBlock;                          //0x4
    struct _CM_NOTIFY_BLOCK* NotifyBlock;                                   //0x8
    VOID* ProcessID;                                                        //0xc
    ULONG Callers;                                                          //0x10
    VOID* CallerAddress[10];                                                //0x14
    struct _LIST_ENTRY KeyBodyList;                                         //0x3c
};
/* Used in */
// _CM_KEY_CONTROL_BLOCK
// _CM_NOTIFY_BLOCK

