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
#include <_PSP_CPU_QUOTA_APC.h>
#include <_EX_RUNDOWN_REF.h>
#include <_EX_PUSH_LOCK.h>
#include <_SINGLE_LIST_ENTRY.h>

//0x498 bytes (sizeof)
struct _ETHREAD
{
    struct _KTHREAD Tcb;                                                    //0x0
    union _LARGE_INTEGER CreateTime;                                        //0x360
    union
    {
        union _LARGE_INTEGER ExitTime;                                      //0x368
        struct _LIST_ENTRY KeyedWaitChain;                                  //0x368
    };
    LONG ExitStatus;                                                        //0x378
    union
    {
        struct _LIST_ENTRY PostBlockList;                                   //0x380
        struct
        {
            VOID* ForwardLinkShadow;                                        //0x380
            VOID* StartAddress;                                             //0x388
        };
    };
    union
    {
        struct _TERMINATION_PORT* TerminationPort;                          //0x390
        struct _ETHREAD* ReaperLink;                                        //0x390
        VOID* KeyedWaitValue;                                               //0x390
    };
    ULONGLONG ActiveTimerListLock;                                          //0x398
    struct _LIST_ENTRY ActiveTimerListHead;                                 //0x3a0
    struct _CLIENT_ID Cid;                                                  //0x3b0
    union
    {
        struct _KSEMAPHORE KeyedWaitSemaphore;                              //0x3c0
        struct _KSEMAPHORE AlpcWaitSemaphore;                               //0x3c0
    };
    union _PS_CLIENT_SECURITY_CONTEXT ClientSecurity;                       //0x3e0
    struct _LIST_ENTRY IrpList;                                             //0x3e8
    ULONGLONG TopLevelIrp;                                                  //0x3f8
    struct _DEVICE_OBJECT* DeviceToVerify;                                  //0x400
    union _PSP_CPU_QUOTA_APC* CpuQuotaApc;                                  //0x408
    VOID* Win32StartAddress;                                                //0x410
    VOID* LegacyPowerObject;                                                //0x418
    struct _LIST_ENTRY ThreadListEntry;                                     //0x420
    struct _EX_RUNDOWN_REF RundownProtect;                                  //0x430
    struct _EX_PUSH_LOCK ThreadLock;                                        //0x438
    ULONG ReadClusterSize;                                                  //0x440
    volatile LONG MmLockOrdering;                                           //0x444
    union
    {
        ULONG CrossThreadFlags;                                             //0x448
        struct
        {
            ULONG Terminated:1;                                             //0x448
            ULONG ThreadInserted:1;                                         //0x448
            ULONG HideFromDebugger:1;                                       //0x448
            ULONG ActiveImpersonationInfo:1;                                //0x448
            ULONG Reserved:1;                                               //0x448
            ULONG HardErrorsAreDisabled:1;                                  //0x448
            ULONG BreakOnTermination:1;                                     //0x448
            ULONG SkipCreationMsg:1;                                        //0x448
            ULONG SkipTerminationMsg:1;                                     //0x448
            ULONG CopyTokenOnOpen:1;                                        //0x448
            ULONG ThreadIoPriority:3;                                       //0x448
            ULONG ThreadPagePriority:3;                                     //0x448
            ULONG RundownFail:1;                                            //0x448
            ULONG NeedsWorkingSetAging:1;                                   //0x448
        };
    };
    union
    {
        ULONG SameThreadPassiveFlags;                                       //0x44c
        struct
        {
            ULONG ActiveExWorker:1;                                         //0x44c
            ULONG ExWorkerCanWaitUser:1;                                    //0x44c
            ULONG MemoryMaker:1;                                            //0x44c
            ULONG ClonedThread:1;                                           //0x44c
            ULONG KeyedEventInUse:1;                                        //0x44c
            ULONG RateApcState:2;                                           //0x44c
            ULONG SelfTerminate:1;                                          //0x44c
        };
    };
    union
    {
        ULONG SameThreadApcFlags;                                           //0x450
        struct
        {
            UCHAR Spare:1;                                                  //0x450
            volatile UCHAR StartAddressInvalid:1;                           //0x450
            UCHAR EtwPageFaultCalloutActive:1;                              //0x450
            UCHAR OwnsProcessWorkingSetExclusive:1;                         //0x450
            UCHAR OwnsProcessWorkingSetShared:1;                            //0x450
            UCHAR OwnsSystemCacheWorkingSetExclusive:1;                     //0x450
            UCHAR OwnsSystemCacheWorkingSetShared:1;                        //0x450
            UCHAR OwnsSessionWorkingSetExclusive:1;                         //0x450
            UCHAR OwnsSessionWorkingSetShared:1;                            //0x451
            UCHAR OwnsProcessAddressSpaceExclusive:1;                       //0x451
            UCHAR OwnsProcessAddressSpaceShared:1;                          //0x451
            UCHAR SuppressSymbolLoad:1;                                     //0x451
            UCHAR Prefetching:1;                                            //0x451
            UCHAR OwnsDynamicMemoryShared:1;                                //0x451
            UCHAR OwnsChangeControlAreaExclusive:1;                         //0x451
            UCHAR OwnsChangeControlAreaShared:1;                            //0x451
            UCHAR OwnsPagedPoolWorkingSetExclusive:1;                       //0x452
            UCHAR OwnsPagedPoolWorkingSetShared:1;                          //0x452
            UCHAR OwnsSystemPtesWorkingSetExclusive:1;                      //0x452
            UCHAR OwnsSystemPtesWorkingSetShared:1;                         //0x452
            UCHAR TrimTrigger:2;                                            //0x452
            UCHAR Spare1:2;                                                 //0x452
            UCHAR PriorityRegionActive;                                     //0x453
        };
    };
    UCHAR CacheManagerActive;                                               //0x454
    UCHAR DisablePageFaultClustering;                                       //0x455
    UCHAR ActiveFaultCount;                                                 //0x456
    UCHAR LockOrderState;                                                   //0x457
    ULONGLONG AlpcMessageId;                                                //0x458
    union
    {
        VOID* AlpcMessage;                                                  //0x460
        ULONG AlpcReceiveAttributeSet;                                      //0x460
    };
    struct _LIST_ENTRY AlpcWaitListEntry;                                   //0x468
    ULONG CacheManagerCount;                                                //0x478
    ULONG IoBoostCount;                                                     //0x47c
    ULONGLONG IrpListLock;                                                  //0x480
    VOID* ReservedForSynchTracking;                                         //0x488
    struct _SINGLE_LIST_ENTRY CmCallbackListHead;                           //0x490
};
/* Used in */
// _ALPC_DISPATCH_CONTEXT
// _EPROCESS
// _ETHREAD
// _IOV_FORCED_PENDING_TRACE
// _IRP
// _KALPC_MESSAGE
// _LPCP_MESSAGE
// _LPCP_PORT_OBJECT
// _MMPAGING_FILE
// _VF_KE_CRITICAL_REGION_TRACE
// _VF_POOL_TRACE
// _VI_FAULT_TRACE
// _WMI_LOGGER_CONTEXT

