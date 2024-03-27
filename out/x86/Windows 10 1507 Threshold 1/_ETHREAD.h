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

//0x458 bytes (sizeof)
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
    volatile LONG CmLockOrdering;                                           //0x3c4
    union
    {
        ULONG CrossThreadFlags;                                             //0x3c8
        struct
        {
            ULONG Terminated:1;                                             //0x3c8
            ULONG ThreadInserted:1;                                         //0x3c8
            ULONG HideFromDebugger:1;                                       //0x3c8
            ULONG ActiveImpersonationInfo:1;                                //0x3c8
            ULONG HardErrorsAreDisabled:1;                                  //0x3c8
            ULONG BreakOnTermination:1;                                     //0x3c8
            ULONG SkipCreationMsg:1;                                        //0x3c8
            ULONG SkipTerminationMsg:1;                                     //0x3c8
            ULONG CopyTokenOnOpen:1;                                        //0x3c8
            ULONG ThreadIoPriority:3;                                       //0x3c8
            ULONG ThreadPagePriority:3;                                     //0x3c8
            ULONG RundownFail:1;                                            //0x3c8
            ULONG UmsForceQueueTermination:1;                               //0x3c8
            ULONG IndirectCpuSets:1;                                        //0x3c8
            ULONG ReservedCrossThreadFlags:14;                              //0x3c8
        };
    };
    union
    {
        ULONG SameThreadPassiveFlags;                                       //0x3cc
        struct
        {
            ULONG ActiveExWorker:1;                                         //0x3cc
            ULONG MemoryMaker:1;                                            //0x3cc
            ULONG ClonedThread:1;                                           //0x3cc
            ULONG KeyedEventInUse:1;                                        //0x3cc
            ULONG SelfTerminate:1;                                          //0x3cc
            ULONG RespectIoPriority:1;                                      //0x3cc
            ULONG ReservedSameThreadPassiveFlags:26;                        //0x3cc
        };
    };
    union
    {
        ULONG SameThreadApcFlags;                                           //0x3d0
        struct
        {
            UCHAR OwnsProcessAddressSpaceExclusive:1;                       //0x3d0
            UCHAR OwnsProcessAddressSpaceShared:1;                          //0x3d0
            UCHAR HardFaultBehavior:1;                                      //0x3d0
            volatile UCHAR StartAddressInvalid:1;                           //0x3d0
            UCHAR EtwCalloutActive:1;                                       //0x3d0
            UCHAR SuppressSymbolLoad:1;                                     //0x3d0
            UCHAR Prefetching:1;                                            //0x3d0
            UCHAR OwnsVadExclusive:1;                                       //0x3d0
            UCHAR SystemPagePriorityActive:1;                               //0x3d1
            UCHAR SystemPagePriority:3;                                     //0x3d1
        };
    };
    UCHAR CacheManagerActive;                                               //0x3d4
    UCHAR DisablePageFaultClustering;                                       //0x3d5
    UCHAR ActiveFaultCount;                                                 //0x3d6
    UCHAR LockOrderState;                                                   //0x3d7
    ULONG AlpcMessageId;                                                    //0x3d8
    union
    {
        VOID* AlpcMessage;                                                  //0x3dc
        ULONG AlpcReceiveAttributeSet;                                      //0x3dc
    };
    LONG ExitStatus;                                                        //0x3e0
    struct _LIST_ENTRY AlpcWaitListEntry;                                   //0x3e4
    ULONG CacheManagerCount;                                                //0x3ec
    ULONG IoBoostCount;                                                     //0x3f0
    struct _LIST_ENTRY BoostList;                                           //0x3f4
    struct _LIST_ENTRY DeboostList;                                         //0x3fc
    ULONG BoostListLock;                                                    //0x404
    ULONG IrpListLock;                                                      //0x408
    VOID* ReservedForSynchTracking;                                         //0x40c
    struct _SINGLE_LIST_ENTRY CmCallbackListHead;                           //0x410
    struct _GUID* ActivityId;                                               //0x414
    struct _SINGLE_LIST_ENTRY SeLearningModeListHead;                       //0x418
    VOID* VerifierContext;                                                  //0x41c
    ULONG KernelStackReference;                                             //0x420
    VOID* AdjustedClientToken;                                              //0x424
    VOID* WorkingOnBehalfClient;                                            //0x428
    struct _PS_PROPERTY_SET PropertySet;                                    //0x42c
    VOID* PicoContext;                                                      //0x438
    ULONG UserFsBase;                                                       //0x43c
    ULONG UserGsBase;                                                       //0x440
    struct _THREAD_ENERGY_VALUES* EnergyValues;                             //0x444
    volatile ULONG CmCellReferences;                                        //0x448
    union
    {
        ULONG SelectedCpuSets;                                              //0x44c
        ULONG* SelectedCpuSetsIndirect;                                     //0x44c
    };
    struct _ESILO* Silo;                                                    //0x450
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

