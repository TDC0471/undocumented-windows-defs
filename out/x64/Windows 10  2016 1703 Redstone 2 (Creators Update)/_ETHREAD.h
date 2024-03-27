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
#include <_PS_PROPERTY_SET.h>
#include <_THREAD_ENERGY_VALUES.h>
#include <_EJOB.h>
#include <_UNICODE_STRING.h>
#include <_CONTEXT.h>

//0x810 bytes (sizeof)
struct _ETHREAD
{
    struct _KTHREAD Tcb;                                                    //0x0
    union _LARGE_INTEGER CreateTime;                                        //0x5e8
    union
    {
        union _LARGE_INTEGER ExitTime;                                      //0x5f0
        struct _LIST_ENTRY KeyedWaitChain;                                  //0x5f0
    };
    VOID* ChargeOnlySession;                                                //0x600
    union
    {
        struct _LIST_ENTRY PostBlockList;                                   //0x608
        struct
        {
            VOID* ForwardLinkShadow;                                        //0x608
            VOID* StartAddress;                                             //0x610
        };
    };
    union
    {
        struct _TERMINATION_PORT* TerminationPort;                          //0x618
        struct _ETHREAD* ReaperLink;                                        //0x618
        VOID* KeyedWaitValue;                                               //0x618
    };
    ULONGLONG ActiveTimerListLock;                                          //0x620
    struct _LIST_ENTRY ActiveTimerListHead;                                 //0x628
    struct _CLIENT_ID Cid;                                                  //0x638
    union
    {
        struct _KSEMAPHORE KeyedWaitSemaphore;                              //0x648
        struct _KSEMAPHORE AlpcWaitSemaphore;                               //0x648
    };
    union _PS_CLIENT_SECURITY_CONTEXT ClientSecurity;                       //0x668
    struct _LIST_ENTRY IrpList;                                             //0x670
    ULONGLONG TopLevelIrp;                                                  //0x680
    struct _DEVICE_OBJECT* DeviceToVerify;                                  //0x688
    VOID* Win32StartAddress;                                                //0x690
    VOID* LegacyPowerObject;                                                //0x698
    struct _LIST_ENTRY ThreadListEntry;                                     //0x6a0
    struct _EX_RUNDOWN_REF RundownProtect;                                  //0x6b0
    struct _EX_PUSH_LOCK ThreadLock;                                        //0x6b8
    ULONG ReadClusterSize;                                                  //0x6c0
    volatile LONG MmLockOrdering;                                           //0x6c4
    union
    {
        ULONG CrossThreadFlags;                                             //0x6c8
        struct
        {
            ULONG Terminated:1;                                             //0x6c8
            ULONG ThreadInserted:1;                                         //0x6c8
            ULONG HideFromDebugger:1;                                       //0x6c8
            ULONG ActiveImpersonationInfo:1;                                //0x6c8
            ULONG HardErrorsAreDisabled:1;                                  //0x6c8
            ULONG BreakOnTermination:1;                                     //0x6c8
            ULONG SkipCreationMsg:1;                                        //0x6c8
            ULONG SkipTerminationMsg:1;                                     //0x6c8
            ULONG CopyTokenOnOpen:1;                                        //0x6c8
            ULONG ThreadIoPriority:3;                                       //0x6c8
            ULONG ThreadPagePriority:3;                                     //0x6c8
            ULONG RundownFail:1;                                            //0x6c8
            ULONG UmsForceQueueTermination:1;                               //0x6c8
            ULONG IndirectCpuSets:1;                                        //0x6c8
            ULONG DisableDynamicCodeOptOut:1;                               //0x6c8
            ULONG ExplicitCaseSensitivity:1;                                //0x6c8
            ULONG PicoNotifyExit:1;                                         //0x6c8
            ULONG DbgWerUserReportActive:1;                                 //0x6c8
            ULONG ReservedCrossThreadFlags:10;                              //0x6c8
        };
    };
    union
    {
        ULONG SameThreadPassiveFlags;                                       //0x6cc
        struct
        {
            ULONG ActiveExWorker:1;                                         //0x6cc
            ULONG MemoryMaker:1;                                            //0x6cc
            ULONG StoreLockThread:2;                                        //0x6cc
            ULONG ClonedThread:1;                                           //0x6cc
            ULONG KeyedEventInUse:1;                                        //0x6cc
            ULONG SelfTerminate:1;                                          //0x6cc
            ULONG RespectIoPriority:1;                                      //0x6cc
            ULONG ActivePageLists:1;                                        //0x6cc
            ULONG ReservedSameThreadPassiveFlags:23;                        //0x6cc
        };
    };
    union
    {
        ULONG SameThreadApcFlags;                                           //0x6d0
        struct
        {
            UCHAR OwnsProcessAddressSpaceExclusive:1;                       //0x6d0
            UCHAR OwnsProcessAddressSpaceShared:1;                          //0x6d0
            UCHAR HardFaultBehavior:1;                                      //0x6d0
            volatile UCHAR StartAddressInvalid:1;                           //0x6d0
            UCHAR EtwCalloutActive:1;                                       //0x6d0
            UCHAR SuppressSymbolLoad:1;                                     //0x6d0
            UCHAR Prefetching:1;                                            //0x6d0
            UCHAR OwnsVadExclusive:1;                                       //0x6d0
            UCHAR SystemPagePriorityActive:1;                               //0x6d1
            UCHAR SystemPagePriority:3;                                     //0x6d1
        };
    };
    UCHAR CacheManagerActive;                                               //0x6d4
    UCHAR DisablePageFaultClustering;                                       //0x6d5
    UCHAR ActiveFaultCount;                                                 //0x6d6
    UCHAR LockOrderState;                                                   //0x6d7
    ULONGLONG AlpcMessageId;                                                //0x6d8
    union
    {
        VOID* AlpcMessage;                                                  //0x6e0
        ULONG AlpcReceiveAttributeSet;                                      //0x6e0
    };
    struct _LIST_ENTRY AlpcWaitListEntry;                                   //0x6e8
    LONG ExitStatus;                                                        //0x6f8
    ULONG CacheManagerCount;                                                //0x6fc
    ULONG IoBoostCount;                                                     //0x700
    ULONG IoQoSBoostCount;                                                  //0x704
    ULONG IoQoSThrottleCount;                                               //0x708
    struct _LIST_ENTRY BoostList;                                           //0x710
    struct _LIST_ENTRY DeboostList;                                         //0x720
    ULONGLONG BoostListLock;                                                //0x730
    ULONGLONG IrpListLock;                                                  //0x738
    VOID* ReservedForSynchTracking;                                         //0x740
    struct _SINGLE_LIST_ENTRY CmCallbackListHead;                           //0x748
    struct _GUID* ActivityId;                                               //0x750
    struct _SINGLE_LIST_ENTRY SeLearningModeListHead;                       //0x758
    VOID* VerifierContext;                                                  //0x760
    ULONG KernelStackReference;                                             //0x768
    VOID* AdjustedClientToken;                                              //0x770
    VOID* WorkOnBehalfThread;                                               //0x778
    struct _PS_PROPERTY_SET PropertySet;                                    //0x780
    VOID* PicoContext;                                                      //0x798
    ULONGLONG UserFsBase;                                                   //0x7a0
    ULONGLONG UserGsBase;                                                   //0x7a8
    struct _THREAD_ENERGY_VALUES* EnergyValues;                             //0x7b0
    VOID* CmDbgInfo;                                                        //0x7b8
    union
    {
        ULONGLONG SelectedCpuSets;                                          //0x7c0
        ULONGLONG* SelectedCpuSetsIndirect;                                 //0x7c0
    };
    struct _EJOB* Silo;                                                     //0x7c8
    struct _UNICODE_STRING* ThreadName;                                     //0x7d0
    struct _CONTEXT* SetContextState;                                       //0x7d8
    ULONG LastExpectedRunTime;                                              //0x7e0
    struct _LIST_ENTRY OwnerEntryListHead;                                  //0x7e8
    ULONGLONG DisownedOwnerEntryListLock;                                   //0x7f8
    struct _LIST_ENTRY DisownedOwnerEntryListHead;                          //0x800
};
/* Used in */
// _ALPC_DISPATCH_CONTEXT
// _CM_DIRTY_VECTOR_LOG_ENTRY
// _ENODE
// _EPROCESS
// _ETHREAD
// _ETW_GUID_ENTRY
// _HIVE_WRITE_WAIT_QUEUE
// _IOV_FORCED_PENDING_TRACE
// _IO_WORKITEM
// _IRP
// _KALPC_MESSAGE
// _LPCP_MESSAGE
// _LPCP_PORT_OBJECT
// _MI_PARTITION_MODWRITES
// _MI_PARTITION_STORES
// _MI_SHUTDOWN_STATE
// _MI_VAD_EVENT_BLOCK
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
// _WORK_QUEUE_ENTRY

