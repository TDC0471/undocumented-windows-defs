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

//0x480 bytes (sizeof)
struct _ETHREAD
{
    struct _KTHREAD Tcb;                                                    //0x0
    union _LARGE_INTEGER CreateTime;                                        //0x350
    union
    {
        union _LARGE_INTEGER ExitTime;                                      //0x358
        struct _LIST_ENTRY KeyedWaitChain;                                  //0x358
    };
    VOID* ChargeOnlySession;                                                //0x360
    union
    {
        struct _LIST_ENTRY PostBlockList;                                   //0x364
        struct
        {
            VOID* ForwardLinkShadow;                                        //0x364
            VOID* StartAddress;                                             //0x368
        };
    };
    union
    {
        struct _TERMINATION_PORT* TerminationPort;                          //0x36c
        struct _ETHREAD* ReaperLink;                                        //0x36c
        VOID* KeyedWaitValue;                                               //0x36c
    };
    ULONG ActiveTimerListLock;                                              //0x370
    struct _LIST_ENTRY ActiveTimerListHead;                                 //0x374
    struct _CLIENT_ID Cid;                                                  //0x37c
    union
    {
        struct _KSEMAPHORE KeyedWaitSemaphore;                              //0x384
        struct _KSEMAPHORE AlpcWaitSemaphore;                               //0x384
    };
    union _PS_CLIENT_SECURITY_CONTEXT ClientSecurity;                       //0x398
    struct _LIST_ENTRY IrpList;                                             //0x39c
    ULONG TopLevelIrp;                                                      //0x3a4
    struct _DEVICE_OBJECT* DeviceToVerify;                                  //0x3a8
    VOID* Win32StartAddress;                                                //0x3ac
    VOID* LegacyPowerObject;                                                //0x3b0
    struct _LIST_ENTRY ThreadListEntry;                                     //0x3b4
    struct _EX_RUNDOWN_REF RundownProtect;                                  //0x3bc
    struct _EX_PUSH_LOCK ThreadLock;                                        //0x3c0
    ULONG ReadClusterSize;                                                  //0x3c4
    volatile LONG MmLockOrdering;                                           //0x3c8
    union
    {
        ULONG CrossThreadFlags;                                             //0x3cc
        struct
        {
            ULONG Terminated:1;                                             //0x3cc
            ULONG ThreadInserted:1;                                         //0x3cc
            ULONG HideFromDebugger:1;                                       //0x3cc
            ULONG ActiveImpersonationInfo:1;                                //0x3cc
            ULONG HardErrorsAreDisabled:1;                                  //0x3cc
            ULONG BreakOnTermination:1;                                     //0x3cc
            ULONG SkipCreationMsg:1;                                        //0x3cc
            ULONG SkipTerminationMsg:1;                                     //0x3cc
            ULONG CopyTokenOnOpen:1;                                        //0x3cc
            ULONG ThreadIoPriority:3;                                       //0x3cc
            ULONG ThreadPagePriority:3;                                     //0x3cc
            ULONG RundownFail:1;                                            //0x3cc
            ULONG UmsForceQueueTermination:1;                               //0x3cc
            ULONG IndirectCpuSets:1;                                        //0x3cc
            ULONG DisableDynamicCodeOptOut:1;                               //0x3cc
            ULONG ExplicitCaseSensitivity:1;                                //0x3cc
            ULONG PicoNotifyExit:1;                                         //0x3cc
            ULONG DbgWerUserReportActive:1;                                 //0x3cc
            ULONG ForcedSelfTrimActive:1;                                   //0x3cc
            ULONG ReservedCrossThreadFlags:9;                               //0x3cc
        };
    };
    union
    {
        ULONG SameThreadPassiveFlags;                                       //0x3d0
        struct
        {
            ULONG ActiveExWorker:1;                                         //0x3d0
            ULONG MemoryMaker:1;                                            //0x3d0
            ULONG StoreLockThread:2;                                        //0x3d0
            ULONG ClonedThread:1;                                           //0x3d0
            ULONG KeyedEventInUse:1;                                        //0x3d0
            ULONG SelfTerminate:1;                                          //0x3d0
            ULONG RespectIoPriority:1;                                      //0x3d0
            ULONG ActivePageLists:1;                                        //0x3d0
            ULONG SecureContext:1;                                          //0x3d0
            ULONG ZeroPageThread:1;                                         //0x3d0
            ULONG ReservedSameThreadPassiveFlags:21;                        //0x3d0
        };
    };
    union
    {
        ULONG SameThreadApcFlags;                                           //0x3d4
        struct
        {
            UCHAR OwnsProcessAddressSpaceExclusive:1;                       //0x3d4
            UCHAR OwnsProcessAddressSpaceShared:1;                          //0x3d4
            UCHAR HardFaultBehavior:1;                                      //0x3d4
            volatile UCHAR StartAddressInvalid:1;                           //0x3d4
            UCHAR EtwCalloutActive:1;                                       //0x3d4
            UCHAR SuppressSymbolLoad:1;                                     //0x3d4
            UCHAR Prefetching:1;                                            //0x3d4
            UCHAR OwnsVadExclusive:1;                                       //0x3d4
            UCHAR SystemPagePriorityActive:1;                               //0x3d5
            UCHAR SystemPagePriority:3;                                     //0x3d5
            UCHAR AllowWritesToExecutableMemory:1;                          //0x3d5
        };
    };
    UCHAR CacheManagerActive;                                               //0x3d8
    UCHAR DisablePageFaultClustering;                                       //0x3d9
    UCHAR ActiveFaultCount;                                                 //0x3da
    UCHAR LockOrderState;                                                   //0x3db
    ULONG AlpcMessageId;                                                    //0x3dc
    union
    {
        VOID* AlpcMessage;                                                  //0x3e0
        ULONG AlpcReceiveAttributeSet;                                      //0x3e0
    };
    struct _LIST_ENTRY AlpcWaitListEntry;                                   //0x3e4
    LONG ExitStatus;                                                        //0x3ec
    ULONG CacheManagerCount;                                                //0x3f0
    ULONG IoBoostCount;                                                     //0x3f4
    ULONG IoQoSBoostCount;                                                  //0x3f8
    ULONG IoQoSThrottleCount;                                               //0x3fc
    struct _LIST_ENTRY BoostList;                                           //0x400
    struct _LIST_ENTRY DeboostList;                                         //0x408
    ULONG BoostListLock;                                                    //0x410
    ULONG IrpListLock;                                                      //0x414
    VOID* ReservedForSynchTracking;                                         //0x418
    struct _SINGLE_LIST_ENTRY CmCallbackListHead;                           //0x41c
    struct _GUID* ActivityId;                                               //0x420
    struct _SINGLE_LIST_ENTRY SeLearningModeListHead;                       //0x424
    VOID* VerifierContext;                                                  //0x428
    ULONG KernelStackReference;                                             //0x42c
    VOID* AdjustedClientToken;                                              //0x430
    VOID* WorkOnBehalfThread;                                               //0x434
    struct _PS_PROPERTY_SET PropertySet;                                    //0x438
    VOID* PicoContext;                                                      //0x444
    ULONG UserFsBase;                                                       //0x448
    ULONG UserGsBase;                                                       //0x44c
    struct _THREAD_ENERGY_VALUES* EnergyValues;                             //0x450
    VOID* CmDbgInfo;                                                        //0x454
    union
    {
        ULONG SelectedCpuSets;                                              //0x458
        ULONG* SelectedCpuSetsIndirect;                                     //0x458
    };
    struct _EJOB* Silo;                                                     //0x45c
    struct _UNICODE_STRING* ThreadName;                                     //0x460
    ULONG LastExpectedRunTime;                                              //0x464
    struct _LIST_ENTRY OwnerEntryListHead;                                  //0x468
    ULONG DisownedOwnerEntryListLock;                                       //0x470
    struct _LIST_ENTRY DisownedOwnerEntryListHead;                          //0x474
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

