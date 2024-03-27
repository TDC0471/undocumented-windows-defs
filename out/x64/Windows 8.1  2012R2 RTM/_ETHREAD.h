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

//0x778 bytes (sizeof)
struct _ETHREAD
{
    struct _KTHREAD Tcb;                                                    //0x0
    union _LARGE_INTEGER CreateTime;                                        //0x5d0
    union
    {
        union _LARGE_INTEGER ExitTime;                                      //0x5d8
        struct _LIST_ENTRY KeyedWaitChain;                                  //0x5d8
    };
    VOID* ChargeOnlySession;                                                //0x5e8
    union
    {
        struct _LIST_ENTRY PostBlockList;                                   //0x5f0
        struct
        {
            VOID* ForwardLinkShadow;                                        //0x5f0
            VOID* StartAddress;                                             //0x5f8
        };
    };
    union
    {
        struct _TERMINATION_PORT* TerminationPort;                          //0x600
        struct _ETHREAD* ReaperLink;                                        //0x600
        VOID* KeyedWaitValue;                                               //0x600
    };
    ULONGLONG ActiveTimerListLock;                                          //0x608
    struct _LIST_ENTRY ActiveTimerListHead;                                 //0x610
    struct _CLIENT_ID Cid;                                                  //0x620
    union
    {
        struct _KSEMAPHORE KeyedWaitSemaphore;                              //0x630
        struct _KSEMAPHORE AlpcWaitSemaphore;                               //0x630
    };
    union _PS_CLIENT_SECURITY_CONTEXT ClientSecurity;                       //0x650
    struct _LIST_ENTRY IrpList;                                             //0x658
    ULONGLONG TopLevelIrp;                                                  //0x668
    struct _DEVICE_OBJECT* DeviceToVerify;                                  //0x670
    VOID* Win32StartAddress;                                                //0x678
    VOID* LegacyPowerObject;                                                //0x680
    struct _LIST_ENTRY ThreadListEntry;                                     //0x688
    struct _EX_RUNDOWN_REF RundownProtect;                                  //0x698
    struct _EX_PUSH_LOCK ThreadLock;                                        //0x6a0
    ULONG ReadClusterSize;                                                  //0x6a8
    volatile LONG MmLockOrdering;                                           //0x6ac
    volatile LONG CmLockOrdering;                                           //0x6b0
    union
    {
        ULONG CrossThreadFlags;                                             //0x6b4
        struct
        {
            ULONG Terminated:1;                                             //0x6b4
            ULONG ThreadInserted:1;                                         //0x6b4
            ULONG HideFromDebugger:1;                                       //0x6b4
            ULONG ActiveImpersonationInfo:1;                                //0x6b4
            ULONG HardErrorsAreDisabled:1;                                  //0x6b4
            ULONG BreakOnTermination:1;                                     //0x6b4
            ULONG SkipCreationMsg:1;                                        //0x6b4
            ULONG SkipTerminationMsg:1;                                     //0x6b4
            ULONG CopyTokenOnOpen:1;                                        //0x6b4
            ULONG ThreadIoPriority:3;                                       //0x6b4
            ULONG ThreadPagePriority:3;                                     //0x6b4
            ULONG RundownFail:1;                                            //0x6b4
            ULONG UmsForceQueueTermination:1;                               //0x6b4
            ULONG ReservedCrossThreadFlags:15;                              //0x6b4
        };
    };
    union
    {
        ULONG SameThreadPassiveFlags;                                       //0x6b8
        struct
        {
            ULONG ActiveExWorker:1;                                         //0x6b8
            ULONG MemoryMaker:1;                                            //0x6b8
            ULONG ClonedThread:1;                                           //0x6b8
            ULONG KeyedEventInUse:1;                                        //0x6b8
            ULONG SelfTerminate:1;                                          //0x6b8
        };
    };
    union
    {
        ULONG SameThreadApcFlags;                                           //0x6bc
        struct
        {
            UCHAR HardFaultBehavior:1;                                      //0x6bc
            volatile UCHAR StartAddressInvalid:1;                           //0x6bc
            UCHAR EtwCalloutActive:1;                                       //0x6bc
            UCHAR OwnsProcessWorkingSetExclusive:1;                         //0x6bc
            UCHAR OwnsProcessWorkingSetShared:1;                            //0x6bc
            UCHAR OwnsSystemCacheWorkingSetExclusive:1;                     //0x6bc
            UCHAR OwnsSystemCacheWorkingSetShared:1;                        //0x6bc
            UCHAR OwnsSessionWorkingSetExclusive:1;                         //0x6bc
            UCHAR OwnsSessionWorkingSetShared:1;                            //0x6bd
            UCHAR OwnsProcessAddressSpaceExclusive:1;                       //0x6bd
            UCHAR OwnsProcessAddressSpaceShared:1;                          //0x6bd
            UCHAR SuppressSymbolLoad:1;                                     //0x6bd
            UCHAR Prefetching:1;                                            //0x6bd
            UCHAR OwnsVadExclusive:1;                                       //0x6bd
            UCHAR OwnsChangeControlAreaExclusive:1;                         //0x6bd
            UCHAR OwnsChangeControlAreaShared:1;                            //0x6bd
            UCHAR OwnsPagedPoolWorkingSetExclusive:1;                       //0x6be
            UCHAR OwnsPagedPoolWorkingSetShared:1;                          //0x6be
            UCHAR OwnsSystemPtesWorkingSetExclusive:1;                      //0x6be
            UCHAR OwnsSystemPtesWorkingSetShared:1;                         //0x6be
            UCHAR TrimTrigger:2;                                            //0x6be
            UCHAR Spare2:2;                                                 //0x6be
            UCHAR SystemPagePriorityActive:1;                               //0x6bf
            UCHAR SystemPagePriority:3;                                     //0x6bf
            UCHAR Spare3:4;                                                 //0x6bf
        };
    };
    UCHAR CacheManagerActive;                                               //0x6c0
    UCHAR DisablePageFaultClustering;                                       //0x6c1
    UCHAR ActiveFaultCount;                                                 //0x6c2
    UCHAR LockOrderState;                                                   //0x6c3
    ULONGLONG AlpcMessageId;                                                //0x6c8
    union
    {
        VOID* AlpcMessage;                                                  //0x6d0
        ULONG AlpcReceiveAttributeSet;                                      //0x6d0
    };
    LONG ExitStatus;                                                        //0x6d8
    struct _LIST_ENTRY AlpcWaitListEntry;                                   //0x6e0
    ULONG CacheManagerCount;                                                //0x6f0
    ULONG IoBoostCount;                                                     //0x6f4
    struct _LIST_ENTRY BoostList;                                           //0x6f8
    struct _LIST_ENTRY DeboostList;                                         //0x708
    ULONGLONG BoostListLock;                                                //0x718
    ULONGLONG IrpListLock;                                                  //0x720
    VOID* ReservedForSynchTracking;                                         //0x728
    struct _SINGLE_LIST_ENTRY CmCallbackListHead;                           //0x730
    struct _GUID* ActivityId;                                               //0x738
    struct _SINGLE_LIST_ENTRY SeLearningModeListHead;                       //0x740
    VOID* VerifierContext;                                                  //0x748
    ULONG KernelStackReference;                                             //0x750
    VOID* AdjustedClientToken;                                              //0x758
    ULONG UserFsBase;                                                       //0x760
    ULONGLONG UserGsBase;                                                   //0x768
    VOID* PicoContext;                                                      //0x770
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

