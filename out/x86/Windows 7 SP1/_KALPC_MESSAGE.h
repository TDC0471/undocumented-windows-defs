#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_EPROCESS.h>
#include <_ALPC_PORT.h>
#include <_ETHREAD.h>
#include <_KALPC_RESERVE.h>
#include <_KALPC_MESSAGE_ATTRIBUTES.h>
#include <_ALPC_COMMUNICATION_INFO.h>
#include <_PORT_MESSAGE.h>

//0x88 bytes (sizeof)
struct _KALPC_MESSAGE
{
    struct _LIST_ENTRY Entry;                                               //0x0
    VOID* ExtensionBuffer;                                                  //0x8
    ULONG ExtensionBufferSize;                                              //0xc
    union
    {
        struct _EPROCESS* QuotaProcess;                                     //0x10
        VOID* QuotaBlock;                                                   //0x10
    };
    LONG SequenceNo;                                                        //0x14
    union
    {
        struct
        {
            ULONG QueueType:2;                                              //0x18
            ULONG QueuePortType:4;                                          //0x18
            ULONG Canceled:1;                                               //0x18
            ULONG Ready:1;                                                  //0x18
            ULONG ReleaseMessage:1;                                         //0x18
            ULONG SharedQuota:1;                                            //0x18
            ULONG ReplyWaitReply:1;                                         //0x18
            ULONG OwnerPortReference:1;                                     //0x18
            ULONG ReserveReference:1;                                       //0x18
            ULONG ReceiverReference:1;                                      //0x18
            ULONG ViewAttributeRetrieved:1;                                 //0x18
            ULONG InDispatch:1;                                             //0x18
        } s1;                                                               //0x18
        ULONG State;                                                        //0x18
    } u1;                                                                   //0x18
    struct _ALPC_PORT* CancelSequencePort;                                  //0x1c
    struct _ALPC_PORT* CancelQueuePort;                                     //0x20
    LONG CancelSequenceNo;                                                  //0x24
    struct _LIST_ENTRY CancelListEntry;                                     //0x28
    struct _ETHREAD* WaitingThread;                                         //0x30
    struct _KALPC_RESERVE* Reserve;                                         //0x34
    struct _ALPC_PORT* volatile PortQueue;                                  //0x38
    struct _ALPC_PORT* OwnerPort;                                           //0x3c
    struct _KALPC_MESSAGE_ATTRIBUTES MessageAttributes;                     //0x40
    VOID* DataUserVa;                                                       //0x5c
    VOID* DataSystemVa;                                                     //0x60
    struct _ALPC_COMMUNICATION_INFO* CommunicationInfo;                     //0x64
    struct _ALPC_PORT* ConnectionPort;                                      //0x68
    struct _ETHREAD* ServerThread;                                          //0x6c
    struct _PORT_MESSAGE PortMessage;                                       //0x70
};
/* Used in */
// _ALPC_DISPATCH_CONTEXT
// _ALPC_PORT
// _KALPC_RESERVE
