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

//0x88 bytes (sizeof)
struct _KALPC_MESSAGE
{
    struct _LIST_ENTRY Entry;                                               //0x0
    struct _ALPC_PORT* PortQueue;                                           //0x8
    struct _ALPC_PORT* OwnerPort;                                           //0xc
    struct _ETHREAD* WaitingThread;                                         //0x10
    union
    {
        struct
        {
            ULONG QueueType:2;                                              //0x14
            ULONG QueuePortType:4;                                          //0x14
            ULONG Canceled:1;                                               //0x14
            ULONG Ready:1;                                                  //0x14
            ULONG ReleaseMessage:1;                                         //0x14
            ULONG SharedQuota:1;                                            //0x14
            ULONG ReplyWaitReply:1;                                         //0x14
            ULONG OwnerPortReference:1;                                     //0x14
            ULONG ReserveReference:1;                                       //0x14
            ULONG ReceiverReference:1;                                      //0x14
            ULONG ViewAttributeRetrieved:1;                                 //0x14
            ULONG InDispatch:1;                                             //0x14
        } s1;                                                               //0x14
        ULONG State;                                                        //0x14
    } u1;                                                                   //0x14
    LONG SequenceNo;                                                        //0x18
    union
    {
        struct _EPROCESS* QuotaProcess;                                     //0x1c
        VOID* QuotaBlock;                                                   //0x1c
    };
    struct _ALPC_PORT* CancelSequencePort;                                  //0x20
    struct _ALPC_PORT* CancelQueuePort;                                     //0x24
    LONG CancelSequenceNo;                                                  //0x28
    struct _LIST_ENTRY CancelListEntry;                                     //0x2c
    struct _KALPC_RESERVE* Reserve;                                         //0x34
    struct _KALPC_MESSAGE_ATTRIBUTES MessageAttributes;                     //0x38
    VOID* DataUserVa;                                                       //0x54
    struct _ALPC_COMMUNICATION_INFO* CommunicationInfo;                     //0x58
    struct _ALPC_PORT* ConnectionPort;                                      //0x5c
    struct _ETHREAD* ServerThread;                                          //0x60
    VOID* WakeReference;                                                    //0x64
    VOID* ExtensionBuffer;                                                  //0x68
    ULONG ExtensionBufferSize;                                              //0x6c
    struct _PORT_MESSAGE PortMessage;                                       //0x70
};
/* Used in */
// _ALPC_COMMUNICATION_INFO
// _ALPC_DISPATCH_CONTEXT
// _ALPC_PORT
// _KALPC_RESERVE

