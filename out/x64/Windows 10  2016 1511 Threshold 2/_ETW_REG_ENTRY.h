#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_ETW_GUID_ENTRY.h>
#include <_ETW_REPLY_QUEUE.h>
#include <_ETW_QUEUE_ENTRY.h>
#include <_EPROCESS.h>
#include <_ETW_PROVIDER_TRAITS.h>

//0x70 bytes (sizeof)
struct _ETW_REG_ENTRY
{
    struct _LIST_ENTRY RegList;                                             //0x0
    struct _LIST_ENTRY GroupRegList;                                        //0x10
    struct _ETW_GUID_ENTRY* GuidEntry;                                      //0x20
    struct _ETW_GUID_ENTRY* GroupEntry;                                     //0x28
    union
    {
        struct _ETW_REPLY_QUEUE* ReplyQueue;                                //0x30
        struct _ETW_QUEUE_ENTRY* ReplySlot[4];                              //0x30
        struct
        {
            VOID* Caller;                                                   //0x30
            ULONG SessionId;                                                //0x38
        };
    };
    union
    {
        struct _EPROCESS* Process;                                          //0x50
        VOID* CallbackContext;                                              //0x50
    };
    VOID* Callback;                                                         //0x58
    USHORT Index;                                                           //0x60
    union
    {
        UCHAR Flags;                                                        //0x62
        struct
        {
            UCHAR DbgKernelRegistration:1;                                  //0x62
            UCHAR DbgUserRegistration:1;                                    //0x62
            UCHAR DbgReplyRegistration:1;                                   //0x62
            UCHAR DbgClassicRegistration:1;                                 //0x62
            UCHAR DbgSessionSpaceRegistration:1;                            //0x62
            UCHAR DbgModernRegistration:1;                                  //0x62
            UCHAR DbgClosed:1;                                              //0x62
            UCHAR DbgInserted:1;                                            //0x62
        };
    };
    UCHAR EnableMask;                                                       //0x63
    UCHAR GroupEnableMask;                                                  //0x64
    UCHAR UseDescriptorType;                                                //0x65
    struct _ETW_PROVIDER_TRAITS* Traits;                                    //0x68
};
/* Used in */
// _ETW_QUEUE_ENTRY
