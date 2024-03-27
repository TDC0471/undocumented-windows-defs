#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_ETW_GUID_ENTRY.h>
#include <_ETW_REPLY_QUEUE.h>
#include <_ETW_REG_ENTRY.h>
#include <_EPROCESS.h>

//0x2c bytes (sizeof)
struct _ETW_REG_ENTRY
{
    struct _LIST_ENTRY RegList;                                             //0x0
    struct _ETW_GUID_ENTRY* GuidEntry;                                      //0x8
    USHORT Index;                                                           //0xc
    USHORT Flags;                                                           //0xe
    UCHAR EnableMask;                                                       //0x10
    union
    {
        ULONG SessionId;                                                    //0x14
        struct _ETW_REPLY_QUEUE* ReplyQueue;                                //0x14
        struct _ETW_REG_ENTRY* ReplySlot[4];                                //0x14
    };
    union
    {
        struct _EPROCESS* Process;                                          //0x24
        VOID* Callback;                                                     //0x24
    };
    VOID* CallbackContext;                                                  //0x28
};
/* Used in */
// _ETW_PROVIDER_TABLE_ENTRY
// _ETW_REG_ENTRY

