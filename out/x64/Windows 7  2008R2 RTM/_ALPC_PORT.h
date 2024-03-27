#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_ALPC_COMMUNICATION_INFO.h>
#include <_EPROCESS.h>
#include <_ALPC_COMPLETION_PACKET_LOOKASIDE.h>
#include <_SECURITY_CLIENT_CONTEXT.h>
#include <_KSEMAPHORE.h>
#include <_KEVENT.h>
#include <_ALPC_PORT_ATTRIBUTES.h>
#include <_EX_PUSH_LOCK.h>
#include <_ALPC_COMPLETION_LIST.h>
#include <_ALPC_MESSAGE_ZONE.h>
#include <_CALLBACK_OBJECT.h>
#include <_ALPC_PORT.h>
#include <_KALPC_MESSAGE.h>

//0x1a0 bytes (sizeof)
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
    struct _LIST_ENTRY MainQueue;                                           //0x88
    struct _LIST_ENTRY PendingQueue;                                        //0x98
    struct _LIST_ENTRY LargeMessageQueue;                                   //0xa8
    struct _LIST_ENTRY WaitQueue;                                           //0xb8
    union
    {
        struct _KSEMAPHORE* Semaphore;                                      //0xc8
        struct _KEVENT* DummyEvent;                                         //0xc8
    };
    struct _ALPC_PORT_ATTRIBUTES PortAttributes;                            //0xd0
    struct _EX_PUSH_LOCK Lock;                                              //0x118
    struct _EX_PUSH_LOCK ResourceListLock;                                  //0x120
    struct _LIST_ENTRY ResourceListHead;                                    //0x128
    struct _ALPC_COMPLETION_LIST* CompletionList;                           //0x138
    struct _ALPC_MESSAGE_ZONE* MessageZone;                                 //0x140
    struct _CALLBACK_OBJECT* CallbackObject;                                //0x148
    VOID* CallbackContext;                                                  //0x150
    struct _LIST_ENTRY CanceledQueue;                                       //0x158
    volatile LONG SequenceNo;                                               //0x168
    union
    {
        struct
        {
            ULONG Initialized:1;                                            //0x16c
            ULONG Type:2;                                                   //0x16c
            ULONG ConnectionPending:1;                                      //0x16c
            ULONG ConnectionRefused:1;                                      //0x16c
            ULONG Disconnected:1;                                           //0x16c
            ULONG Closed:1;                                                 //0x16c
            ULONG NoFlushOnClose:1;                                         //0x16c
            ULONG ReturnExtendedInfo:1;                                     //0x16c
            ULONG Waitable:1;                                               //0x16c
            ULONG DynamicSecurity:1;                                        //0x16c
            ULONG Wow64CompletionList:1;                                    //0x16c
            ULONG Lpc:1;                                                    //0x16c
            ULONG LpcToLpc:1;                                               //0x16c
            ULONG HasCompletionList:1;                                      //0x16c
            ULONG HadCompletionList:1;                                      //0x16c
            ULONG EnableCompletionList:1;                                   //0x16c
        } s1;                                                               //0x16c
        ULONG State;                                                        //0x16c
    } u1;                                                                   //0x16c
    struct _ALPC_PORT* TargetQueuePort;                                     //0x170
    struct _ALPC_PORT* TargetSequencePort;                                  //0x178
    struct _KALPC_MESSAGE* volatile CachedMessage;                          //0x180
    ULONG MainQueueLength;                                                  //0x188
    ULONG PendingQueueLength;                                               //0x18c
    ULONG LargeMessageQueueLength;                                          //0x190
    ULONG CanceledQueueLength;                                              //0x194
    ULONG WaitQueueLength;                                                  //0x198
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

