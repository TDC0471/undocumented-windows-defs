#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_ETW_GUID_ENTRY.h>
#include <_ETW_REPLY_QUEUE.h>
#include <_ETW_REG_ENTRY.h>
#include <_EPROCESS.h>

//0x50 bytes (sizeof)
struct _ETW_REG_ENTRY
{
    struct _LIST_ENTRY RegList;                                             //0x0
    struct _ETW_GUID_ENTRY* GuidEntry;                                      //0x10
    USHORT Index;                                                           //0x18
    USHORT Flags;                                                           //0x1a
    UCHAR EnableMask;                                                       //0x1c
    union
    {
        ULONG SessionId;                                                    //0x20
        struct _ETW_REPLY_QUEUE* ReplyQueue;                                //0x20
        struct _ETW_REG_ENTRY* ReplySlot[4];                                //0x20
    };
    union
    {
        struct _EPROCESS* Process;                                          //0x40
        VOID* Callback;                                                     //0x40
    };
    VOID* CallbackContext;                                                  //0x48
};
/* Used in */
// _ETW_PROVIDER_TABLE_ENTRY
// _ETW_REG_ENTRY

