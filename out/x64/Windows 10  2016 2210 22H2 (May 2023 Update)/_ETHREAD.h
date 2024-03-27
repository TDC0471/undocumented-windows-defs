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
#include <_KLOCK_ENTRY.h>

//0x898 bytes (sizeof)
struct _ETHREAD
{
    struct _KTHREAD Tcb;                                                    //0x0
    union _LARGE_INTEGER CreateTime;                                        //0x430
    union
    {
        union _LARGE_INTEGER ExitTime;                                      //0x438
        struct _LIST_ENTRY KeyedWaitChain;                                  //0x438
    };
    union
    {
        struct _LIST_ENTRY PostBlockList;                                   //0x448
        struct
        {
            VOID* ForwardLinkShadow;                                        //0x448
            VOID* StartAddress;                                             //0x450
        };
    };
    union
    {
        struct _TERMINATION_PORT* TerminationPort;                          //0x458
        struct _ETHREAD* ReaperLink;                                        //0x458
        VOID* KeyedWaitValue;                                               //0x458
    };
    ULONGLONG ActiveTimerListLock;                                          //0x460
    struct _LIST_ENTRY ActiveTimerListHead;                                 //0x468
    struct _CLIENT_ID Cid;                                                  //0x478
    union
    {
        struct _KSEMAPHORE KeyedWaitSemaphore;                              //0x488
        struct _KSEMAPHORE AlpcWaitSemaphore;                               //0x488
    };
    union _PS_CLIENT_SECURITY_CONTEXT ClientSecurity;                       //0x4a8
    struct _LIST_ENTRY IrpList;                                             //0x4b0
    ULONGLONG TopLevelIrp;                                                  //0x4c0
    struct _DEVICE_OBJECT* DeviceToVerify;                                  //0x4c8
    VOID* Win32StartAddress;                                                //0x4d0
    VOID* ChargeOnlySession;                                                //0x4d8
    VOID* LegacyPowerObject;                                                //0x4e0
    struct _LIST_ENTRY ThreadListEntry;                                     //0x4e8
    struct _EX_RUNDOWN_REF RundownProtect;                                  //0x4f8
    struct _EX_PUSH_LOCK ThreadLock;                                        //0x500
    ULONG ReadClusterSize;                                                  //0x508
    volatile LONG MmLockOrdering;                                           //0x50c
    union
    {
        ULONG CrossThreadFlags;                                             //0x510
        struct
        {
            ULONG Terminated:1;                                             //0x510
            ULONG ThreadInserted:1;                                         //0x510
            ULONG HideFromDebugger:1;                                       //0x510
            ULONG ActiveImpersonationInfo:1;                                //0x510
            ULONG HardErrorsAreDisabled:1;                                  //0x510
            ULONG BreakOnTermination:1;                                     //0x510
            ULONG SkipCreationMsg:1;                                        //0x510
            ULONG SkipTerminationMsg:1;                                     //0x510
            ULONG CopyTokenOnOpen:1;                                        //0x510
            ULONG ThreadIoPriority:3;                                       //0x510
            ULONG ThreadPagePriority:3;                                     //0x510
            ULONG RundownFail:1;                                            //0x510
            ULONG UmsForceQueueTermination:1;                               //0x510
            ULONG IndirectCpuSets:1;                                        //0x510
            ULONG DisableDynamicCodeOptOut:1;                               //0x510
            ULONG ExplicitCaseSensitivity:1;                                //0x510
            ULONG PicoNotifyExit:1;                                         //0x510
            ULONG DbgWerUserReportActive:1;                                 //0x510
            ULONG ForcedSelfTrimActive:1;                                   //0x510
            ULONG SamplingCoverage:1;                                       //0x510
            ULONG ReservedCrossThreadFlags:8;                               //0x510
        };
    };
    union
    {
        ULONG SameThreadPassiveFlags;                                       //0x514
        struct
        {
            ULONG ActiveExWorker:1;                                         //0x514
            ULONG MemoryMaker:1;                                            //0x514
            ULONG StoreLockThread:2;                                        //0x514
            ULONG ClonedThread:1;                                           //0x514
            ULONG KeyedEventInUse:1;                                        //0x514
            ULONG SelfTerminate:1;                                          //0x514
            ULONG RespectIoPriority:1;                                      //0x514
            ULONG ActivePageLists:1;                                        //0x514
            ULONG SecureContext:1;                                          //0x514
            ULONG ZeroPageThread:1;                                         //0x514
            ULONG WorkloadClass:1;                                          //0x514
            ULONG ReservedSameThreadPassiveFlags:20;                        //0x514
        };
    };
    union
    {
        ULONG SameThreadApcFlags;                                           //0x518
        struct
        {
            UCHAR OwnsProcessAddressSpaceExclusive:1;                       //0x518
            UCHAR OwnsProcessAddressSpaceShared:1;                          //0x518
            UCHAR HardFaultBehavior:1;                                      //0x518
            volatile UCHAR StartAddressInvalid:1;                           //0x518
            UCHAR EtwCalloutActive:1;                                       //0x518
            UCHAR SuppressSymbolLoad:1;                                     //0x518
            UCHAR Prefetching:1;                                            //0x518
            UCHAR OwnsVadExclusive:1;                                       //0x518
            UCHAR SystemPagePriorityActive:1;                               //0x519
            UCHAR SystemPagePriority:3;                                     //0x519
            UCHAR AllowUserWritesToExecutableMemory:1;                      //0x519
            UCHAR AllowKernelWritesToExecutableMemory:1;                    //0x519
            UCHAR OwnsVadShared:1;                                          //0x519
        };
    };
    UCHAR CacheManagerActive;                                               //0x51c
    UCHAR DisablePageFaultClustering;                                       //0x51d
    UCHAR ActiveFaultCount;                                                 //0x51e
    UCHAR LockOrderState;                                                   //0x51f
    ULONG PerformanceCountLowReserved;                                      //0x520
    LONG PerformanceCountHighReserved;                                      //0x524
    ULONGLONG AlpcMessageId;                                                //0x528
    union
    {
        VOID* AlpcMessage;                                                  //0x530
        ULONG AlpcReceiveAttributeSet;                                      //0x530
    };
    struct _LIST_ENTRY AlpcWaitListEntry;                                   //0x538
    LONG ExitStatus;                                                        //0x548
    ULONG CacheManagerCount;                                                //0x54c
    ULONG IoBoostCount;                                                     //0x550
    ULONG IoQoSBoostCount;                                                  //0x554
    ULONG IoQoSThrottleCount;                                               //0x558
    ULONG KernelStackReference;                                             //0x55c
    struct _LIST_ENTRY BoostList;                                           //0x560
    struct _LIST_ENTRY DeboostList;                                         //0x570
    ULONGLONG BoostListLock;                                                //0x580
    ULONGLONG IrpListLock;                                                  //0x588
    VOID* ReservedForSynchTracking;                                         //0x590
    struct _SINGLE_LIST_ENTRY CmCallbackListHead;                           //0x598
    struct _GUID* ActivityId;                                               //0x5a0
    struct _SINGLE_LIST_ENTRY SeLearningModeListHead;                       //0x5a8
    VOID* VerifierContext;                                                  //0x5b0
    VOID* AdjustedClientToken;                                              //0x5b8
    VOID* WorkOnBehalfThread;                                               //0x5c0
    struct _PS_PROPERTY_SET PropertySet;                                    //0x5c8
    VOID* PicoContext;                                                      //0x5e0
    ULONGLONG UserFsBase;                                                   //0x5e8
    ULONGLONG UserGsBase;                                                   //0x5f0
    struct _THREAD_ENERGY_VALUES* EnergyValues;                             //0x5f8
    union
    {
        ULONGLONG SelectedCpuSets;                                          //0x600
        ULONGLONG* SelectedCpuSetsIndirect;                                 //0x600
    };
    struct _EJOB* Silo;                                                     //0x608
    struct _UNICODE_STRING* ThreadName;                                     //0x610
    struct _CONTEXT* SetContextState;                                       //0x618
    ULONG LastExpectedRunTime;                                              //0x620
    ULONG HeapData;                                                         //0x624
    struct _LIST_ENTRY OwnerEntryListHead;                                  //0x628
    ULONGLONG DisownedOwnerEntryListLock;                                   //0x638
    struct _LIST_ENTRY DisownedOwnerEntryListHead;                          //0x640
    struct _KLOCK_ENTRY LockEntries[6];                                     //0x650
    VOID* CmDbgInfo;                                                        //0x890
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
// _NONOPAQUE_OPLOCK
// _POP_IRP_WORKER_ENTRY
// _POP_SHUTDOWN_BUG_CHECK
// _RH_OP_CONTEXT
// _VF_KE_CRITICAL_REGION_TRACE
// _VF_POOL_TRACE
// _VI_FAULT_TRACE
// _WMI_LOGGER_CONTEXT
// _WORK_QUEUE_ENTRY

