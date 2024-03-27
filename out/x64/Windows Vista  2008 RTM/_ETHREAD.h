#pragma once
/* ------------------ */

#include <_KTHREAD.h>
#include <_LARGE_INTEGER.h>
#include <_LIST_ENTRY.h>
#include <_TERMINATION_PORT.h>
#include <_ETHREAD.h>
#include <_CLIENT_ID.h>
#include <_KSEMAPHORE.h>
#include <_PS_CLIENT_SECURITY_CONTEXT.h>
#include <_DEVICE_OBJECT.h>
#include <_PSP_RATE_APC.h>
#include <_EX_RUNDOWN_REF.h>
#include <_EX_PUSH_LOCK.h>

//0x450 bytes (sizeof)
struct _ETHREAD
{
    struct _KTHREAD Tcb;                                                    //0x0
    union _LARGE_INTEGER CreateTime;                                        //0x330
    union
    {
        union _LARGE_INTEGER ExitTime;                                      //0x338
        struct _LIST_ENTRY KeyedWaitChain;                                  //0x338
    };
    union
    {
        LONG ExitStatus;                                                    //0x348
        VOID* OfsChain;                                                     //0x348
    };
    union
    {
        struct _LIST_ENTRY PostBlockList;                                   //0x350
        struct
        {
            VOID* ForwardLinkShadow;                                        //0x350
            VOID* StartAddress;                                             //0x358
        };
    };
    union
    {
        struct _TERMINATION_PORT* TerminationPort;                          //0x360
        struct _ETHREAD* ReaperLink;                                        //0x360
        VOID* KeyedWaitValue;                                               //0x360
        VOID* Win32StartParameter;                                          //0x360
    };
    ULONGLONG ActiveTimerListLock;                                          //0x368
    struct _LIST_ENTRY ActiveTimerListHead;                                 //0x370
    struct _CLIENT_ID Cid;                                                  //0x380
    union
    {
        struct _KSEMAPHORE KeyedWaitSemaphore;                              //0x390
        struct _KSEMAPHORE AlpcWaitSemaphore;                               //0x390
    };
    union _PS_CLIENT_SECURITY_CONTEXT ClientSecurity;                       //0x3b0
    struct _LIST_ENTRY IrpList;                                             //0x3b8
    ULONGLONG TopLevelIrp;                                                  //0x3c8
    struct _DEVICE_OBJECT* DeviceToVerify;                                  //0x3d0
    union _PSP_RATE_APC* RateControlApc;                                    //0x3d8
    VOID* Win32StartAddress;                                                //0x3e0
    VOID* SparePtr0;                                                        //0x3e8
    struct _LIST_ENTRY ThreadListEntry;                                     //0x3f0
    struct _EX_RUNDOWN_REF RundownProtect;                                  //0x400
    struct _EX_PUSH_LOCK ThreadLock;                                        //0x408
    ULONG ReadClusterSize;                                                  //0x410
    volatile LONG MmLockOrdering;                                           //0x414
    union
    {
        ULONG CrossThreadFlags;                                             //0x418
        struct
        {
            ULONG Terminated:1;                                             //0x418
            ULONG ThreadInserted:1;                                         //0x418
            ULONG HideFromDebugger:1;                                       //0x418
            ULONG ActiveImpersonationInfo:1;                                //0x418
            ULONG SystemThread:1;                                           //0x418
            ULONG HardErrorsAreDisabled:1;                                  //0x418
            ULONG BreakOnTermination:1;                                     //0x418
            ULONG SkipCreationMsg:1;                                        //0x418
            ULONG SkipTerminationMsg:1;                                     //0x418
            ULONG CopyTokenOnOpen:1;                                        //0x418
            ULONG ThreadIoPriority:3;                                       //0x418
            ULONG ThreadPagePriority:3;                                     //0x418
            ULONG RundownFail:1;                                            //0x418
        };
    };
    union
    {
        ULONG SameThreadPassiveFlags;                                       //0x41c
        struct
        {
            ULONG ActiveExWorker:1;                                         //0x41c
            ULONG ExWorkerCanWaitUser:1;                                    //0x41c
            ULONG MemoryMaker:1;                                            //0x41c
            ULONG ClonedThread:1;                                           //0x41c
            ULONG KeyedEventInUse:1;                                        //0x41c
            ULONG RateApcState:2;                                           //0x41c
            ULONG SelfTerminate:1;                                          //0x41c
        };
    };
    union
    {
        ULONG SameThreadApcFlags;                                           //0x420
        struct
        {
            UCHAR Spare:1;                                                  //0x420
            volatile UCHAR StartAddressInvalid:1;                           //0x420
            UCHAR EtwPageFaultCalloutActive:1;                              //0x420
            UCHAR OwnsProcessWorkingSetExclusive:1;                         //0x420
            UCHAR OwnsProcessWorkingSetShared:1;                            //0x420
            UCHAR OwnsSystemWorkingSetExclusive:1;                          //0x420
            UCHAR OwnsSystemWorkingSetShared:1;                             //0x420
            UCHAR OwnsSessionWorkingSetExclusive:1;                         //0x420
            UCHAR OwnsSessionWorkingSetShared:1;                            //0x421
            UCHAR OwnsProcessAddressSpaceExclusive:1;                       //0x421
            UCHAR OwnsProcessAddressSpaceShared:1;                          //0x421
            UCHAR SuppressSymbolLoad:1;                                     //0x421
            UCHAR Prefetching:1;                                            //0x421
            UCHAR OwnsDynamicMemoryShared:1;                                //0x421
            UCHAR OwnsChangeControlAreaExclusive:1;                         //0x421
            UCHAR OwnsChangeControlAreaShared:1;                            //0x421
            USHORT PriorityRegionActive:4;                                  //0x422
        };
    };
    UCHAR CacheManagerActive;                                               //0x424
    UCHAR DisablePageFaultClustering;                                       //0x425
    UCHAR ActiveFaultCount;                                                 //0x426
    ULONGLONG AlpcMessageId;                                                //0x428
    union
    {
        VOID* AlpcMessage;                                                  //0x430
        ULONG AlpcReceiveAttributeSet;                                      //0x430
    };
    struct _LIST_ENTRY AlpcWaitListEntry;                                   //0x438
    ULONG CacheManagerCount;                                                //0x448
};
/* Used in */
// _EPROCESS
// _ETHREAD
// _IRP
// _LPCP_MESSAGE
// _LPCP_PORT_OBJECT
// _POP_DISPLAY_RESUME_CONTEXT
// _VF_POOL_TRACE
// _WMI_LOGGER_CONTEXT

