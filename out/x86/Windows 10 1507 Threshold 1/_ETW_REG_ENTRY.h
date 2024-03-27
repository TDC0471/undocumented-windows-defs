#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_ETW_GUID_ENTRY.h>
#include <_ETW_REPLY_QUEUE.h>
#include <_ETW_QUEUE_ENTRY.h>
#include <_EPROCESS.h>
#include <_ETW_PROVIDER_TRAITS.h>

//0x3c bytes (sizeof)
struct _ETW_REG_ENTRY
{
    struct _LIST_ENTRY RegList;                                             //0x0
    struct _LIST_ENTRY GroupRegList;                                        //0x8
    struct _ETW_GUID_ENTRY* GuidEntry;                                      //0x10
    struct _ETW_GUID_ENTRY* GroupEntry;                                     //0x14
    union
    {
        struct _ETW_REPLY_QUEUE* ReplyQueue;                                //0x18
        struct _ETW_QUEUE_ENTRY* ReplySlot[4];                              //0x18
        struct
        {
            VOID* Caller;                                                   //0x18
            ULONG SessionId;                                                //0x1c
        };
    };
    union
    {
        struct _EPROCESS* Process;                                          //0x28
        VOID* CallbackContext;                                              //0x28
    };
    VOID* Callback;                                                         //0x2c
    USHORT Index;                                                           //0x30
    union
    {
        UCHAR Flags;                                                        //0x32
        struct
        {
            UCHAR DbgKernelRegistration:1;                                  //0x32
            UCHAR DbgUserRegistration:1;                                    //0x32
            UCHAR DbgReplyRegistration:1;                                   //0x32
            UCHAR DbgClassicRegistration:1;                                 //0x32
            UCHAR DbgSessionSpaceRegistration:1;                            //0x32
            UCHAR DbgModernRegistration:1;                                  //0x32
            UCHAR DbgClosed:1;                                              //0x32
            UCHAR DbgInserted:1;                                            //0x32
        };
    };
    UCHAR EnableMask;                                                       //0x33
    UCHAR GroupEnableMask;                                                  //0x34
    UCHAR UseDescriptorType;                                                //0x35
    struct _ETW_PROVIDER_TRAITS* Traits;                                    //0x38
};
/* Used in */
// _ETW_QUEUE_ENTRY

