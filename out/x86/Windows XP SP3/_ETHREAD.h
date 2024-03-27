#pragma once
/* ------------------ */

#include <_KTHREAD.h>
#include <_LARGE_INTEGER.h>
#include <_LIST_ENTRY.h>
#include <_TERMINATION_PORT.h>
#include <_ETHREAD.h>
#include <_CLIENT_ID.h>
#include <_KSEMAPHORE.h>
#include <_PS_IMPERSONATION_INFORMATION.h>
#include <_DEVICE_OBJECT.h>
#include <_EPROCESS.h>
#include <_EX_RUNDOWN_REF.h>
#include <_EX_PUSH_LOCK.h>

//0x258 bytes (sizeof)
struct _ETHREAD
{
    struct _KTHREAD Tcb;                                                    //0x0
    union
    {
        union _LARGE_INTEGER CreateTime;                                    //0x1c0
        struct
        {
            ULONG NestedFaultCount:2;                                       //0x1c0
            ULONG ApcNeeded:1;                                              //0x1c0
        };
    };
    union
    {
        union _LARGE_INTEGER ExitTime;                                      //0x1c8
        struct _LIST_ENTRY LpcReplyChain;                                   //0x1c8
        struct _LIST_ENTRY KeyedWaitChain;                                  //0x1c8
    };
    union
    {
        LONG ExitStatus;                                                    //0x1d0
        VOID* OfsChain;                                                     //0x1d0
    };
    struct _LIST_ENTRY PostBlockList;                                       //0x1d4
    union
    {
        struct _TERMINATION_PORT* TerminationPort;                          //0x1dc
        struct _ETHREAD* ReaperLink;                                        //0x1dc
        VOID* KeyedWaitValue;                                               //0x1dc
    };
    ULONG ActiveTimerListLock;                                              //0x1e0
    struct _LIST_ENTRY ActiveTimerListHead;                                 //0x1e4
    struct _CLIENT_ID Cid;                                                  //0x1ec
    union
    {
        struct _KSEMAPHORE LpcReplySemaphore;                               //0x1f4
        struct _KSEMAPHORE KeyedWaitSemaphore;                              //0x1f4
    };
    union
    {
        VOID* LpcReplyMessage;                                              //0x208
        VOID* LpcWaitingOnPort;                                             //0x208
    };
    struct _PS_IMPERSONATION_INFORMATION* ImpersonationInfo;                //0x20c
    struct _LIST_ENTRY IrpList;                                             //0x210
    ULONG TopLevelIrp;                                                      //0x218
    struct _DEVICE_OBJECT* DeviceToVerify;                                  //0x21c
    struct _EPROCESS* ThreadsProcess;                                       //0x220
    VOID* StartAddress;                                                     //0x224
    union
    {
        VOID* Win32StartAddress;                                            //0x228
        ULONG LpcReceivedMessageId;                                         //0x228
    };
    struct _LIST_ENTRY ThreadListEntry;                                     //0x22c
    struct _EX_RUNDOWN_REF RundownProtect;                                  //0x234
    struct _EX_PUSH_LOCK ThreadLock;                                        //0x238
    ULONG LpcReplyMessageId;                                                //0x23c
    ULONG ReadClusterSize;                                                  //0x240
    ULONG GrantedAccess;                                                    //0x244
    union
    {
        ULONG CrossThreadFlags;                                             //0x248
        struct
        {
            ULONG Terminated:1;                                             //0x248
            ULONG DeadThread:1;                                             //0x248
            ULONG HideFromDebugger:1;                                       //0x248
            ULONG ActiveImpersonationInfo:1;                                //0x248
            ULONG SystemThread:1;                                           //0x248
            ULONG HardErrorsAreDisabled:1;                                  //0x248
            ULONG BreakOnTermination:1;                                     //0x248
            ULONG SkipCreationMsg:1;                                        //0x248
            ULONG SkipTerminationMsg:1;                                     //0x248
        };
    };
    union
    {
        ULONG SameThreadPassiveFlags;                                       //0x24c
        struct
        {
            ULONG ActiveExWorker:1;                                         //0x24c
            ULONG ExWorkerCanWaitUser:1;                                    //0x24c
            ULONG MemoryMaker:1;                                            //0x24c
        };
    };
    union
    {
        ULONG SameThreadApcFlags;                                           //0x250
        struct
        {
            UCHAR LpcReceivedMsgIdValid:1;                                  //0x250
            UCHAR LpcExitThreadCalled:1;                                    //0x250
            UCHAR AddressSpaceOwner:1;                                      //0x250
        };
    };
    UCHAR ForwardClusterOnly;                                               //0x254
    UCHAR DisablePageFaultClustering;                                       //0x255
};
/* Used in */
// _EPROCESS
// _ETHREAD
// _IRP
// _LPCP_MESSAGE
// _LPCP_PORT_OBJECT
// _MM_SESSION_SPACE
// _WMI_LOGGER_CONTEXT

