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

//0x820 bytes (sizeof)
struct _ETHREAD
{
    struct _KTHREAD Tcb;                                                    //0x0
    union _LARGE_INTEGER CreateTime;                                        //0x600
    union
    {
        union _LARGE_INTEGER ExitTime;                                      //0x608
        struct _LIST_ENTRY KeyedWaitChain;                                  //0x608
    };
    union
    {
        struct _LIST_ENTRY PostBlockList;                                   //0x618
        struct
        {
            VOID* ForwardLinkShadow;                                        //0x618
            VOID* StartAddress;                                             //0x620
        };
    };
    union
    {
        struct _TERMINATION_PORT* TerminationPort;                          //0x628
        struct _ETHREAD* ReaperLink;                                        //0x628
        VOID* KeyedWaitValue;                                               //0x628
    };
    ULONGLONG ActiveTimerListLock;                                          //0x630
    struct _LIST_ENTRY ActiveTimerListHead;                                 //0x638
    struct _CLIENT_ID Cid;                                                  //0x648
    union
    {
        struct _KSEMAPHORE KeyedWaitSemaphore;                              //0x658
        struct _KSEMAPHORE AlpcWaitSemaphore;                               //0x658
    };
    union _PS_CLIENT_SECURITY_CONTEXT ClientSecurity;                       //0x678
    struct _LIST_ENTRY IrpList;                                             //0x680
    ULONGLONG TopLevelIrp;                                                  //0x690
    struct _DEVICE_OBJECT* DeviceToVerify;                                  //0x698
    VOID* Win32StartAddress;                                                //0x6a0
    VOID* ChargeOnlySession;                                                //0x6a8
    VOID* LegacyPowerObject;                                                //0x6b0
    struct _LIST_ENTRY ThreadListEntry;                                     //0x6b8
    struct _EX_RUNDOWN_REF RundownProtect;                                  //0x6c8
    struct _EX_PUSH_LOCK ThreadLock;                                        //0x6d0
    ULONG ReadClusterSize;                                                  //0x6d8
    volatile LONG MmLockOrdering;                                           //0x6dc
    union
    {
        ULONG CrossThreadFlags;                                             //0x6e0
        struct
        {
            ULONG Terminated:1;                                             //0x6e0
            ULONG ThreadInserted:1;                                         //0x6e0
            ULONG HideFromDebugger:1;                                       //0x6e0
            ULONG ActiveImpersonationInfo:1;                                //0x6e0
            ULONG HardErrorsAreDisabled:1;                                  //0x6e0
            ULONG BreakOnTermination:1;                                     //0x6e0
            ULONG SkipCreationMsg:1;                                        //0x6e0
            ULONG SkipTerminationMsg:1;                                     //0x6e0
            ULONG CopyTokenOnOpen:1;                                        //0x6e0
            ULONG ThreadIoPriority:3;                                       //0x6e0
            ULONG ThreadPagePriority:3;                                     //0x6e0
            ULONG RundownFail:1;                                            //0x6e0
            ULONG UmsForceQueueTermination:1;                               //0x6e0
            ULONG IndirectCpuSets:1;                                        //0x6e0
            ULONG DisableDynamicCodeOptOut:1;                               //0x6e0
            ULONG ExplicitCaseSensitivity:1;                                //0x6e0
            ULONG PicoNotifyExit:1;                                         //0x6e0
            ULONG DbgWerUserReportActive:1;                                 //0x6e0
            ULONG ForcedSelfTrimActive:1;                                   //0x6e0
            ULONG SamplingCoverage:1;                                       //0x6e0
            ULONG ReservedCrossThreadFlags:8;                               //0x6e0
        };
    };
    union
    {
        ULONG SameThreadPassiveFlags;                                       //0x6e4
        struct
        {
            ULONG ActiveExWorker:1;                                         //0x6e4
            ULONG MemoryMaker:1;                                            //0x6e4
            ULONG StoreLockThread:2;                                        //0x6e4
            ULONG ClonedThread:1;                                           //0x6e4
            ULONG KeyedEventInUse:1;                                        //0x6e4
            ULONG SelfTerminate:1;                                          //0x6e4
            ULONG RespectIoPriority:1;                                      //0x6e4
            ULONG ActivePageLists:1;                                        //0x6e4
            ULONG SecureContext:1;                                          //0x6e4
            ULONG ZeroPageThread:1;                                         //0x6e4
            ULONG WorkloadClass:1;                                          //0x6e4
            ULONG ReservedSameThreadPassiveFlags:20;                        //0x6e4
        };
    };
    union
    {
        ULONG SameThreadApcFlags;                                           //0x6e8
        struct
        {
            UCHAR OwnsProcessAddressSpaceExclusive:1;                       //0x6e8
            UCHAR OwnsProcessAddressSpaceShared:1;                          //0x6e8
            UCHAR HardFaultBehavior:1;                                      //0x6e8
            volatile UCHAR StartAddressInvalid:1;                           //0x6e8
            UCHAR EtwCalloutActive:1;                                       //0x6e8
            UCHAR SuppressSymbolLoad:1;                                     //0x6e8
            UCHAR Prefetching:1;                                            //0x6e8
            UCHAR OwnsVadExclusive:1;                                       //0x6e8
            UCHAR SystemPagePriorityActive:1;                               //0x6e9
            UCHAR SystemPagePriority:3;                                     //0x6e9
            UCHAR AllowUserWritesToExecutableMemory:1;                      //0x6e9
            UCHAR AllowKernelWritesToExecutableMemory:1;                    //0x6e9
            UCHAR OwnsVadShared:1;                                          //0x6e9
        };
    };
    UCHAR CacheManagerActive;                                               //0x6ec
    UCHAR DisablePageFaultClustering;                                       //0x6ed
    UCHAR ActiveFaultCount;                                                 //0x6ee
    UCHAR LockOrderState;                                                   //0x6ef
    ULONGLONG AlpcMessageId;                                                //0x6f0
    union
    {
        VOID* AlpcMessage;                                                  //0x6f8
        ULONG AlpcReceiveAttributeSet;                                      //0x6f8
    };
    struct _LIST_ENTRY AlpcWaitListEntry;                                   //0x700
    LONG ExitStatus;                                                        //0x710
    ULONG CacheManagerCount;                                                //0x714
    ULONG IoBoostCount;                                                     //0x718
    ULONG IoQoSBoostCount;                                                  //0x71c
    ULONG IoQoSThrottleCount;                                               //0x720
    ULONG KernelStackReference;                                             //0x724
    struct _LIST_ENTRY BoostList;                                           //0x728
    struct _LIST_ENTRY DeboostList;                                         //0x738
    ULONGLONG BoostListLock;                                                //0x748
    ULONGLONG IrpListLock;                                                  //0x750
    VOID* ReservedForSynchTracking;                                         //0x758
    struct _SINGLE_LIST_ENTRY CmCallbackListHead;                           //0x760
    struct _GUID* ActivityId;                                               //0x768
    struct _SINGLE_LIST_ENTRY SeLearningModeListHead;                       //0x770
    VOID* VerifierContext;                                                  //0x778
    VOID* AdjustedClientToken;                                              //0x780
    VOID* WorkOnBehalfThread;                                               //0x788
    struct _PS_PROPERTY_SET PropertySet;                                    //0x790
    VOID* PicoContext;                                                      //0x7a8
    ULONGLONG UserFsBase;                                                   //0x7b0
    ULONGLONG UserGsBase;                                                   //0x7b8
    struct _THREAD_ENERGY_VALUES* EnergyValues;                             //0x7c0
    VOID* CmDbgInfo;                                                        //0x7c8
    union
    {
        ULONGLONG SelectedCpuSets;                                          //0x7d0
        ULONGLONG* SelectedCpuSetsIndirect;                                 //0x7d0
    };
    struct _EJOB* Silo;                                                     //0x7d8
    struct _UNICODE_STRING* ThreadName;                                     //0x7e0
    struct _CONTEXT* SetContextState;                                       //0x7e8
    ULONG LastExpectedRunTime;                                              //0x7f0
    ULONG HeapData;                                                         //0x7f4
    struct _LIST_ENTRY OwnerEntryListHead;                                  //0x7f8
    ULONGLONG DisownedOwnerEntryListLock;                                   //0x808
    struct _LIST_ENTRY DisownedOwnerEntryListHead;                          //0x810
};
/* Used in */
// _ALPC_DISPATCH_CONTEXT
// _CC_PARTITION
// _CM_DIRTY_VECTOR_LOG_ENTRY
// _EPROCESS
// _ETHREAD
// _ETW_GUID_ENTRY
// _ETW_STACK_TRACE_BLOCK
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
// _MI_SYSTEM_IMAGE_STATE
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

