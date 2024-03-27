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

//0x1c0 bytes (sizeof)
struct _ALPC_PORT
{
    struct _LIST_ENTRY PortListEntry;                                       //0x0
    struct _ALPC_COMMUNICATION_INFO* CommunicationInfo;                     //0x10
    struct _EPROCESS* OwnerProcess;                                         //0x18
    VOID* CompletionPort;                                                   //0x20
    VOID* CompletionKey;                                                    //0x28
    struct _ALPC_COMPLETION_PACKET_LOOKASIDE* CompletionPacketLookaside;    //0x30
    VOID* PortContext;                                                      //0x38
    struct _SECURITY_CLIENT_CONTEXT StaticSecurity;                         //0x40
    struct _EX_PUSH_LOCK IncomingQueueLock;                                 //0x88
    struct _LIST_ENTRY MainQueue;                                           //0x90
    struct _LIST_ENTRY LargeMessageQueue;                                   //0xa0
    struct _EX_PUSH_LOCK PendingQueueLock;                                  //0xb0
    struct _LIST_ENTRY PendingQueue;                                        //0xb8
    struct _EX_PUSH_LOCK WaitQueueLock;                                     //0xc8
    struct _LIST_ENTRY WaitQueue;                                           //0xd0
    union
    {
        struct _KSEMAPHORE* Semaphore;                                      //0xe0
        struct _KEVENT* DummyEvent;                                         //0xe0
    };
    struct _ALPC_PORT_ATTRIBUTES PortAttributes;                            //0xe8
    struct _EX_PUSH_LOCK ResourceListLock;                                  //0x130
    struct _LIST_ENTRY ResourceListHead;                                    //0x138
    struct _EX_PUSH_LOCK PortObjectLock;                                    //0x148
    struct _ALPC_COMPLETION_LIST* CompletionList;                           //0x150
    struct _CALLBACK_OBJECT* CallbackObject;                                //0x158
    VOID* CallbackContext;                                                  //0x160
    struct _LIST_ENTRY CanceledQueue;                                       //0x168
    LONG SequenceNo;                                                        //0x178
    LONG ReferenceNo;                                                       //0x17c
    struct _PALPC_PORT_REFERENCE_WAIT_BLOCK* ReferenceNoWait;               //0x180
    union
    {
        struct
        {
            ULONG Initialized:1;                                            //0x188
            ULONG Type:2;                                                   //0x188
            ULONG ConnectionPending:1;                                      //0x188
            ULONG ConnectionRefused:1;                                      //0x188
            ULONG Disconnected:1;                                           //0x188
            ULONG Closed:1;                                                 //0x188
            ULONG NoFlushOnClose:1;                                         //0x188
            ULONG ReturnExtendedInfo:1;                                     //0x188
            ULONG Waitable:1;                                               //0x188
            ULONG DynamicSecurity:1;                                        //0x188
            ULONG Wow64CompletionList:1;                                    //0x188
            ULONG Lpc:1;                                                    //0x188
            ULONG LpcToLpc:1;                                               //0x188
            ULONG HasCompletionList:1;                                      //0x188
            ULONG HadCompletionList:1;                                      //0x188
            ULONG EnableCompletionList:1;                                   //0x188
        } s1;                                                               //0x188
        ULONG State;                                                        //0x188
    } u1;                                                                   //0x188
    struct _ALPC_PORT* TargetQueuePort;                                     //0x190
    struct _ALPC_PORT* TargetSequencePort;                                  //0x198
    struct _KALPC_MESSAGE* CachedMessage;                                   //0x1a0
    ULONG MainQueueLength;                                                  //0x1a8
    ULONG LargeMessageQueueLength;                                          //0x1ac
    ULONG PendingQueueLength;                                               //0x1b0
    ULONG CanceledQueueLength;                                              //0x1b4
    ULONG WaitQueueLength;                                                  //0x1b8
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

