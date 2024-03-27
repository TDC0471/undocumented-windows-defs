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

//0x11c bytes (sizeof)
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
    struct _EX_PUSH_LOCK DirectQueueLock;                                   //0x7c
    struct _LIST_ENTRY DirectQueue;                                         //0x80
    struct _EX_PUSH_LOCK WaitQueueLock;                                     //0x88
    struct _LIST_ENTRY WaitQueue;                                           //0x8c
    union
    {
        struct _KSEMAPHORE* Semaphore;                                      //0x94
        struct _KEVENT* DummyEvent;                                         //0x94
    };
    struct _ALPC_PORT_ATTRIBUTES PortAttributes;                            //0x98
    struct _EX_PUSH_LOCK ResourceListLock;                                  //0xc4
    struct _LIST_ENTRY ResourceListHead;                                    //0xc8
    struct _EX_PUSH_LOCK PortObjectLock;                                    //0xd0
    struct _ALPC_COMPLETION_LIST* CompletionList;                           //0xd4
    struct _CALLBACK_OBJECT* CallbackObject;                                //0xd8
    VOID* CallbackContext;                                                  //0xdc
    struct _LIST_ENTRY CanceledQueue;                                       //0xe0
    LONG SequenceNo;                                                        //0xe8
    LONG ReferenceNo;                                                       //0xec
    struct _PALPC_PORT_REFERENCE_WAIT_BLOCK* ReferenceNoWait;               //0xf0
    union
    {
        struct
        {
            ULONG Initialized:1;                                            //0xf4
            ULONG Type:2;                                                   //0xf4
            ULONG ConnectionPending:1;                                      //0xf4
            ULONG ConnectionRefused:1;                                      //0xf4
            ULONG Disconnected:1;                                           //0xf4
            ULONG Closed:1;                                                 //0xf4
            ULONG NoFlushOnClose:1;                                         //0xf4
            ULONG ReturnExtendedInfo:1;                                     //0xf4
            ULONG Waitable:1;                                               //0xf4
            ULONG DynamicSecurity:1;                                        //0xf4
            ULONG Wow64CompletionList:1;                                    //0xf4
            ULONG Lpc:1;                                                    //0xf4
            ULONG LpcToLpc:1;                                               //0xf4
            ULONG HasCompletionList:1;                                      //0xf4
            ULONG HadCompletionList:1;                                      //0xf4
            ULONG EnableCompletionList:1;                                   //0xf4
        } s1;                                                               //0xf4
        ULONG State;                                                        //0xf4
    } u1;                                                                   //0xf4
    struct _ALPC_PORT* TargetQueuePort;                                     //0xf8
    struct _ALPC_PORT* TargetSequencePort;                                  //0xfc
    struct _KALPC_MESSAGE* CachedMessage;                                   //0x100
    ULONG MainQueueLength;                                                  //0x104
    ULONG LargeMessageQueueLength;                                          //0x108
    ULONG PendingQueueLength;                                               //0x10c
    ULONG DirectQueueLength;                                                //0x110
    ULONG CanceledQueueLength;                                              //0x114
    ULONG WaitQueueLength;                                                  //0x118
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

