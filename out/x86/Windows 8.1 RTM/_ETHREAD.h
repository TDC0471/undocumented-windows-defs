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
#include <_EX_RUNDOWN_REF.h>
#include <_EX_PUSH_LOCK.h>
#include <_SINGLE_LIST_ENTRY.h>
#include <_GUID.h>

//0x418 bytes (sizeof)
struct _ETHREAD
{
    struct _KTHREAD Tcb;                                                    //0x0
    union _LARGE_INTEGER CreateTime;                                        //0x338
    union
    {
        union _LARGE_INTEGER ExitTime;                                      //0x340
        struct _LIST_ENTRY KeyedWaitChain;                                  //0x340
    };
    VOID* ChargeOnlySession;                                                //0x348
    union
    {
        struct _LIST_ENTRY PostBlockList;                                   //0x34c
        struct
        {
            VOID* ForwardLinkShadow;                                        //0x34c
            VOID* StartAddress;                                             //0x350
        };
    };
    union
    {
        struct _TERMINATION_PORT* TerminationPort;                          //0x354
        struct _ETHREAD* ReaperLink;                                        //0x354
        VOID* KeyedWaitValue;                                               //0x354
    };
    ULONG ActiveTimerListLock;                                              //0x358
    struct _LIST_ENTRY ActiveTimerListHead;                                 //0x35c
    struct _CLIENT_ID Cid;                                                  //0x364
    union
    {
        struct _KSEMAPHORE KeyedWaitSemaphore;                              //0x36c
        struct _KSEMAPHORE AlpcWaitSemaphore;                               //0x36c
    };
    union _PS_CLIENT_SECURITY_CONTEXT ClientSecurity;                       //0x380
    struct _LIST_ENTRY IrpList;                                             //0x384
    ULONG TopLevelIrp;                                                      //0x38c
    struct _DEVICE_OBJECT* DeviceToVerify;                                  //0x390
    VOID* Win32StartAddress;                                                //0x394
    VOID* LegacyPowerObject;                                                //0x398
    struct _LIST_ENTRY ThreadListEntry;                                     //0x39c
    struct _EX_RUNDOWN_REF RundownProtect;                                  //0x3a4
    struct _EX_PUSH_LOCK ThreadLock;                                        //0x3a8
    ULONG ReadClusterSize;                                                  //0x3ac
    volatile LONG MmLockOrdering;                                           //0x3b0
    volatile LONG CmLockOrdering;                                           //0x3b4
    union
    {
        ULONG CrossThreadFlags;                                             //0x3b8
        struct
        {
            ULONG Terminated:1;                                             //0x3b8
            ULONG ThreadInserted:1;                                         //0x3b8
            ULONG HideFromDebugger:1;                                       //0x3b8
            ULONG ActiveImpersonationInfo:1;                                //0x3b8
            ULONG HardErrorsAreDisabled:1;                                  //0x3b8
            ULONG BreakOnTermination:1;                                     //0x3b8
            ULONG SkipCreationMsg:1;                                        //0x3b8
            ULONG SkipTerminationMsg:1;                                     //0x3b8
            ULONG CopyTokenOnOpen:1;                                        //0x3b8
            ULONG ThreadIoPriority:3;                                       //0x3b8
            ULONG ThreadPagePriority:3;                                     //0x3b8
            ULONG RundownFail:1;                                            //0x3b8
            ULONG UmsForceQueueTermination:1;                               //0x3b8
            ULONG ReservedCrossThreadFlags:15;                              //0x3b8
        };
    };
    union
    {
        ULONG SameThreadPassiveFlags;                                       //0x3bc
        struct
        {
            ULONG ActiveExWorker:1;                                         //0x3bc
            ULONG MemoryMaker:1;                                            //0x3bc
            ULONG ClonedThread:1;                                           //0x3bc
            ULONG KeyedEventInUse:1;                                        //0x3bc
            ULONG SelfTerminate:1;                                          //0x3bc
        };
    };
    union
    {
        ULONG SameThreadApcFlags;                                           //0x3c0
        struct
        {
            UCHAR HardFaultBehavior:1;                                      //0x3c0
            volatile UCHAR StartAddressInvalid:1;                           //0x3c0
            UCHAR EtwCalloutActive:1;                                       //0x3c0
            UCHAR OwnsProcessWorkingSetExclusive:1;                         //0x3c0
            UCHAR OwnsProcessWorkingSetShared:1;                            //0x3c0
            UCHAR OwnsSystemCacheWorkingSetExclusive:1;                     //0x3c0
            UCHAR OwnsSystemCacheWorkingSetShared:1;                        //0x3c0
            UCHAR OwnsSessionWorkingSetExclusive:1;                         //0x3c0
            UCHAR OwnsSessionWorkingSetShared:1;                            //0x3c1
            UCHAR OwnsProcessAddressSpaceExclusive:1;                       //0x3c1
            UCHAR OwnsProcessAddressSpaceShared:1;                          //0x3c1
            UCHAR SuppressSymbolLoad:1;                                     //0x3c1
            UCHAR Prefetching:1;                                            //0x3c1
            UCHAR OwnsVadExclusive:1;                                       //0x3c1
            UCHAR OwnsChangeControlAreaExclusive:1;                         //0x3c1
            UCHAR OwnsChangeControlAreaShared:1;                            //0x3c1
            UCHAR OwnsPagedPoolWorkingSetExclusive:1;                       //0x3c2
            UCHAR OwnsPagedPoolWorkingSetShared:1;                          //0x3c2
            UCHAR OwnsSystemPtesWorkingSetExclusive:1;                      //0x3c2
            UCHAR OwnsSystemPtesWorkingSetShared:1;                         //0x3c2
            UCHAR TrimTrigger:2;                                            //0x3c2
            UCHAR Spare2:2;                                                 //0x3c2
            UCHAR SystemPagePriorityActive:1;                               //0x3c3
            UCHAR SystemPagePriority:3;                                     //0x3c3
            UCHAR Spare3:4;                                                 //0x3c3
        };
    };
    UCHAR CacheManagerActive;                                               //0x3c4
    UCHAR DisablePageFaultClustering;                                       //0x3c5
    UCHAR ActiveFaultCount;                                                 //0x3c6
    UCHAR LockOrderState;                                                   //0x3c7
    ULONG AlpcMessageId;                                                    //0x3c8
    union
    {
        VOID* AlpcMessage;                                                  //0x3cc
        ULONG AlpcReceiveAttributeSet;                                      //0x3cc
    };
    LONG ExitStatus;                                                        //0x3d0
    struct _LIST_ENTRY AlpcWaitListEntry;                                   //0x3d4
    ULONG CacheManagerCount;                                                //0x3dc
    ULONG IoBoostCount;                                                     //0x3e0
    struct _LIST_ENTRY BoostList;                                           //0x3e4
    struct _LIST_ENTRY DeboostList;                                         //0x3ec
    ULONG BoostListLock;                                                    //0x3f4
    ULONG IrpListLock;                                                      //0x3f8
    VOID* ReservedForSynchTracking;                                         //0x3fc
    struct _SINGLE_LIST_ENTRY CmCallbackListHead;                           //0x400
    struct _GUID* ActivityId;                                               //0x404
    struct _SINGLE_LIST_ENTRY SeLearningModeListHead;                       //0x408
    VOID* VerifierContext;                                                  //0x40c
    ULONG KernelStackReference;                                             //0x410
    VOID* AdjustedClientToken;                                              //0x414
};
/* Used in */
// _ALPC_DISPATCH_CONTEXT
// _CM_DIRTY_VECTOR_LOG_ENTRY
// _ENODE
// _EPROCESS
// _ETHREAD
// _HIVE_WRITE_WAIT_QUEUE
// _IOV_FORCED_PENDING_TRACE
// _IRP
// _KALPC_MESSAGE
// _LPCP_MESSAGE
// _LPCP_PORT_OBJECT
// _MMINPAGE_SUPPORT
// _MMPAGING_FILE
// _NONOPAQUE_OPLOCK
// _POP_IRP_WORKER_ENTRY
// _POP_SHUTDOWN_BUG_CHECK
// _RH_OP_CONTEXT
// _VF_KE_CRITICAL_REGION_TRACE
// _VF_POOL_TRACE
// _VI_FAULT_TRACE
// _WMI_LOGGER_CONTEXT

