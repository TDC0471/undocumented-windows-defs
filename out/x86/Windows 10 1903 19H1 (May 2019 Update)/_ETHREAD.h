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

//0x488 bytes (sizeof)
struct _ETHREAD
{
    struct _KTHREAD Tcb;                                                    //0x0
    union _LARGE_INTEGER CreateTime;                                        //0x358
    union
    {
        union _LARGE_INTEGER ExitTime;                                      //0x360
        struct _LIST_ENTRY KeyedWaitChain;                                  //0x360
    };
    VOID* ChargeOnlySession;                                                //0x368
    union
    {
        struct _LIST_ENTRY PostBlockList;                                   //0x36c
        struct
        {
            VOID* ForwardLinkShadow;                                        //0x36c
            VOID* StartAddress;                                             //0x370
        };
    };
    union
    {
        struct _TERMINATION_PORT* TerminationPort;                          //0x374
        struct _ETHREAD* ReaperLink;                                        //0x374
        VOID* KeyedWaitValue;                                               //0x374
    };
    ULONG ActiveTimerListLock;                                              //0x378
    struct _LIST_ENTRY ActiveTimerListHead;                                 //0x37c
    struct _CLIENT_ID Cid;                                                  //0x384
    union
    {
        struct _KSEMAPHORE KeyedWaitSemaphore;                              //0x38c
        struct _KSEMAPHORE AlpcWaitSemaphore;                               //0x38c
    };
    union _PS_CLIENT_SECURITY_CONTEXT ClientSecurity;                       //0x3a0
    struct _LIST_ENTRY IrpList;                                             //0x3a4
    ULONG TopLevelIrp;                                                      //0x3ac
    struct _DEVICE_OBJECT* DeviceToVerify;                                  //0x3b0
    VOID* Win32StartAddress;                                                //0x3b4
    VOID* LegacyPowerObject;                                                //0x3b8
    struct _LIST_ENTRY ThreadListEntry;                                     //0x3bc
    struct _EX_RUNDOWN_REF RundownProtect;                                  //0x3c4
    struct _EX_PUSH_LOCK ThreadLock;                                        //0x3c8
    ULONG ReadClusterSize;                                                  //0x3cc
    volatile LONG MmLockOrdering;                                           //0x3d0
    union
    {
        ULONG CrossThreadFlags;                                             //0x3d4
        struct
        {
            ULONG Terminated:1;                                             //0x3d4
            ULONG ThreadInserted:1;                                         //0x3d4
            ULONG HideFromDebugger:1;                                       //0x3d4
            ULONG ActiveImpersonationInfo:1;                                //0x3d4
            ULONG HardErrorsAreDisabled:1;                                  //0x3d4
            ULONG BreakOnTermination:1;                                     //0x3d4
            ULONG SkipCreationMsg:1;                                        //0x3d4
            ULONG SkipTerminationMsg:1;                                     //0x3d4
            ULONG CopyTokenOnOpen:1;                                        //0x3d4
            ULONG ThreadIoPriority:3;                                       //0x3d4
            ULONG ThreadPagePriority:3;                                     //0x3d4
            ULONG RundownFail:1;                                            //0x3d4
            ULONG UmsForceQueueTermination:1;                               //0x3d4
            ULONG IndirectCpuSets:1;                                        //0x3d4
            ULONG DisableDynamicCodeOptOut:1;                               //0x3d4
            ULONG ExplicitCaseSensitivity:1;                                //0x3d4
            ULONG PicoNotifyExit:1;                                         //0x3d4
            ULONG DbgWerUserReportActive:1;                                 //0x3d4
            ULONG ForcedSelfTrimActive:1;                                   //0x3d4
            ULONG SamplingCoverage:1;                                       //0x3d4
            ULONG ReservedCrossThreadFlags:8;                               //0x3d4
        };
    };
    union
    {
        ULONG SameThreadPassiveFlags;                                       //0x3d8
        struct
        {
            ULONG ActiveExWorker:1;                                         //0x3d8
            ULONG MemoryMaker:1;                                            //0x3d8
            ULONG StoreLockThread:2;                                        //0x3d8
            ULONG ClonedThread:1;                                           //0x3d8
            ULONG KeyedEventInUse:1;                                        //0x3d8
            ULONG SelfTerminate:1;                                          //0x3d8
            ULONG RespectIoPriority:1;                                      //0x3d8
            ULONG ActivePageLists:1;                                        //0x3d8
            ULONG SecureContext:1;                                          //0x3d8
            ULONG ZeroPageThread:1;                                         //0x3d8
            ULONG WorkloadClass:1;                                          //0x3d8
            ULONG ReservedSameThreadPassiveFlags:20;                        //0x3d8
        };
    };
    union
    {
        ULONG SameThreadApcFlags;                                           //0x3dc
        struct
        {
            UCHAR OwnsProcessAddressSpaceExclusive:1;                       //0x3dc
            UCHAR OwnsProcessAddressSpaceShared:1;                          //0x3dc
            UCHAR HardFaultBehavior:1;                                      //0x3dc
            volatile UCHAR StartAddressInvalid:1;                           //0x3dc
            UCHAR EtwCalloutActive:1;                                       //0x3dc
            UCHAR SuppressSymbolLoad:1;                                     //0x3dc
            UCHAR Prefetching:1;                                            //0x3dc
            UCHAR OwnsVadExclusive:1;                                       //0x3dc
            UCHAR SystemPagePriorityActive:1;                               //0x3dd
            UCHAR SystemPagePriority:3;                                     //0x3dd
            UCHAR AllowUserWritesToExecutableMemory:1;                      //0x3dd
            UCHAR AllowKernelWritesToExecutableMemory:1;                    //0x3dd
            UCHAR OwnsVadShared:1;                                          //0x3dd
        };
    };
    UCHAR CacheManagerActive;                                               //0x3e0
    UCHAR DisablePageFaultClustering;                                       //0x3e1
    UCHAR ActiveFaultCount;                                                 //0x3e2
    UCHAR LockOrderState;                                                   //0x3e3
    ULONG AlpcMessageId;                                                    //0x3e4
    union
    {
        VOID* AlpcMessage;                                                  //0x3e8
        ULONG AlpcReceiveAttributeSet;                                      //0x3e8
    };
    struct _LIST_ENTRY AlpcWaitListEntry;                                   //0x3ec
    LONG ExitStatus;                                                        //0x3f4
    ULONG CacheManagerCount;                                                //0x3f8
    ULONG IoBoostCount;                                                     //0x3fc
    ULONG IoQoSBoostCount;                                                  //0x400
    ULONG IoQoSThrottleCount;                                               //0x404
    ULONG KernelStackReference;                                             //0x408
    struct _LIST_ENTRY BoostList;                                           //0x40c
    struct _LIST_ENTRY DeboostList;                                         //0x414
    ULONG BoostListLock;                                                    //0x41c
    ULONG IrpListLock;                                                      //0x420
    VOID* ReservedForSynchTracking;                                         //0x424
    struct _SINGLE_LIST_ENTRY CmCallbackListHead;                           //0x428
    struct _GUID* ActivityId;                                               //0x42c
    struct _SINGLE_LIST_ENTRY SeLearningModeListHead;                       //0x430
    VOID* VerifierContext;                                                  //0x434
    VOID* AdjustedClientToken;                                              //0x438
    VOID* WorkOnBehalfThread;                                               //0x43c
    struct _PS_PROPERTY_SET PropertySet;                                    //0x440
    VOID* PicoContext;                                                      //0x44c
    ULONG UserFsBase;                                                       //0x450
    ULONG UserGsBase;                                                       //0x454
    struct _THREAD_ENERGY_VALUES* EnergyValues;                             //0x458
    VOID* CmDbgInfo;                                                        //0x45c
    union
    {
        ULONG SelectedCpuSets;                                              //0x460
        ULONG* SelectedCpuSetsIndirect;                                     //0x460
    };
    struct _EJOB* Silo;                                                     //0x464
    struct _UNICODE_STRING* ThreadName;                                     //0x468
    ULONG LastExpectedRunTime;                                              //0x46c
    ULONG HeapData;                                                         //0x470
    struct _LIST_ENTRY OwnerEntryListHead;                                  //0x474
    ULONG DisownedOwnerEntryListLock;                                       //0x47c
    struct _LIST_ENTRY DisownedOwnerEntryListHead;                          //0x480
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

