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

//0x288 bytes (sizeof)
struct _ETHREAD
{
    struct _KTHREAD Tcb;                                                    //0x0
    union _LARGE_INTEGER CreateTime;                                        //0x1e0
    union
    {
        union _LARGE_INTEGER ExitTime;                                      //0x1e8
        struct _LIST_ENTRY KeyedWaitChain;                                  //0x1e8
    };
    union
    {
        LONG ExitStatus;                                                    //0x1f0
        VOID* OfsChain;                                                     //0x1f0
    };
    union
    {
        struct _LIST_ENTRY PostBlockList;                                   //0x1f4
        struct
        {
            VOID* ForwardLinkShadow;                                        //0x1f4
            VOID* StartAddress;                                             //0x1f8
        };
    };
    union
    {
        struct _TERMINATION_PORT* TerminationPort;                          //0x1fc
        struct _ETHREAD* ReaperLink;                                        //0x1fc
        VOID* KeyedWaitValue;                                               //0x1fc
        VOID* Win32StartParameter;                                          //0x1fc
    };
    ULONG ActiveTimerListLock;                                              //0x200
    struct _LIST_ENTRY ActiveTimerListHead;                                 //0x204
    struct _CLIENT_ID Cid;                                                  //0x20c
    union
    {
        struct _KSEMAPHORE KeyedWaitSemaphore;                              //0x214
        struct _KSEMAPHORE AlpcWaitSemaphore;                               //0x214
    };
    union _PS_CLIENT_SECURITY_CONTEXT ClientSecurity;                       //0x228
    struct _LIST_ENTRY IrpList;                                             //0x22c
    ULONG TopLevelIrp;                                                      //0x234
    struct _DEVICE_OBJECT* DeviceToVerify;                                  //0x238
    union _PSP_RATE_APC* RateControlApc;                                    //0x23c
    VOID* Win32StartAddress;                                                //0x240
    VOID* SparePtr0;                                                        //0x244
    struct _LIST_ENTRY ThreadListEntry;                                     //0x248
    struct _EX_RUNDOWN_REF RundownProtect;                                  //0x250
    struct _EX_PUSH_LOCK ThreadLock;                                        //0x254
    ULONG ReadClusterSize;                                                  //0x258
    volatile LONG MmLockOrdering;                                           //0x25c
    union
    {
        ULONG CrossThreadFlags;                                             //0x260
        struct
        {
            ULONG Terminated:1;                                             //0x260
            ULONG ThreadInserted:1;                                         //0x260
            ULONG HideFromDebugger:1;                                       //0x260
            ULONG ActiveImpersonationInfo:1;                                //0x260
            ULONG SystemThread:1;                                           //0x260
            ULONG HardErrorsAreDisabled:1;                                  //0x260
            ULONG BreakOnTermination:1;                                     //0x260
            ULONG SkipCreationMsg:1;                                        //0x260
            ULONG SkipTerminationMsg:1;                                     //0x260
            ULONG CopyTokenOnOpen:1;                                        //0x260
            ULONG ThreadIoPriority:3;                                       //0x260
            ULONG ThreadPagePriority:3;                                     //0x260
            ULONG RundownFail:1;                                            //0x260
        };
    };
    union
    {
        ULONG SameThreadPassiveFlags;                                       //0x264
        struct
        {
            ULONG ActiveExWorker:1;                                         //0x264
            ULONG ExWorkerCanWaitUser:1;                                    //0x264
            ULONG MemoryMaker:1;                                            //0x264
            ULONG ClonedThread:1;                                           //0x264
            ULONG KeyedEventInUse:1;                                        //0x264
            ULONG RateApcState:2;                                           //0x264
            ULONG SelfTerminate:1;                                          //0x264
        };
    };
    union
    {
        ULONG SameThreadApcFlags;                                           //0x268
        struct
        {
            UCHAR Spare:1;                                                  //0x268
            volatile UCHAR StartAddressInvalid:1;                           //0x268
            UCHAR EtwPageFaultCalloutActive:1;                              //0x268
            UCHAR OwnsProcessWorkingSetExclusive:1;                         //0x268
            UCHAR OwnsProcessWorkingSetShared:1;                            //0x268
            UCHAR OwnsSystemWorkingSetExclusive:1;                          //0x268
            UCHAR OwnsSystemWorkingSetShared:1;                             //0x268
            UCHAR OwnsSessionWorkingSetExclusive:1;                         //0x268
            UCHAR OwnsSessionWorkingSetShared:1;                            //0x269
            UCHAR OwnsProcessAddressSpaceExclusive:1;                       //0x269
            UCHAR OwnsProcessAddressSpaceShared:1;                          //0x269
            UCHAR SuppressSymbolLoad:1;                                     //0x269
            UCHAR Prefetching:1;                                            //0x269
            UCHAR OwnsDynamicMemoryShared:1;                                //0x269
            UCHAR OwnsChangeControlAreaExclusive:1;                         //0x269
            UCHAR OwnsChangeControlAreaShared:1;                            //0x269
            UCHAR Spare1:8;                                                 //0x26a
            UCHAR PriorityRegionActive;                                     //0x26b
        };
    };
    UCHAR CacheManagerActive;                                               //0x26c
    UCHAR DisablePageFaultClustering;                                       //0x26d
    UCHAR ActiveFaultCount;                                                 //0x26e
    ULONG AlpcMessageId;                                                    //0x270
    union
    {
        VOID* AlpcMessage;                                                  //0x274
        ULONG AlpcReceiveAttributeSet;                                      //0x274
    };
    struct _LIST_ENTRY AlpcWaitListEntry;                                   //0x278
    ULONG CacheManagerCount;                                                //0x280
};
/* Used in */
// _ALPC_DISPATCH_CONTEXT
// _EPROCESS
// _ETHREAD
// _IRP
// _KALPC_MESSAGE
// _LPCP_MESSAGE
// _LPCP_PORT_OBJECT
// _POP_DISPLAY_RESUME_CONTEXT
// _VF_POOL_TRACE
// _VI_FAULT_TRACE
// _WMI_LOGGER_CONTEXT

