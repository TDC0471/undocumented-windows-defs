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

//0x198 bytes (sizeof)
struct _ALPC_PORT
{
    struct _LIST_ENTRY PortListEntry;                                       //0x0
    struct _ALPC_COMMUNICATION_INFO* CommunicationInfo;                     //0x10
    struct _EPROCESS* OwnerProcess;                                         //0x18
    ULONG SequenceNo;                                                       //0x20
    VOID* CompletionPort;                                                   //0x28
    VOID* CompletionKey;                                                    //0x30
    struct _ALPC_COMPLETION_PACKET_LOOKASIDE* CompletionPacketLookaside;    //0x38
    VOID* PortContext;                                                      //0x40
    struct _SECURITY_CLIENT_CONTEXT StaticSecurity;                         //0x48
    struct _LIST_ENTRY MainQueue;                                           //0x90
    struct _LIST_ENTRY PendingQueue;                                        //0xa0
    struct _LIST_ENTRY LargeMessageQueue;                                   //0xb0
    struct _LIST_ENTRY WaitQueue;                                           //0xc0
    union
    {
        struct _KSEMAPHORE* Semaphore;                                      //0xd0
        struct _KEVENT* DummyEvent;                                         //0xd0
    };
    struct _EX_PUSH_LOCK Lock;                                              //0xd8
    struct _ALPC_PORT_ATTRIBUTES PortAttributes;                            //0xe0
    struct _EX_PUSH_LOCK ResourceListLock;                                  //0x128
    struct _LIST_ENTRY ResourceListHead;                                    //0x130
    struct _ALPC_COMPLETION_LIST* CompletionList;                           //0x140
    struct _ALPC_MESSAGE_ZONE* MessageZone;                                 //0x148
    struct _LIST_ENTRY CanceledQueue;                                       //0x150
    union
    {
        struct
        {
            ULONG Initialized:1;                                            //0x160
            ULONG Type:2;                                                   //0x160
            ULONG ConnectionPending:1;                                      //0x160
            ULONG ConnectionRefused:1;                                      //0x160
            ULONG Disconnected:1;                                           //0x160
            ULONG Closed:1;                                                 //0x160
            ULONG NoFlushOnClose:1;                                         //0x160
            ULONG ReturnExtendedInfo:1;                                     //0x160
            ULONG Waitable:1;                                               //0x160
            ULONG DynamicSecurity:1;                                        //0x160
            ULONG Wow64CompletionList:1;                                    //0x160
            ULONG Lpc:1;                                                    //0x160
            ULONG LpcToLpc:1;                                               //0x160
            ULONG HasCompletionList:1;                                      //0x160
            ULONG HadCompletionList:1;                                      //0x160
        } s1;                                                               //0x160
        ULONG State;                                                        //0x160
    } u1;                                                                   //0x160
    struct _ALPC_PORT* TargetQueuePort;                                     //0x168
    struct _ALPC_PORT* TargetSequencePort;                                  //0x170
    struct _KALPC_MESSAGE* Message;                                         //0x178
    ULONG MainQueueLength;                                                  //0x180
    ULONG PendingQueueLength;                                               //0x184
    ULONG LargeMessageQueueLength;                                          //0x188
    ULONG CanceledQueueLength;                                              //0x18c
    ULONG WaitQueueLength;                                                  //0x190
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

