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

//0xfc bytes (sizeof)
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
    struct _LIST_ENTRY MainQueue;                                           //0x5c
    struct _LIST_ENTRY PendingQueue;                                        //0x64
    struct _LIST_ENTRY LargeMessageQueue;                                   //0x6c
    struct _LIST_ENTRY WaitQueue;                                           //0x74
    union
    {
        struct _KSEMAPHORE* Semaphore;                                      //0x7c
        struct _KEVENT* DummyEvent;                                         //0x7c
    };
    struct _ALPC_PORT_ATTRIBUTES PortAttributes;                            //0x80
    struct _EX_PUSH_LOCK Lock;                                              //0xac
    struct _EX_PUSH_LOCK ResourceListLock;                                  //0xb0
    struct _LIST_ENTRY ResourceListHead;                                    //0xb4
    struct _ALPC_COMPLETION_LIST* CompletionList;                           //0xbc
    struct _ALPC_MESSAGE_ZONE* MessageZone;                                 //0xc0
    struct _CALLBACK_OBJECT* CallbackObject;                                //0xc4
    VOID* CallbackContext;                                                  //0xc8
    struct _LIST_ENTRY CanceledQueue;                                       //0xcc
    volatile LONG SequenceNo;                                               //0xd4
    union
    {
        struct
        {
            ULONG Initialized:1;                                            //0xd8
            ULONG Type:2;                                                   //0xd8
            ULONG ConnectionPending:1;                                      //0xd8
            ULONG ConnectionRefused:1;                                      //0xd8
            ULONG Disconnected:1;                                           //0xd8
            ULONG Closed:1;                                                 //0xd8
            ULONG NoFlushOnClose:1;                                         //0xd8
            ULONG ReturnExtendedInfo:1;                                     //0xd8
            ULONG Waitable:1;                                               //0xd8
            ULONG DynamicSecurity:1;                                        //0xd8
            ULONG Wow64CompletionList:1;                                    //0xd8
            ULONG Lpc:1;                                                    //0xd8
            ULONG LpcToLpc:1;                                               //0xd8
            ULONG HasCompletionList:1;                                      //0xd8
            ULONG HadCompletionList:1;                                      //0xd8
            ULONG EnableCompletionList:1;                                   //0xd8
        } s1;                                                               //0xd8
        ULONG State;                                                        //0xd8
    } u1;                                                                   //0xd8
    struct _ALPC_PORT* TargetQueuePort;                                     //0xdc
    struct _ALPC_PORT* TargetSequencePort;                                  //0xe0
    struct _KALPC_MESSAGE* volatile CachedMessage;                          //0xe4
    ULONG MainQueueLength;                                                  //0xe8
    ULONG PendingQueueLength;                                               //0xec
    ULONG LargeMessageQueueLength;                                          //0xf0
    ULONG CanceledQueueLength;                                              //0xf4
    ULONG WaitQueueLength;                                                  //0xf8
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

