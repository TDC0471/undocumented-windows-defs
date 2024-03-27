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

//0x818 bytes (sizeof)
struct _ETHREAD
{
    struct _KTHREAD Tcb;                                                    //0x0
    union _LARGE_INTEGER CreateTime;                                        //0x5f0
    union
    {
        union _LARGE_INTEGER ExitTime;                                      //0x5f8
        struct _LIST_ENTRY KeyedWaitChain;                                  //0x5f8
    };
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
    VOID* ChargeOnlySession;                                                //0x698
    VOID* LegacyPowerObject;                                                //0x6a0
    struct _LIST_ENTRY ThreadListEntry;                                     //0x6a8
    struct _EX_RUNDOWN_REF RundownProtect;                                  //0x6b8
    struct _EX_PUSH_LOCK ThreadLock;                                        //0x6c0
    ULONG ReadClusterSize;                                                  //0x6c8
    volatile LONG MmLockOrdering;                                           //0x6cc
    union
    {
        ULONG CrossThreadFlags;                                             //0x6d0
        struct
        {
            ULONG Terminated:1;                                             //0x6d0
            ULONG ThreadInserted:1;                                         //0x6d0
            ULONG HideFromDebugger:1;                                       //0x6d0
            ULONG ActiveImpersonationInfo:1;                                //0x6d0
            ULONG HardErrorsAreDisabled:1;                                  //0x6d0
            ULONG BreakOnTermination:1;                                     //0x6d0
            ULONG SkipCreationMsg:1;                                        //0x6d0
            ULONG SkipTerminationMsg:1;                                     //0x6d0
            ULONG CopyTokenOnOpen:1;                                        //0x6d0
            ULONG ThreadIoPriority:3;                                       //0x6d0
            ULONG ThreadPagePriority:3;                                     //0x6d0
            ULONG RundownFail:1;                                            //0x6d0
            ULONG UmsForceQueueTermination:1;                               //0x6d0
            ULONG IndirectCpuSets:1;                                        //0x6d0
            ULONG DisableDynamicCodeOptOut:1;                               //0x6d0
            ULONG ExplicitCaseSensitivity:1;                                //0x6d0
            ULONG PicoNotifyExit:1;                                         //0x6d0
            ULONG DbgWerUserReportActive:1;                                 //0x6d0
            ULONG ForcedSelfTrimActive:1;                                   //0x6d0
            ULONG ReservedCrossThreadFlags:9;                               //0x6d0
        };
    };
    union
    {
        ULONG SameThreadPassiveFlags;                                       //0x6d4
        struct
        {
            ULONG ActiveExWorker:1;                                         //0x6d4
            ULONG MemoryMaker:1;                                            //0x6d4
            ULONG StoreLockThread:2;                                        //0x6d4
            ULONG ClonedThread:1;                                           //0x6d4
            ULONG KeyedEventInUse:1;                                        //0x6d4
            ULONG SelfTerminate:1;                                          //0x6d4
            ULONG RespectIoPriority:1;                                      //0x6d4
            ULONG ActivePageLists:1;                                        //0x6d4
            ULONG SecureContext:1;                                          //0x6d4
            ULONG ZeroPageThread:1;                                         //0x6d4
            ULONG ReservedSameThreadPassiveFlags:21;                        //0x6d4
        };
    };
    union
    {
        ULONG SameThreadApcFlags;                                           //0x6d8
        struct
        {
            UCHAR OwnsProcessAddressSpaceExclusive:1;                       //0x6d8
            UCHAR OwnsProcessAddressSpaceShared:1;                          //0x6d8
            UCHAR HardFaultBehavior:1;                                      //0x6d8
            volatile UCHAR StartAddressInvalid:1;                           //0x6d8
            UCHAR EtwCalloutActive:1;                                       //0x6d8
            UCHAR SuppressSymbolLoad:1;                                     //0x6d8
            UCHAR Prefetching:1;                                            //0x6d8
            UCHAR OwnsVadExclusive:1;                                       //0x6d8
            UCHAR SystemPagePriorityActive:1;                               //0x6d9
            UCHAR SystemPagePriority:3;                                     //0x6d9
            UCHAR AllowWritesToExecutableMemory:1;                          //0x6d9
        };
    };
    UCHAR CacheManagerActive;                                               //0x6dc
    UCHAR DisablePageFaultClustering;                                       //0x6dd
    UCHAR ActiveFaultCount;                                                 //0x6de
    UCHAR LockOrderState;                                                   //0x6df
    ULONGLONG AlpcMessageId;                                                //0x6e0
    union
    {
        VOID* AlpcMessage;                                                  //0x6e8
        ULONG AlpcReceiveAttributeSet;                                      //0x6e8
    };
    struct _LIST_ENTRY AlpcWaitListEntry;                                   //0x6f0
    LONG ExitStatus;                                                        //0x700
    ULONG CacheManagerCount;                                                //0x704
    ULONG IoBoostCount;                                                     //0x708
    ULONG IoQoSBoostCount;                                                  //0x70c
    ULONG IoQoSThrottleCount;                                               //0x710
    struct _LIST_ENTRY BoostList;                                           //0x718
    struct _LIST_ENTRY DeboostList;                                         //0x728
    ULONGLONG BoostListLock;                                                //0x738
    ULONGLONG IrpListLock;                                                  //0x740
    VOID* ReservedForSynchTracking;                                         //0x748
    struct _SINGLE_LIST_ENTRY CmCallbackListHead;                           //0x750
    struct _GUID* ActivityId;                                               //0x758
    struct _SINGLE_LIST_ENTRY SeLearningModeListHead;                       //0x760
    VOID* VerifierContext;                                                  //0x768
    ULONG KernelStackReference;                                             //0x770
    VOID* AdjustedClientToken;                                              //0x778
    VOID* WorkOnBehalfThread;                                               //0x780
    struct _PS_PROPERTY_SET PropertySet;                                    //0x788
    VOID* PicoContext;                                                      //0x7a0
    ULONGLONG UserFsBase;                                                   //0x7a8
    ULONGLONG UserGsBase;                                                   //0x7b0
    struct _THREAD_ENERGY_VALUES* EnergyValues;                             //0x7b8
    VOID* CmDbgInfo;                                                        //0x7c0
    union
    {
        ULONGLONG SelectedCpuSets;                                          //0x7c8
        ULONGLONG* SelectedCpuSetsIndirect;                                 //0x7c8
    };
    struct _EJOB* Silo;                                                     //0x7d0
    struct _UNICODE_STRING* ThreadName;                                     //0x7d8
    struct _CONTEXT* SetContextState;                                       //0x7e0
    ULONG LastExpectedRunTime;                                              //0x7e8
    struct _LIST_ENTRY OwnerEntryListHead;                                  //0x7f0
    ULONGLONG DisownedOwnerEntryListLock;                                   //0x800
    struct _LIST_ENTRY DisownedOwnerEntryListHead;                          //0x808
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

