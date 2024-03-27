#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_ALPC_PORT.h>
#include <_ETHREAD.h>
#include <_EPROCESS.h>
#include <_KALPC_RESERVE.h>
#include <_KALPC_MESSAGE_ATTRIBUTES.h>
#include <_ALPC_COMMUNICATION_INFO.h>
#include <_PORT_MESSAGE.h>

//0x100 bytes (sizeof)
struct _KALPC_MESSAGE
{
    struct _LIST_ENTRY Entry;                                               //0x0
    struct _ALPC_PORT* PortQueue;                                           //0x10
    struct _ALPC_PORT* OwnerPort;                                           //0x18
    struct _ETHREAD* WaitingThread;                                         //0x20
    union
    {
        struct
        {
            ULONG QueueType:2;                                              //0x28
            ULONG QueuePortType:4;                                          //0x28
            ULONG Canceled:1;                                               //0x28
            ULONG Ready:1;                                                  //0x28
            ULONG ReleaseMessage:1;                                         //0x28
            ULONG SharedQuota:1;                                            //0x28
            ULONG ReplyWaitReply:1;                                         //0x28
            ULONG OwnerPortReference:1;                                     //0x28
            ULONG ReserveReference:1;                                       //0x28
            ULONG ReceiverReference:1;                                      //0x28
            ULONG ViewAttributeRetrieved:1;                                 //0x28
            ULONG InDispatch:1;                                             //0x28
        } s1;                                                               //0x28
        ULONG State;                                                        //0x28
    } u1;                                                                   //0x28
    LONG SequenceNo;                                                        //0x2c
    union
    {
        struct _EPROCESS* QuotaProcess;                                     //0x30
        VOID* QuotaBlock;                                                   //0x30
    };
    struct _ALPC_PORT* CancelSequencePort;                                  //0x38
    struct _ALPC_PORT* CancelQueuePort;                                     //0x40
    LONG CancelSequenceNo;                                                  //0x48
    struct _LIST_ENTRY CancelListEntry;                                     //0x50
    struct _KALPC_RESERVE* Reserve;                                         //0x60
    struct _KALPC_MESSAGE_ATTRIBUTES MessageAttributes;                     //0x68
    VOID* DataUserVa;                                                       //0xa0
    struct _ALPC_COMMUNICATION_INFO* CommunicationInfo;                     //0xa8
    struct _ALPC_PORT* ConnectionPort;                                      //0xb0
    struct _ETHREAD* ServerThread;                                          //0xb8
    VOID* WakeReference;                                                    //0xc0
    VOID* ExtensionBuffer;                                                  //0xc8
    ULONGLONG ExtensionBufferSize;                                          //0xd0
    struct _PORT_MESSAGE PortMessage;                                       //0xd8
};
/* Used in */
// _ALPC_COMMUNICATION_INFO
// _ALPC_DISPATCH_CONTEXT
// _ALPC_PORT
// _KALPC_RESERVE

