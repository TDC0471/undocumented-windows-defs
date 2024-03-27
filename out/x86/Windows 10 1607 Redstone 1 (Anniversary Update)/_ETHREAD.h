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

//0x460 bytes (sizeof)
struct _ETHREAD
{
    struct _KTHREAD Tcb;                                                    //0x0
    union _LARGE_INTEGER CreateTime;                                        //0x348
    union
    {
        union _LARGE_INTEGER ExitTime;                                      //0x350
        struct _LIST_ENTRY KeyedWaitChain;                                  //0x350
    };
    VOID* ChargeOnlySession;                                                //0x358
    union
    {
        struct _LIST_ENTRY PostBlockList;                                   //0x35c
        struct
        {
            VOID* ForwardLinkShadow;                                        //0x35c
            VOID* StartAddress;                                             //0x360
        };
    };
    union
    {
        struct _TERMINATION_PORT* TerminationPort;                          //0x364
        struct _ETHREAD* ReaperLink;                                        //0x364
        VOID* KeyedWaitValue;                                               //0x364
    };
    ULONG ActiveTimerListLock;                                              //0x368
    struct _LIST_ENTRY ActiveTimerListHead;                                 //0x36c
    struct _CLIENT_ID Cid;                                                  //0x374
    union
    {
        struct _KSEMAPHORE KeyedWaitSemaphore;                              //0x37c
        struct _KSEMAPHORE AlpcWaitSemaphore;                               //0x37c
    };
    union _PS_CLIENT_SECURITY_CONTEXT ClientSecurity;                       //0x390
    struct _LIST_ENTRY IrpList;                                             //0x394
    ULONG TopLevelIrp;                                                      //0x39c
    struct _DEVICE_OBJECT* DeviceToVerify;                                  //0x3a0
    VOID* Win32StartAddress;                                                //0x3a4
    VOID* LegacyPowerObject;                                                //0x3a8
    struct _LIST_ENTRY ThreadListEntry;                                     //0x3ac
    struct _EX_RUNDOWN_REF RundownProtect;                                  //0x3b4
    struct _EX_PUSH_LOCK ThreadLock;                                        //0x3b8
    ULONG ReadClusterSize;                                                  //0x3bc
    volatile LONG MmLockOrdering;                                           //0x3c0
    union
    {
        ULONG CrossThreadFlags;                                             //0x3c4
        struct
        {
            ULONG Terminated:1;                                             //0x3c4
            ULONG ThreadInserted:1;                                         //0x3c4
            ULONG HideFromDebugger:1;                                       //0x3c4
            ULONG ActiveImpersonationInfo:1;                                //0x3c4
            ULONG HardErrorsAreDisabled:1;                                  //0x3c4
            ULONG BreakOnTermination:1;                                     //0x3c4
            ULONG SkipCreationMsg:1;                                        //0x3c4
            ULONG SkipTerminationMsg:1;                                     //0x3c4
            ULONG CopyTokenOnOpen:1;                                        //0x3c4
            ULONG ThreadIoPriority:3;                                       //0x3c4
            ULONG ThreadPagePriority:3;                                     //0x3c4
            ULONG RundownFail:1;                                            //0x3c4
            ULONG UmsForceQueueTermination:1;                               //0x3c4
            ULONG IndirectCpuSets:1;                                        //0x3c4
            ULONG DisableDynamicCodeOptOut:1;                               //0x3c4
            ULONG ExplicitCaseSensitivity:1;                                //0x3c4
            ULONG ReservedCrossThreadFlags:12;                              //0x3c4
        };
    };
    union
    {
        ULONG SameThreadPassiveFlags;                                       //0x3c8
        struct
        {
            ULONG ActiveExWorker:1;                                         //0x3c8
            ULONG MemoryMaker:1;                                            //0x3c8
            ULONG StoreLockThread:2;                                        //0x3c8
            ULONG ClonedThread:1;                                           //0x3c8
            ULONG KeyedEventInUse:1;                                        //0x3c8
            ULONG SelfTerminate:1;                                          //0x3c8
            ULONG RespectIoPriority:1;                                      //0x3c8
            ULONG ActivePageLists:1;                                        //0x3c8
            ULONG ReservedSameThreadPassiveFlags:23;                        //0x3c8
        };
    };
    union
    {
        ULONG SameThreadApcFlags;                                           //0x3cc
        struct
        {
            UCHAR OwnsProcessAddressSpaceExclusive:1;                       //0x3cc
            UCHAR OwnsProcessAddressSpaceShared:1;                          //0x3cc
            UCHAR HardFaultBehavior:1;                                      //0x3cc
            volatile UCHAR StartAddressInvalid:1;                           //0x3cc
            UCHAR EtwCalloutActive:1;                                       //0x3cc
            UCHAR SuppressSymbolLoad:1;                                     //0x3cc
            UCHAR Prefetching:1;                                            //0x3cc
            UCHAR OwnsVadExclusive:1;                                       //0x3cc
            UCHAR SystemPagePriorityActive:1;                               //0x3cd
            UCHAR SystemPagePriority:3;                                     //0x3cd
        };
    };
    UCHAR CacheManagerActive;                                               //0x3d0
    UCHAR DisablePageFaultClustering;                                       //0x3d1
    UCHAR ActiveFaultCount;                                                 //0x3d2
    UCHAR LockOrderState;                                                   //0x3d3
    ULONG AlpcMessageId;                                                    //0x3d4
    union
    {
        VOID* AlpcMessage;                                                  //0x3d8
        ULONG AlpcReceiveAttributeSet;                                      //0x3d8
    };
    struct _LIST_ENTRY AlpcWaitListEntry;                                   //0x3dc
    LONG ExitStatus;                                                        //0x3e4
    ULONG CacheManagerCount;                                                //0x3e8
    ULONG IoBoostCount;                                                     //0x3ec
    ULONG IoQoSBoostCount;                                                  //0x3f0
    ULONG IoQoSThrottleCount;                                               //0x3f4
    struct _LIST_ENTRY BoostList;                                           //0x3f8
    struct _LIST_ENTRY DeboostList;                                         //0x400
    ULONG BoostListLock;                                                    //0x408
    ULONG IrpListLock;                                                      //0x40c
    VOID* ReservedForSynchTracking;                                         //0x410
    struct _SINGLE_LIST_ENTRY CmCallbackListHead;                           //0x414
    struct _GUID* ActivityId;                                               //0x418
    struct _SINGLE_LIST_ENTRY SeLearningModeListHead;                       //0x41c
    VOID* VerifierContext;                                                  //0x420
    ULONG KernelStackReference;                                             //0x424
    VOID* AdjustedClientToken;                                              //0x428
    VOID* WorkOnBehalfThread;                                               //0x42c
    struct _PS_PROPERTY_SET PropertySet;                                    //0x430
    VOID* PicoContext;                                                      //0x43c
    ULONG UserFsBase;                                                       //0x440
    ULONG UserGsBase;                                                       //0x444
    struct _THREAD_ENERGY_VALUES* EnergyValues;                             //0x448
    VOID* CmDbgInfo;                                                        //0x44c
    union
    {
        ULONG SelectedCpuSets;                                              //0x450
        ULONG* SelectedCpuSetsIndirect;                                     //0x450
    };
    struct _EJOB* Silo;                                                     //0x454
    struct _UNICODE_STRING* ThreadName;                                     //0x458
    ULONG ReadyTime;                                                        //0x45c
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

