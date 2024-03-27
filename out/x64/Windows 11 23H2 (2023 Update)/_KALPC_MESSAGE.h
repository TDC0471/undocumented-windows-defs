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

//0x118 bytes (sizeof)
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
            ULONG QueueType:3;                                              //0x28
            ULONG QueuePortType:4;                                          //0x28
            ULONG Canceled:1;                                               //0x28
            ULONG Ready:1;                                                  //0x28
            ULONG ReleaseMessage:1;                                         //0x28
            ULONG SharedQuota:1;                                            //0x28
            ULONG ReplyWaitReply:1;                                         //0x28
            ULONG OwnerPortReference:1;                                     //0x28
            ULONG ReceiverReference:1;                                      //0x28
            ULONG ViewAttributeRetrieved:1;                                 //0x28
            ULONG ViewAttributeDeleteOnRelease:1;                           //0x28
            ULONG InDispatch:1;                                             //0x28
            ULONG InCanceledQueue:1;                                        //0x28
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
    VOID* DataUserVa;                                                       //0xb0
    struct _ALPC_COMMUNICATION_INFO* CommunicationInfo;                     //0xb8
    struct _ALPC_PORT* ConnectionPort;                                      //0xc0
    struct _ETHREAD* ServerThread;                                          //0xc8
    VOID* WakeReference;                                                    //0xd0
    VOID* WakeReference2;                                                   //0xd8
    VOID* ExtensionBuffer;                                                  //0xe0
    ULONGLONG ExtensionBufferSize;                                          //0xe8
    struct _PORT_MESSAGE PortMessage;                                       //0xf0
};
/* Used in */
// _ALPC_COMMUNICATION_INFO
// _ALPC_DISPATCH_CONTEXT
// _ALPC_PORT
// _KALPC_RESERVE

