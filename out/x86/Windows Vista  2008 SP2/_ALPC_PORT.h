#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_ALPC_COMMUNICATION_INFO.h>
#include <_EPROCESS.h>
#include <_ALPC_COMPLETION_PACKET_LOOKASIDE.h>
#include <_SECURITY_CLIENT_CONTEXT.h>
#include <_KSEMAPHORE.h>
#include <_KEVENT.h>
#include <_EX_PUSH_LOCK.h>
#include <_ALPC_PORT_ATTRIBUTES.h>
#include <_ALPC_COMPLETION_LIST.h>
#include <_ALPC_MESSAGE_ZONE.h>
#include <_ALPC_PORT.h>
#include <_KALPC_MESSAGE.h>

//0xf4 bytes (sizeof)
struct _ALPC_PORT
{
    struct _LIST_ENTRY PortListEntry;                                       //0x0
    struct _ALPC_COMMUNICATION_INFO* CommunicationInfo;                     //0x8
    struct _EPROCESS* OwnerProcess;                                         //0xc
    ULONG SequenceNo;                                                       //0x10
    VOID* CompletionPort;                                                   //0x14
    VOID* CompletionKey;                                                    //0x18
    struct _ALPC_COMPLETION_PACKET_LOOKASIDE* CompletionPacketLookaside;    //0x1c
    VOID* PortContext;                                                      //0x20
    struct _SECURITY_CLIENT_CONTEXT StaticSecurity;                         //0x24
    struct _LIST_ENTRY MainQueue;                                           //0x60
    struct _LIST_ENTRY PendingQueue;                                        //0x68
    struct _LIST_ENTRY LargeMessageQueue;                                   //0x70
    struct _LIST_ENTRY WaitQueue;                                           //0x78
    union
    {
        struct _KSEMAPHORE* Semaphore;                                      //0x80
        struct _KEVENT* DummyEvent;                                         //0x80
    };
    struct _EX_PUSH_LOCK Lock;                                              //0x84
    struct _ALPC_PORT_ATTRIBUTES PortAttributes;                            //0x88
    struct _EX_PUSH_LOCK ResourceListLock;                                  //0xb4
    struct _LIST_ENTRY ResourceListHead;                                    //0xb8
    struct _ALPC_COMPLETION_LIST* CompletionList;                           //0xc0
    struct _ALPC_MESSAGE_ZONE* MessageZone;                                 //0xc4
    struct _LIST_ENTRY CanceledQueue;                                       //0xc8
    union
    {
        struct
        {
            ULONG Initialized:1;                                            //0xd0
            ULONG Type:2;                                                   //0xd0
            ULONG ConnectionPending:1;                                      //0xd0
            ULONG ConnectionRefused:1;                                      //0xd0
            ULONG Disconnected:1;                                           //0xd0
            ULONG Closed:1;                                                 //0xd0
            ULONG NoFlushOnClose:1;                                         //0xd0
            ULONG ReturnExtendedInfo:1;                                     //0xd0
            ULONG Waitable:1;                                               //0xd0
            ULONG DynamicSecurity:1;                                        //0xd0
            ULONG Wow64CompletionList:1;                                    //0xd0
            ULONG Lpc:1;                                                    //0xd0
            ULONG LpcToLpc:1;                                               //0xd0
            ULONG HasCompletionList:1;                                      //0xd0
            ULONG HadCompletionList:1;                                      //0xd0
        } s1;                                                               //0xd0
        ULONG State;                                                        //0xd0
    } u1;                                                                   //0xd0
    struct _ALPC_PORT* TargetQueuePort;                                     //0xd4
    struct _ALPC_PORT* TargetSequencePort;                                  //0xd8
    struct _KALPC_MESSAGE* Message;                                         //0xdc
    ULONG MainQueueLength;                                                  //0xe0
    ULONG PendingQueueLength;                                               //0xe4
    ULONG LargeMessageQueueLength;                                          //0xe8
    ULONG CanceledQueueLength;                                              //0xec
    ULONG WaitQueueLength;                                                  //0xf0
};
/* Used in */
// _ALPC_COMMUNICATION_INFO
// _ALPC_DISPATCH_CONTEXT
// _ALPC_PORT
// _KALPC_MESSAGE
// _KALPC_RESERVE
// _KALPC_SECTION
// _KALPC_SECURITY_DATA
// _KALPC_VIEW

