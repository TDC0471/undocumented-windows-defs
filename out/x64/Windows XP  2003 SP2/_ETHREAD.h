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

//0x410 bytes (sizeof)
struct _ETHREAD
{
    struct _KTHREAD Tcb;                                                    //0x0
    union _LARGE_INTEGER CreateTime;                                        //0x308
    union
    {
        union _LARGE_INTEGER ExitTime;                                      //0x310
        struct _LIST_ENTRY LpcReplyChain;                                   //0x310
        struct _LIST_ENTRY KeyedWaitChain;                                  //0x310
    };
    union
    {
        LONG ExitStatus;                                                    //0x320
        VOID* OfsChain;                                                     //0x320
    };
    struct _LIST_ENTRY PostBlockList;                                       //0x328
    union
    {
        struct _TERMINATION_PORT* TerminationPort;                          //0x338
        struct _ETHREAD* ReaperLink;                                        //0x338
        VOID* KeyedWaitValue;                                               //0x338
    };
    ULONGLONG ActiveTimerListLock;                                          //0x340
    struct _LIST_ENTRY ActiveTimerListHead;                                 //0x348
    struct _CLIENT_ID Cid;                                                  //0x358
    union
    {
        struct _KSEMAPHORE LpcReplySemaphore;                               //0x368
        struct _KSEMAPHORE KeyedWaitSemaphore;                              //0x368
    };
    union
    {
        VOID* LpcReplyMessage;                                              //0x388
        VOID* LpcWaitingOnPort;                                             //0x388
    };
    struct _PS_IMPERSONATION_INFORMATION* ImpersonationInfo;                //0x390
    struct _LIST_ENTRY IrpList;                                             //0x398
    ULONGLONG TopLevelIrp;                                                  //0x3a8
    struct _DEVICE_OBJECT* DeviceToVerify;                                  //0x3b0
    struct _EPROCESS* ThreadsProcess;                                       //0x3b8
    VOID* StartAddress;                                                     //0x3c0
    union
    {
        VOID* Win32StartAddress;                                            //0x3c8
        ULONG LpcReceivedMessageId;                                         //0x3c8
    };
    struct _LIST_ENTRY ThreadListEntry;                                     //0x3d0
    struct _EX_RUNDOWN_REF RundownProtect;                                  //0x3e0
    struct _EX_PUSH_LOCK ThreadLock;                                        //0x3e8
    ULONG LpcReplyMessageId;                                                //0x3f0
    ULONG ReadClusterSize;                                                  //0x3f4
    ULONG GrantedAccess;                                                    //0x3f8
    union
    {
        ULONG CrossThreadFlags;                                             //0x3fc
        struct
        {
            ULONG Terminated:1;                                             //0x3fc
            ULONG DeadThread:1;                                             //0x3fc
            ULONG HideFromDebugger:1;                                       //0x3fc
            ULONG ActiveImpersonationInfo:1;                                //0x3fc
            ULONG SystemThread:1;                                           //0x3fc
            ULONG HardErrorsAreDisabled:1;                                  //0x3fc
            ULONG BreakOnTermination:1;                                     //0x3fc
            ULONG SkipCreationMsg:1;                                        //0x3fc
            ULONG SkipTerminationMsg:1;                                     //0x3fc
        };
    };
    union
    {
        ULONG SameThreadPassiveFlags;                                       //0x400
        struct
        {
            ULONG ActiveExWorker:1;                                         //0x400
            ULONG ExWorkerCanWaitUser:1;                                    //0x400
            ULONG MemoryMaker:1;                                            //0x400
            ULONG KeyedEventInUse:1;                                        //0x400
        };
    };
    union
    {
        ULONG SameThreadApcFlags;                                           //0x404
        struct
        {
            UCHAR LpcReceivedMsgIdValid:1;                                  //0x404
            UCHAR LpcExitThreadCalled:1;                                    //0x404
            UCHAR AddressSpaceOwner:1;                                      //0x404
            UCHAR OwnsProcessWorkingSetExclusive:1;                         //0x404
            UCHAR OwnsProcessWorkingSetShared:1;                            //0x404
            UCHAR OwnsSystemWorkingSetExclusive:1;                          //0x404
            UCHAR OwnsSystemWorkingSetShared:1;                             //0x404
            UCHAR OwnsSessionWorkingSetExclusive:1;                         //0x404
            UCHAR OwnsSessionWorkingSetShared:1;                            //0x405
            UCHAR ApcNeeded:1;                                              //0x405
        };
    };
    UCHAR ForwardClusterOnly;                                               //0x408
    UCHAR DisablePageFaultClustering;                                       //0x409
    UCHAR ActiveFaultCount;                                                 //0x40a
};
/* Used in */
// _EPROCESS
// _ETHREAD
// _IRP
// _LPCP_MESSAGE
// _LPCP_PORT_OBJECT
// _WMI_LOGGER_CONTEXT

