#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_ALPC_COMMUNICATION_INFO.h>
#include <_EPROCESS.h>
#include <_ALPC_COMPLETION_PACKET_LOOKASIDE.h>
#include <_SECURITY_CLIENT_CONTEXT.h>
#include <_EX_PUSH_LOCK.h>
#include <_KSEMAPHORE.h>
#include <_KEVENT.h>
#include <_ALPC_PORT_ATTRIBUTES.h>
#include <_ALPC_COMPLETION_LIST.h>
#include <_CALLBACK_OBJECT.h>
#include <_PALPC_PORT_REFERENCE_WAIT_BLOCK.h>
#include <_ALPC_PORT.h>
#include <_KALPC_MESSAGE.h>

//0x10c bytes (sizeof)
struct _ALPC_PORT
{
    struct _LIST_ENTRY PortListEntry;                                       //0x0
    struct _ALPC_COMMUNICATION_INFO* CommunicationInfo;                     //0x8
    struct _EPROCESS* OwnerProcess;                                         //0xc
    VOID* CompletionPort;                                                   //0x10
    VOID* CompletionKey;                                                    //0x14
    struct _ALPC_COMPLETION_PACKET_LOOKASIDE* CompletionPacketLookaside;    //0x18
    VOID* PortContext;                                                      //0x1c
    struct _SECURITY_CLIENT_CONTEXT StaticSecurity;                         //0x20
    struct _EX_PUSH_LOCK IncomingQueueLock;                                 //0x5c
    struct _LIST_ENTRY MainQueue;                                           //0x60
    struct _LIST_ENTRY LargeMessageQueue;                                   //0x68
    struct _EX_PUSH_LOCK PendingQueueLock;                                  //0x70
    struct _LIST_ENTRY PendingQueue;                                        //0x74
    struct _EX_PUSH_LOCK WaitQueueLock;                                     //0x7c
    struct _LIST_ENTRY WaitQueue;                                           //0x80
    union
    {
        struct _KSEMAPHORE* Semaphore;                                      //0x88
        struct _KEVENT* DummyEvent;                                         //0x88
    };
    struct _ALPC_PORT_ATTRIBUTES PortAttributes;                            //0x8c
    struct _EX_PUSH_LOCK ResourceListLock;                                  //0xb8
    struct _LIST_ENTRY ResourceListHead;                                    //0xbc
    struct _EX_PUSH_LOCK PortObjectLock;                                    //0xc4
    struct _ALPC_COMPLETION_LIST* CompletionList;                           //0xc8
    struct _CALLBACK_OBJECT* CallbackObject;                                //0xcc
    VOID* CallbackContext;                                                  //0xd0
    struct _LIST_ENTRY CanceledQueue;                                       //0xd4
    LONG SequenceNo;                                                        //0xdc
    LONG ReferenceNo;                                                       //0xe0
    struct _PALPC_PORT_REFERENCE_WAIT_BLOCK* ReferenceNoWait;               //0xe4
    union
    {
        struct
        {
            ULONG Initialized:1;                                            //0xe8
            ULONG Type:2;                                                   //0xe8
            ULONG ConnectionPending:1;                                      //0xe8
            ULONG ConnectionRefused:1;                                      //0xe8
            ULONG Disconnected:1;                                           //0xe8
            ULONG Closed:1;                                                 //0xe8
            ULONG NoFlushOnClose:1;                                         //0xe8
            ULONG ReturnExtendedInfo:1;                                     //0xe8
            ULONG Waitable:1;                                               //0xe8
            ULONG DynamicSecurity:1;                                        //0xe8
            ULONG Wow64CompletionList:1;                                    //0xe8
            ULONG Lpc:1;                                                    //0xe8
            ULONG LpcToLpc:1;                                               //0xe8
            ULONG HasCompletionList:1;                                      //0xe8
            ULONG HadCompletionList:1;                                      //0xe8
            ULONG EnableCompletionList:1;                                   //0xe8
        } s1;                                                               //0xe8
        ULONG State;                                                        //0xe8
    } u1;                                                                   //0xe8
    struct _ALPC_PORT* TargetQueuePort;                                     //0xec
    struct _ALPC_PORT* TargetSequencePort;                                  //0xf0
    struct _KALPC_MESSAGE* CachedMessage;                                   //0xf4
    ULONG MainQueueLength;                                                  //0xf8
    ULONG LargeMessageQueueLength;                                          //0xfc
    ULONG PendingQueueLength;                                               //0x100
    ULONG CanceledQueueLength;                                              //0x104
    ULONG WaitQueueLength;                                                  //0x108
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

