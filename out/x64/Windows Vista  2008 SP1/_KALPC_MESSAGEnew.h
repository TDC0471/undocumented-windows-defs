#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_EPROCESS.h>
#include <_ALPC_PORT.h>
#include <_ETHREAD.h>
#include <_KALPC_RESERVE.h>
#include <_HANDLE_TABLE_ENTRY.h>
#include <_KALPC_MESSAGE_ATTRIBUTES.h>
#include <_ALPC_COMMUNICATION_INFO.h>
#include <_PORT_MESSAGE.h>

//0x108 bytes (sizeof)
struct _KALPC_MESSAGE
{
    struct _LIST_ENTRY Entry;                                               //0x0
    VOID* ExtensionBuffer;                                                  //0x10
    ULONGLONG ExtensionBufferSize;                                          //0x18
    union
    {
        struct _EPROCESS* QuotaProcess;                                     //0x20
        VOID* QuotaBlock;                                                   //0x20
    };
    LONG SequenceNo;                                                        //0x28
    union
    {
        struct
        {
            ULONG QueueType:2;                                              //0x2c
            ULONG QueuePortType:4;                                          //0x2c
            ULONG Canceled:1;                                               //0x2c
            ULONG Ready:1;                                                  //0x2c
            ULONG ReleaseMessage:1;                                         //0x2c
            ULONG SharedQuota:1;                                            //0x2c
            ULONG ReplyWaitReply:1;                                         //0x2c
            ULONG OwnerPortReference:1;                                     //0x2c
            ULONG ReserveReference:1;                                       //0x2c
            ULONG ReceiverReference:1;                                      //0x2c
        } s1;                                                               //0x2c
        ULONG State;                                                        //0x2c
    } u1;                                                                   //0x2c
    struct _ALPC_PORT* CancelSequencePort;                                  //0x30
    struct _ALPC_PORT* CancelQueuePort;                                     //0x38
    LONG CancelSequenceNo;                                                  //0x40
    struct _LIST_ENTRY CancelListEntry;                                     //0x48
    struct _ETHREAD* WaitingThread;                                         //0x58
    struct _KALPC_RESERVE* Reserve;                                         //0x60
    struct _ALPC_PORT* volatile PortQueue;                                  //0x68
    struct _ALPC_PORT* OwnerPort;                                           //0x70
    struct _HANDLE_TABLE_ENTRY* UniqueTableEntry;                           //0x78
    struct _KALPC_MESSAGE_ATTRIBUTES MessageAttributes;                     //0x80
    VOID* DataUserVa;                                                       //0xb8
    VOID* DataSystemVa;                                                     //0xc0
    struct _ALPC_COMMUNICATION_INFO* CommunicationInfo;                     //0xc8
    struct _ALPC_PORT* ConnectionPort;                                      //0xd0
    struct _ETHREAD* ServerThread;                                          //0xd8
    struct _PORT_MESSAGE PortMessage;                                       //0xe0
};
/* Used in */
// _ALPC_DISPATCH_CONTEXT
// _ALPC_PORT
// _KALPC_RESERVE

