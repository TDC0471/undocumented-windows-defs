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
#include <_KLOCK_ENTRY.h>

//0x4e0 bytes (sizeof)
struct _ETHREAD
{
    struct _KTHREAD Tcb;                                                    //0x0
    union _LARGE_INTEGER CreateTime;                                        //0x280
    union
    {
        union _LARGE_INTEGER ExitTime;                                      //0x288
        struct _LIST_ENTRY KeyedWaitChain;                                  //0x288
    };
    VOID* ChargeOnlySession;                                                //0x290
    union
    {
        struct _LIST_ENTRY PostBlockList;                                   //0x294
        struct
        {
            VOID* ForwardLinkShadow;                                        //0x294
            VOID* StartAddress;                                             //0x298
        };
    };
    union
    {
        struct _TERMINATION_PORT* TerminationPort;                          //0x29c
        struct _ETHREAD* ReaperLink;                                        //0x29c
        VOID* KeyedWaitValue;                                               //0x29c
    };
    ULONG ActiveTimerListLock;                                              //0x2a0
    struct _LIST_ENTRY ActiveTimerListHead;                                 //0x2a4
    struct _CLIENT_ID Cid;                                                  //0x2ac
    union
    {
        struct _KSEMAPHORE KeyedWaitSemaphore;                              //0x2b4
        struct _KSEMAPHORE AlpcWaitSemaphore;                               //0x2b4
    };
    union _PS_CLIENT_SECURITY_CONTEXT ClientSecurity;                       //0x2c8
    struct _LIST_ENTRY IrpList;                                             //0x2cc
    ULONG TopLevelIrp;                                                      //0x2d4
    struct _DEVICE_OBJECT* DeviceToVerify;                                  //0x2d8
    VOID* Win32StartAddress;                                                //0x2dc
    VOID* LegacyPowerObject;                                                //0x2e0
    struct _LIST_ENTRY ThreadListEntry;                                     //0x2e4
    struct _EX_RUNDOWN_REF RundownProtect;                                  //0x2ec
    struct _EX_PUSH_LOCK ThreadLock;                                        //0x2f0
    ULONG ReadClusterSize;                                                  //0x2f4
    volatile LONG MmLockOrdering;                                           //0x2f8
    union
    {
        ULONG CrossThreadFlags;                                             //0x2fc
        struct
        {
            ULONG Terminated:1;                                             //0x2fc
            ULONG ThreadInserted:1;                                         //0x2fc
            ULONG HideFromDebugger:1;                                       //0x2fc
            ULONG ActiveImpersonationInfo:1;                                //0x2fc
            ULONG HardErrorsAreDisabled:1;                                  //0x2fc
            ULONG BreakOnTermination:1;                                     //0x2fc
            ULONG SkipCreationMsg:1;                                        //0x2fc
            ULONG SkipTerminationMsg:1;                                     //0x2fc
            ULONG CopyTokenOnOpen:1;                                        //0x2fc
            ULONG ThreadIoPriority:3;                                       //0x2fc
            ULONG ThreadPagePriority:3;                                     //0x2fc
            ULONG RundownFail:1;                                            //0x2fc
            ULONG UmsForceQueueTermination:1;                               //0x2fc
            ULONG IndirectCpuSets:1;                                        //0x2fc
            ULONG DisableDynamicCodeOptOut:1;                               //0x2fc
            ULONG ExplicitCaseSensitivity:1;                                //0x2fc
            ULONG PicoNotifyExit:1;                                         //0x2fc
            ULONG DbgWerUserReportActive:1;                                 //0x2fc
            ULONG ForcedSelfTrimActive:1;                                   //0x2fc
            ULONG SamplingCoverage:1;                                       //0x2fc
            ULONG ReservedCrossThreadFlags:8;                               //0x2fc
        };
    };
    union
    {
        ULONG SameThreadPassiveFlags;                                       //0x300
        struct
        {
            ULONG ActiveExWorker:1;                                         //0x300
            ULONG MemoryMaker:1;                                            //0x300
            ULONG StoreLockThread:2;                                        //0x300
            ULONG ClonedThread:1;                                           //0x300
            ULONG KeyedEventInUse:1;                                        //0x300
            ULONG SelfTerminate:1;                                          //0x300
            ULONG RespectIoPriority:1;                                      //0x300
            ULONG ActivePageLists:1;                                        //0x300
            ULONG SecureContext:1;                                          //0x300
            ULONG ZeroPageThread:1;                                         //0x300
            ULONG WorkloadClass:1;                                          //0x300
            ULONG ReservedSameThreadPassiveFlags:20;                        //0x300
        };
    };
    union
    {
        ULONG SameThreadApcFlags;                                           //0x304
        struct
        {
            UCHAR OwnsProcessAddressSpaceExclusive:1;                       //0x304
            UCHAR OwnsProcessAddressSpaceShared:1;                          //0x304
            UCHAR HardFaultBehavior:1;                                      //0x304
            volatile UCHAR StartAddressInvalid:1;                           //0x304
            UCHAR EtwCalloutActive:1;                                       //0x304
            UCHAR SuppressSymbolLoad:1;                                     //0x304
            UCHAR Prefetching:1;                                            //0x304
            UCHAR OwnsVadExclusive:1;                                       //0x304
            UCHAR SystemPagePriorityActive:1;                               //0x305
            UCHAR SystemPagePriority:3;                                     //0x305
            UCHAR AllowUserWritesToExecutableMemory:1;                      //0x305
            UCHAR AllowKernelWritesToExecutableMemory:1;                    //0x305
            UCHAR OwnsVadShared:1;                                          //0x305
        };
    };
    UCHAR CacheManagerActive;                                               //0x308
    UCHAR DisablePageFaultClustering;                                       //0x309
    UCHAR ActiveFaultCount;                                                 //0x30a
    UCHAR LockOrderState;                                                   //0x30b
    ULONG PerformanceCountLowReserved;                                      //0x30c
    LONG PerformanceCountHighReserved;                                      //0x310
    ULONG AlpcMessageId;                                                    //0x314
    union
    {
        VOID* AlpcMessage;                                                  //0x318
        ULONG AlpcReceiveAttributeSet;                                      //0x318
    };
    struct _LIST_ENTRY AlpcWaitListEntry;                                   //0x31c
    LONG ExitStatus;                                                        //0x324
    ULONG CacheManagerCount;                                                //0x328
    ULONG IoBoostCount;                                                     //0x32c
    ULONG IoQoSBoostCount;                                                  //0x330
    ULONG IoQoSThrottleCount;                                               //0x334
    ULONG KernelStackReference;                                             //0x338
    struct _LIST_ENTRY BoostList;                                           //0x33c
    struct _LIST_ENTRY DeboostList;                                         //0x344
    ULONG BoostListLock;                                                    //0x34c
    ULONG IrpListLock;                                                      //0x350
    VOID* ReservedForSynchTracking;                                         //0x354
    struct _SINGLE_LIST_ENTRY CmCallbackListHead;                           //0x358
    struct _GUID* ActivityId;                                               //0x35c
    struct _SINGLE_LIST_ENTRY SeLearningModeListHead;                       //0x360
    VOID* VerifierContext;                                                  //0x364
    VOID* AdjustedClientToken;                                              //0x368
    VOID* WorkOnBehalfThread;                                               //0x36c
    struct _PS_PROPERTY_SET PropertySet;                                    //0x370
    VOID* PicoContext;                                                      //0x37c
    ULONG UserFsBase;                                                       //0x380
    ULONG UserGsBase;                                                       //0x384
    struct _THREAD_ENERGY_VALUES* EnergyValues;                             //0x388
    union
    {
        ULONG SelectedCpuSets;                                              //0x38c
        ULONG* SelectedCpuSetsIndirect;                                     //0x38c
    };
    struct _EJOB* Silo;                                                     //0x390
    struct _UNICODE_STRING* ThreadName;                                     //0x394
    VOID* SparePointer;                                                     //0x398
    ULONG LastExpectedRunTime;                                              //0x39c
    ULONG HeapData;                                                         //0x3a0
    struct _LIST_ENTRY OwnerEntryListHead;                                  //0x3a4
    ULONG DisownedOwnerEntryListLock;                                       //0x3ac
    struct _LIST_ENTRY DisownedOwnerEntryListHead;                          //0x3b0
    struct _KLOCK_ENTRY LockEntries[6];                                     //0x3b8
    VOID* CmDbgInfo;                                                        //0x4d8
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

