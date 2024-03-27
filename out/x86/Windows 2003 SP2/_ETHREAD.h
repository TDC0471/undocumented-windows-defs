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

//0x250 bytes (sizeof)
struct _ETHREAD
{
    struct _KTHREAD Tcb;                                                    //0x0
    union _LARGE_INTEGER CreateTime;                                        //0x1b8
    union
    {
        union _LARGE_INTEGER ExitTime;                                      //0x1c0
        struct _LIST_ENTRY LpcReplyChain;                                   //0x1c0
        struct _LIST_ENTRY KeyedWaitChain;                                  //0x1c0
    };
    union
    {
        LONG ExitStatus;                                                    //0x1c8
        VOID* OfsChain;                                                     //0x1c8
    };
    struct _LIST_ENTRY PostBlockList;                                       //0x1cc
    union
    {
        struct _TERMINATION_PORT* TerminationPort;                          //0x1d4
        struct _ETHREAD* ReaperLink;                                        //0x1d4
        VOID* KeyedWaitValue;                                               //0x1d4
    };
    ULONG ActiveTimerListLock;                                              //0x1d8
    struct _LIST_ENTRY ActiveTimerListHead;                                 //0x1dc
    struct _CLIENT_ID Cid;                                                  //0x1e4
    union
    {
        struct _KSEMAPHORE LpcReplySemaphore;                               //0x1ec
        struct _KSEMAPHORE KeyedWaitSemaphore;                              //0x1ec
    };
    union
    {
        VOID* LpcReplyMessage;                                              //0x200
        VOID* LpcWaitingOnPort;                                             //0x200
    };
    struct _PS_IMPERSONATION_INFORMATION* ImpersonationInfo;                //0x204
    struct _LIST_ENTRY IrpList;                                             //0x208
    ULONG TopLevelIrp;                                                      //0x210
    struct _DEVICE_OBJECT* DeviceToVerify;                                  //0x214
    struct _EPROCESS* ThreadsProcess;                                       //0x218
    VOID* StartAddress;                                                     //0x21c
    union
    {
        VOID* Win32StartAddress;                                            //0x220
        ULONG LpcReceivedMessageId;                                         //0x220
    };
    struct _LIST_ENTRY ThreadListEntry;                                     //0x224
    struct _EX_RUNDOWN_REF RundownProtect;                                  //0x22c
    struct _EX_PUSH_LOCK ThreadLock;                                        //0x230
    ULONG LpcReplyMessageId;                                                //0x234
    ULONG ReadClusterSize;                                                  //0x238
    ULONG GrantedAccess;                                                    //0x23c
    union
    {
        ULONG CrossThreadFlags;                                             //0x240
        struct
        {
            ULONG Terminated:1;                                             //0x240
            ULONG DeadThread:1;                                             //0x240
            ULONG HideFromDebugger:1;                                       //0x240
            ULONG ActiveImpersonationInfo:1;                                //0x240
            ULONG SystemThread:1;                                           //0x240
            ULONG HardErrorsAreDisabled:1;                                  //0x240
            ULONG BreakOnTermination:1;                                     //0x240
            ULONG SkipCreationMsg:1;                                        //0x240
            ULONG SkipTerminationMsg:1;                                     //0x240
        };
    };
    union
    {
        ULONG SameThreadPassiveFlags;                                       //0x244
        struct
        {
            ULONG ActiveExWorker:1;                                         //0x244
            ULONG ExWorkerCanWaitUser:1;                                    //0x244
            ULONG MemoryMaker:1;                                            //0x244
            ULONG KeyedEventInUse:1;                                        //0x244
        };
    };
    union
    {
        ULONG SameThreadApcFlags;                                           //0x248
        struct
        {
            UCHAR LpcReceivedMsgIdValid:1;                                  //0x248
            UCHAR LpcExitThreadCalled:1;                                    //0x248
            UCHAR AddressSpaceOwner:1;                                      //0x248
            UCHAR OwnsProcessWorkingSetExclusive:1;                         //0x248
            UCHAR OwnsProcessWorkingSetShared:1;                            //0x248
            UCHAR OwnsSystemWorkingSetExclusive:1;                          //0x248
            UCHAR OwnsSystemWorkingSetShared:1;                             //0x248
            UCHAR OwnsSessionWorkingSetExclusive:1;                         //0x248
            UCHAR OwnsSessionWorkingSetShared:1;                            //0x249
            UCHAR ApcNeeded:1;                                              //0x249
        };
    };
    UCHAR ForwardClusterOnly;                                               //0x24c
    UCHAR DisablePageFaultClustering;                                       //0x24d
    UCHAR ActiveFaultCount;                                                 //0x24e
};
/* Used in */
// _EPROCESS
// _ETHREAD
// _IRP
// _LPCP_MESSAGE
// _LPCP_PORT_OBJECT
// _WMI_LOGGER_CONTEXT

