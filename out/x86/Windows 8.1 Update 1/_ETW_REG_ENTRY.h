#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_ETW_GUID_ENTRY.h>
#include <_ETW_REPLY_QUEUE.h>
#include <_ETW_QUEUE_ENTRY.h>
#include <_EPROCESS.h>

//0x28 bytes (sizeof)
struct _ETW_REG_ENTRY
{
    struct _LIST_ENTRY RegList;                                             //0x0
    struct _ETW_GUID_ENTRY* GuidEntry;                                      //0x8
    union
    {
        struct _ETW_REPLY_QUEUE* ReplyQueue;                                //0xc
        struct _ETW_QUEUE_ENTRY* ReplySlot[4];                              //0xc
        struct
        {
            VOID* Caller;                                                   //0xc
            ULONG SessionId;                                                //0x10
        };
    };
    union
    {
        struct _EPROCESS* Process;                                          //0x1c
        VOID* CallbackContext;                                              //0x1c
    };
    VOID* Callback;                                                         //0x20
    USHORT Index;                                                           //0x24
    union
    {
        UCHAR Flags;                                                        //0x26
        struct
        {
            UCHAR DbgKernelRegistration:1;                                  //0x26
            UCHAR DbgUserRegistration:1;                                    //0x26
            UCHAR DbgReplyRegistration:1;                                   //0x26
            UCHAR DbgClassicRegistration:1;                                 //0x26
            UCHAR DbgSessionSpaceRegistration:1;                            //0x26
            UCHAR DbgModernRegistration:1;                                  //0x26
            UCHAR DbgClosed:1;                                              //0x26
            UCHAR DbgInserted:1;                                            //0x26
        };
    };
    UCHAR EnableMask;                                                       //0x27
};
/* Used in */
// _ETW_QUEUE_ENTRY

