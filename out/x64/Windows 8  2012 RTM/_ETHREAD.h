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

//0x4c8 bytes (sizeof)
struct _ETHREAD
{
    struct _KTHREAD Tcb;                                                    //0x0
    union _LARGE_INTEGER CreateTime;                                        //0x348
    union
    {
        union _LARGE_INTEGER ExitTime;                                      //0x350
        struct _LIST_ENTRY KeyedWaitChain;                                  //0x350
    };
    VOID* ChargeOnlySession;                                                //0x360
    union
    {
        struct _LIST_ENTRY PostBlockList;                                   //0x368
        struct
        {
            VOID* ForwardLinkShadow;                                        //0x368
            VOID* StartAddress;                                             //0x370
        };
    };
    union
    {
        struct _TERMINATION_PORT* TerminationPort;                          //0x378
        struct _ETHREAD* ReaperLink;                                        //0x378
        VOID* KeyedWaitValue;                                               //0x378
    };
    ULONGLONG ActiveTimerListLock;                                          //0x380
    struct _LIST_ENTRY ActiveTimerListHead;                                 //0x388
    struct _CLIENT_ID Cid;                                                  //0x398
    union
    {
        struct _KSEMAPHORE KeyedWaitSemaphore;                              //0x3a8
        struct _KSEMAPHORE AlpcWaitSemaphore;                               //0x3a8
    };
    union _PS_CLIENT_SECURITY_CONTEXT ClientSecurity;                       //0x3c8
    struct _LIST_ENTRY IrpList;                                             //0x3d0
    ULONGLONG TopLevelIrp;                                                  //0x3e0
    struct _DEVICE_OBJECT* DeviceToVerify;                                  //0x3e8
    VOID* Win32StartAddress;                                                //0x3f0
    VOID* LegacyPowerObject;                                                //0x3f8
    struct _LIST_ENTRY ThreadListEntry;                                     //0x400
    struct _EX_RUNDOWN_REF RundownProtect;                                  //0x410
    struct _EX_PUSH_LOCK ThreadLock;                                        //0x418
    ULONG ReadClusterSize;                                                  //0x420
    volatile LONG MmLockOrdering;                                           //0x424
    volatile LONG CmLockOrdering;                                           //0x428
    union
    {
        ULONG CrossThreadFlags;                                             //0x42c
        struct
        {
            ULONG Terminated:1;                                             //0x42c
            ULONG ThreadInserted:1;                                         //0x42c
            ULONG HideFromDebugger:1;                                       //0x42c
            ULONG ActiveImpersonationInfo:1;                                //0x42c
            ULONG HardErrorsAreDisabled:1;                                  //0x42c
            ULONG BreakOnTermination:1;                                     //0x42c
            ULONG SkipCreationMsg:1;                                        //0x42c
            ULONG SkipTerminationMsg:1;                                     //0x42c
            ULONG CopyTokenOnOpen:1;                                        //0x42c
            ULONG ThreadIoPriority:3;                                       //0x42c
            ULONG ThreadPagePriority:3;                                     //0x42c
            ULONG RundownFail:1;                                            //0x42c
            ULONG UmsForceQueueTermination:1;                               //0x42c
            ULONG ReservedCrossThreadFlags:15;                              //0x42c
        };
    };
    union
    {
        ULONG SameThreadPassiveFlags;                                       //0x430
        struct
        {
            ULONG ActiveExWorker:1;                                         //0x430
            ULONG MemoryMaker:1;                                            //0x430
            ULONG ClonedThread:1;                                           //0x430
            ULONG KeyedEventInUse:1;                                        //0x430
            ULONG SelfTerminate:1;                                          //0x430
        };
    };
    union
    {
        ULONG SameThreadApcFlags;                                           //0x434
        struct
        {
            UCHAR Spare:1;                                                  //0x434
            volatile UCHAR StartAddressInvalid:1;                           //0x434
            UCHAR EtwCalloutActive:1;                                       //0x434
            UCHAR OwnsProcessWorkingSetExclusive:1;                         //0x434
            UCHAR OwnsProcessWorkingSetShared:1;                            //0x434
            UCHAR OwnsSystemCacheWorkingSetExclusive:1;                     //0x434
            UCHAR OwnsSystemCacheWorkingSetShared:1;                        //0x434
            UCHAR OwnsSessionWorkingSetExclusive:1;                         //0x434
            UCHAR OwnsSessionWorkingSetShared:1;                            //0x435
            UCHAR OwnsProcessAddressSpaceExclusive:1;                       //0x435
            UCHAR OwnsProcessAddressSpaceShared:1;                          //0x435
            UCHAR SuppressSymbolLoad:1;                                     //0x435
            UCHAR Prefetching:1;                                            //0x435
            UCHAR OwnsVadExclusive:1;                                       //0x435
            UCHAR OwnsChangeControlAreaExclusive:1;                         //0x435
            UCHAR OwnsChangeControlAreaShared:1;                            //0x435
            UCHAR OwnsPagedPoolWorkingSetExclusive:1;                       //0x436
            UCHAR OwnsPagedPoolWorkingSetShared:1;                          //0x436
            UCHAR OwnsSystemPtesWorkingSetExclusive:1;                      //0x436
            UCHAR OwnsSystemPtesWorkingSetShared:1;                         //0x436
            UCHAR TrimTrigger:2;                                            //0x436
            UCHAR Spare2:2;                                                 //0x436
            UCHAR PriorityRegionActive;                                     //0x437
        };
    };
    UCHAR CacheManagerActive;                                               //0x438
    UCHAR DisablePageFaultClustering;                                       //0x439
    UCHAR ActiveFaultCount;                                                 //0x43a
    UCHAR LockOrderState;                                                   //0x43b
    ULONGLONG AlpcMessageId;                                                //0x440
    union
    {
        VOID* AlpcMessage;                                                  //0x448
        ULONG AlpcReceiveAttributeSet;                                      //0x448
    };
    LONG ExitStatus;                                                        //0x450
    struct _LIST_ENTRY AlpcWaitListEntry;                                   //0x458
    ULONG CacheManagerCount;                                                //0x468
    ULONG IoBoostCount;                                                     //0x46c
    struct _LIST_ENTRY BoostList;                                           //0x470
    struct _LIST_ENTRY DeboostList;                                         //0x480
    ULONGLONG BoostListLock;                                                //0x490
    ULONGLONG IrpListLock;                                                  //0x498
    VOID* ReservedForSynchTracking;                                         //0x4a0
    struct _SINGLE_LIST_ENTRY CmCallbackListHead;                           //0x4a8
    struct _GUID* ActivityId;                                               //0x4b0
    VOID* WnfContext;                                                       //0x4b8
    ULONG KernelStackReference;                                             //0x4c0
};
/* Used in */
// _ALPC_DISPATCH_CONTEXT
// _CMHIVE
// _ENODE
// _EPROCESS
// _ETHREAD
// _IOV_FORCED_PENDING_TRACE
// _IRP
// _KALPC_MESSAGE
// _LPCP_MESSAGE
// _LPCP_PORT_OBJECT
// _MMINPAGE_SUPPORT
// _MMPAGING_FILE
// _NONOPAQUE_OPLOCK
// _POP_IRP_WORKER_ENTRY
// _POP_SHUTDOWN_BUG_CHECK
// _VF_KE_CRITICAL_REGION_TRACE
// _VF_POOL_TRACE
// _VI_FAULT_TRACE
// _WMI_LOGGER_CONTEXT

