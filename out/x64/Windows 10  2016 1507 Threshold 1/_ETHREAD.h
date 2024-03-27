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
#include <_ESILO.h>

//0x7c0 bytes (sizeof)
struct _ETHREAD
{
    struct _KTHREAD Tcb;                                                    //0x0
    union _LARGE_INTEGER CreateTime;                                        //0x5d8
    union
    {
        union _LARGE_INTEGER ExitTime;                                      //0x5e0
        struct _LIST_ENTRY KeyedWaitChain;                                  //0x5e0
    };
    VOID* ChargeOnlySession;                                                //0x5f0
    union
    {
        struct _LIST_ENTRY PostBlockList;                                   //0x5f8
        struct
        {
            VOID* ForwardLinkShadow;                                        //0x5f8
            VOID* StartAddress;                                             //0x600
        };
    };
    union
    {
        struct _TERMINATION_PORT* TerminationPort;                          //0x608
        struct _ETHREAD* ReaperLink;                                        //0x608
        VOID* KeyedWaitValue;                                               //0x608
    };
    ULONGLONG ActiveTimerListLock;                                          //0x610
    struct _LIST_ENTRY ActiveTimerListHead;                                 //0x618
    struct _CLIENT_ID Cid;                                                  //0x628
    union
    {
        struct _KSEMAPHORE KeyedWaitSemaphore;                              //0x638
        struct _KSEMAPHORE AlpcWaitSemaphore;                               //0x638
    };
    union _PS_CLIENT_SECURITY_CONTEXT ClientSecurity;                       //0x658
    struct _LIST_ENTRY IrpList;                                             //0x660
    ULONGLONG TopLevelIrp;                                                  //0x670
    struct _DEVICE_OBJECT* DeviceToVerify;                                  //0x678
    VOID* Win32StartAddress;                                                //0x680
    VOID* LegacyPowerObject;                                                //0x688
    struct _LIST_ENTRY ThreadListEntry;                                     //0x690
    struct _EX_RUNDOWN_REF RundownProtect;                                  //0x6a0
    struct _EX_PUSH_LOCK ThreadLock;                                        //0x6a8
    ULONG ReadClusterSize;                                                  //0x6b0
    volatile LONG MmLockOrdering;                                           //0x6b4
    volatile LONG CmLockOrdering;                                           //0x6b8
    union
    {
        ULONG CrossThreadFlags;                                             //0x6bc
        struct
        {
            ULONG Terminated:1;                                             //0x6bc
            ULONG ThreadInserted:1;                                         //0x6bc
            ULONG HideFromDebugger:1;                                       //0x6bc
            ULONG ActiveImpersonationInfo:1;                                //0x6bc
            ULONG HardErrorsAreDisabled:1;                                  //0x6bc
            ULONG BreakOnTermination:1;                                     //0x6bc
            ULONG SkipCreationMsg:1;                                        //0x6bc
            ULONG SkipTerminationMsg:1;                                     //0x6bc
            ULONG CopyTokenOnOpen:1;                                        //0x6bc
            ULONG ThreadIoPriority:3;                                       //0x6bc
            ULONG ThreadPagePriority:3;                                     //0x6bc
            ULONG RundownFail:1;                                            //0x6bc
            ULONG UmsForceQueueTermination:1;                               //0x6bc
            ULONG IndirectCpuSets:1;                                        //0x6bc
            ULONG ReservedCrossThreadFlags:14;                              //0x6bc
        };
    };
    union
    {
        ULONG SameThreadPassiveFlags;                                       //0x6c0
        struct
        {
            ULONG ActiveExWorker:1;                                         //0x6c0
            ULONG MemoryMaker:1;                                            //0x6c0
            ULONG ClonedThread:1;                                           //0x6c0
            ULONG KeyedEventInUse:1;                                        //0x6c0
            ULONG SelfTerminate:1;                                          //0x6c0
            ULONG RespectIoPriority:1;                                      //0x6c0
            ULONG ReservedSameThreadPassiveFlags:26;                        //0x6c0
        };
    };
    union
    {
        ULONG SameThreadApcFlags;                                           //0x6c4
        struct
        {
            UCHAR OwnsProcessAddressSpaceExclusive:1;                       //0x6c4
            UCHAR OwnsProcessAddressSpaceShared:1;                          //0x6c4
            UCHAR HardFaultBehavior:1;                                      //0x6c4
            volatile UCHAR StartAddressInvalid:1;                           //0x6c4
            UCHAR EtwCalloutActive:1;                                       //0x6c4
            UCHAR SuppressSymbolLoad:1;                                     //0x6c4
            UCHAR Prefetching:1;                                            //0x6c4
            UCHAR OwnsVadExclusive:1;                                       //0x6c4
            UCHAR SystemPagePriorityActive:1;                               //0x6c5
            UCHAR SystemPagePriority:3;                                     //0x6c5
        };
    };
    UCHAR CacheManagerActive;                                               //0x6c8
    UCHAR DisablePageFaultClustering;                                       //0x6c9
    UCHAR ActiveFaultCount;                                                 //0x6ca
    UCHAR LockOrderState;                                                   //0x6cb
    ULONGLONG AlpcMessageId;                                                //0x6d0
    union
    {
        VOID* AlpcMessage;                                                  //0x6d8
        ULONG AlpcReceiveAttributeSet;                                      //0x6d8
    };
    LONG ExitStatus;                                                        //0x6e0
    struct _LIST_ENTRY AlpcWaitListEntry;                                   //0x6e8
    ULONG CacheManagerCount;                                                //0x6f8
    ULONG IoBoostCount;                                                     //0x6fc
    struct _LIST_ENTRY BoostList;                                           //0x700
    struct _LIST_ENTRY DeboostList;                                         //0x710
    ULONGLONG BoostListLock;                                                //0x720
    ULONGLONG IrpListLock;                                                  //0x728
    VOID* ReservedForSynchTracking;                                         //0x730
    struct _SINGLE_LIST_ENTRY CmCallbackListHead;                           //0x738
    struct _GUID* ActivityId;                                               //0x740
    struct _SINGLE_LIST_ENTRY SeLearningModeListHead;                       //0x748
    VOID* VerifierContext;                                                  //0x750
    ULONG KernelStackReference;                                             //0x758
    VOID* AdjustedClientToken;                                              //0x760
    VOID* WorkingOnBehalfClient;                                            //0x768
    struct _PS_PROPERTY_SET PropertySet;                                    //0x770
    VOID* PicoContext;                                                      //0x788
    ULONG UserFsBase;                                                       //0x790
    ULONGLONG UserGsBase;                                                   //0x798
    struct _THREAD_ENERGY_VALUES* EnergyValues;                             //0x7a0
    volatile ULONG CmCellReferences;                                        //0x7a8
    union
    {
        ULONGLONG SelectedCpuSets;                                          //0x7b0
        ULONGLONG* SelectedCpuSetsIndirect;                                 //0x7b0
    };
    struct _ESILO* Silo;                                                    //0x7b8
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

