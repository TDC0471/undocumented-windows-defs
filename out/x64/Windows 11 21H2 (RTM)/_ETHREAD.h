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

//0x8f0 bytes (sizeof)
struct _ETHREAD
{
    struct _KTHREAD Tcb;                                                    //0x0
    union _LARGE_INTEGER CreateTime;                                        //0x480
    union
    {
        union _LARGE_INTEGER ExitTime;                                      //0x488
        struct _LIST_ENTRY KeyedWaitChain;                                  //0x488
    };
    union
    {
        struct _LIST_ENTRY PostBlockList;                                   //0x498
        struct
        {
            VOID* ForwardLinkShadow;                                        //0x498
            VOID* StartAddress;                                             //0x4a0
        };
    };
    union
    {
        struct _TERMINATION_PORT* TerminationPort;                          //0x4a8
        struct _ETHREAD* ReaperLink;                                        //0x4a8
        VOID* KeyedWaitValue;                                               //0x4a8
    };
    ULONGLONG ActiveTimerListLock;                                          //0x4b0
    struct _LIST_ENTRY ActiveTimerListHead;                                 //0x4b8
    struct _CLIENT_ID Cid;                                                  //0x4c8
    union
    {
        struct _KSEMAPHORE KeyedWaitSemaphore;                              //0x4d8
        struct _KSEMAPHORE AlpcWaitSemaphore;                               //0x4d8
    };
    union _PS_CLIENT_SECURITY_CONTEXT ClientSecurity;                       //0x4f8
    struct _LIST_ENTRY IrpList;                                             //0x500
    ULONGLONG TopLevelIrp;                                                  //0x510
    struct _DEVICE_OBJECT* DeviceToVerify;                                  //0x518
    VOID* Win32StartAddress;                                                //0x520
    VOID* ChargeOnlySession;                                                //0x528
    VOID* LegacyPowerObject;                                                //0x530
    struct _LIST_ENTRY ThreadListEntry;                                     //0x538
    struct _EX_RUNDOWN_REF RundownProtect;                                  //0x548
    struct _EX_PUSH_LOCK ThreadLock;                                        //0x550
    ULONG ReadClusterSize;                                                  //0x558
    volatile LONG MmLockOrdering;                                           //0x55c
    union
    {
        ULONG CrossThreadFlags;                                             //0x560
        struct
        {
            ULONG Terminated:1;                                             //0x560
            ULONG ThreadInserted:1;                                         //0x560
            ULONG HideFromDebugger:1;                                       //0x560
            ULONG ActiveImpersonationInfo:1;                                //0x560
            ULONG HardErrorsAreDisabled:1;                                  //0x560
            ULONG BreakOnTermination:1;                                     //0x560
            ULONG SkipCreationMsg:1;                                        //0x560
            ULONG SkipTerminationMsg:1;                                     //0x560
            ULONG CopyTokenOnOpen:1;                                        //0x560
            ULONG ThreadIoPriority:3;                                       //0x560
            ULONG ThreadPagePriority:3;                                     //0x560
            ULONG RundownFail:1;                                            //0x560
            ULONG UmsForceQueueTermination:1;                               //0x560
            ULONG IndirectCpuSets:1;                                        //0x560
            ULONG DisableDynamicCodeOptOut:1;                               //0x560
            ULONG ExplicitCaseSensitivity:1;                                //0x560
            ULONG PicoNotifyExit:1;                                         //0x560
            ULONG DbgWerUserReportActive:1;                                 //0x560
            ULONG ForcedSelfTrimActive:1;                                   //0x560
            ULONG SamplingCoverage:1;                                       //0x560
            ULONG ReservedCrossThreadFlags:8;                               //0x560
        };
    };
    union
    {
        ULONG SameThreadPassiveFlags;                                       //0x564
        struct
        {
            ULONG ActiveExWorker:1;                                         //0x564
            ULONG MemoryMaker:1;                                            //0x564
            ULONG StoreLockThread:2;                                        //0x564
            ULONG ClonedThread:1;                                           //0x564
            ULONG KeyedEventInUse:1;                                        //0x564
            ULONG SelfTerminate:1;                                          //0x564
            ULONG RespectIoPriority:1;                                      //0x564
            ULONG ActivePageLists:1;                                        //0x564
            ULONG SecureContext:1;                                          //0x564
            ULONG ZeroPageThread:1;                                         //0x564
            ULONG WorkloadClass:1;                                          //0x564
            ULONG ReservedSameThreadPassiveFlags:20;                        //0x564
        };
    };
    union
    {
        ULONG SameThreadApcFlags;                                           //0x568
        struct
        {
            UCHAR OwnsProcessAddressSpaceExclusive:1;                       //0x568
            UCHAR OwnsProcessAddressSpaceShared:1;                          //0x568
            UCHAR HardFaultBehavior:1;                                      //0x568
            volatile UCHAR StartAddressInvalid:1;                           //0x568
            UCHAR EtwCalloutActive:1;                                       //0x568
            UCHAR SuppressSymbolLoad:1;                                     //0x568
            UCHAR Prefetching:1;                                            //0x568
            UCHAR OwnsVadExclusive:1;                                       //0x568
            UCHAR SystemPagePriorityActive:1;                               //0x569
            UCHAR SystemPagePriority:3;                                     //0x569
            UCHAR AllowUserWritesToExecutableMemory:1;                      //0x569
            UCHAR AllowKernelWritesToExecutableMemory:1;                    //0x569
            UCHAR OwnsVadShared:1;                                          //0x569
            UCHAR SessionAttachActive:1;                                    //0x569
            UCHAR PasidMsrValid:1;                                          //0x56a
        };
    };
    UCHAR CacheManagerActive;                                               //0x56c
    UCHAR DisablePageFaultClustering;                                       //0x56d
    UCHAR ActiveFaultCount;                                                 //0x56e
    UCHAR LockOrderState;                                                   //0x56f
    ULONG PerformanceCountLowReserved;                                      //0x570
    LONG PerformanceCountHighReserved;                                      //0x574
    ULONGLONG AlpcMessageId;                                                //0x578
    union
    {
        VOID* AlpcMessage;                                                  //0x580
        ULONG AlpcReceiveAttributeSet;                                      //0x580
    };
    struct _LIST_ENTRY AlpcWaitListEntry;                                   //0x588
    LONG ExitStatus;                                                        //0x598
    ULONG CacheManagerCount;                                                //0x59c
    ULONG IoBoostCount;                                                     //0x5a0
    ULONG IoQoSBoostCount;                                                  //0x5a4
    ULONG IoQoSThrottleCount;                                               //0x5a8
    ULONG KernelStackReference;                                             //0x5ac
    struct _LIST_ENTRY BoostList;                                           //0x5b0
    struct _LIST_ENTRY DeboostList;                                         //0x5c0
    ULONGLONG BoostListLock;                                                //0x5d0
    ULONGLONG IrpListLock;                                                  //0x5d8
    VOID* ReservedForSynchTracking;                                         //0x5e0
    struct _SINGLE_LIST_ENTRY CmCallbackListHead;                           //0x5e8
    struct _GUID* ActivityId;                                               //0x5f0
    struct _SINGLE_LIST_ENTRY SeLearningModeListHead;                       //0x5f8
    VOID* VerifierContext;                                                  //0x600
    VOID* AdjustedClientToken;                                              //0x608
    VOID* WorkOnBehalfThread;                                               //0x610
    struct _PS_PROPERTY_SET PropertySet;                                    //0x618
    VOID* PicoContext;                                                      //0x630
    ULONGLONG UserFsBase;                                                   //0x638
    ULONGLONG UserGsBase;                                                   //0x640
    struct _THREAD_ENERGY_VALUES* EnergyValues;                             //0x648
    union
    {
        ULONGLONG SelectedCpuSets;                                          //0x650
        ULONGLONG* SelectedCpuSetsIndirect;                                 //0x650
    };
    struct _EJOB* Silo;                                                     //0x658
    struct _UNICODE_STRING* ThreadName;                                     //0x660
    struct _CONTEXT* SetContextState;                                       //0x668
    ULONG LastExpectedRunTime;                                              //0x670
    ULONG HeapData;                                                         //0x674
    struct _LIST_ENTRY OwnerEntryListHead;                                  //0x678
    ULONGLONG DisownedOwnerEntryListLock;                                   //0x688
    struct _LIST_ENTRY DisownedOwnerEntryListHead;                          //0x690
    struct _KLOCK_ENTRY LockEntries[6];                                     //0x6a0
    VOID* CmThreadInfo;                                                     //0x8e0
    VOID* FlsData;                                                          //0x8e8
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

