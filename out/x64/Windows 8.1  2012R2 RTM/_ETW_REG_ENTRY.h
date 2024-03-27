#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_ETW_GUID_ENTRY.h>
#include <_ETW_REPLY_QUEUE.h>
#include <_ETW_QUEUE_ENTRY.h>
#include <_EPROCESS.h>

//0x50 bytes (sizeof)
struct _ETW_REG_ENTRY
{
    struct _LIST_ENTRY RegList;                                             //0x0
    struct _ETW_GUID_ENTRY* GuidEntry;                                      //0x10
    union
    {
        struct _ETW_REPLY_QUEUE* ReplyQueue;                                //0x18
        struct _ETW_QUEUE_ENTRY* ReplySlot[4];                              //0x18
        struct
        {
            VOID* Caller;                                                   //0x18
            ULONG SessionId;                                                //0x20
        };
    };
    union
    {
        struct _EPROCESS* Process;                                          //0x38
        VOID* CallbackContext;                                              //0x38
    };
    VOID* Callback;                                                         //0x40
    USHORT Index;                                                           //0x48
    union
    {
        UCHAR Flags;                                                        //0x4a
        struct
        {
            UCHAR DbgKernelRegistration:1;                                  //0x4a
            UCHAR DbgUserRegistration:1;                                    //0x4a
            UCHAR DbgReplyRegistration:1;                                   //0x4a
            UCHAR DbgClassicRegistration:1;                                 //0x4a
            UCHAR DbgSessionSpaceRegistration:1;                            //0x4a
            UCHAR DbgModernRegistration:1;                                  //0x4a
            UCHAR DbgClosed:1;                                              //0x4a
            UCHAR DbgInserted:1;                                            //0x4a
        };
    };
    UCHAR EnableMask;                                                       //0x4b
};
/* Used in */
// _ETW_QUEUE_ENTRY

