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

//0x2c0 bytes (sizeof)
struct _ETHREAD
{
    struct _KTHREAD Tcb;                                                    //0x0
    union _LARGE_INTEGER CreateTime;                                        //0x1e8
    union
    {
        union _LARGE_INTEGER ExitTime;                                      //0x1f0
        struct _LIST_ENTRY KeyedWaitChain;                                  //0x1f0
    };
    VOID* ChargeOnlySession;                                                //0x1f8
    union
    {
        struct _LIST_ENTRY PostBlockList;                                   //0x1fc
        struct
        {
            VOID* ForwardLinkShadow;                                        //0x1fc
            VOID* StartAddress;                                             //0x200
        };
    };
    union
    {
        struct _TERMINATION_PORT* TerminationPort;                          //0x204
        struct _ETHREAD* ReaperLink;                                        //0x204
        VOID* KeyedWaitValue;                                               //0x204
    };
    ULONG ActiveTimerListLock;                                              //0x208
    struct _LIST_ENTRY ActiveTimerListHead;                                 //0x20c
    struct _CLIENT_ID Cid;                                                  //0x214
    union
    {
        struct _KSEMAPHORE KeyedWaitSemaphore;                              //0x21c
        struct _KSEMAPHORE AlpcWaitSemaphore;                               //0x21c
    };
    union _PS_CLIENT_SECURITY_CONTEXT ClientSecurity;                       //0x230
    struct _LIST_ENTRY IrpList;                                             //0x234
    ULONG TopLevelIrp;                                                      //0x23c
    struct _DEVICE_OBJECT* DeviceToVerify;                                  //0x240
    VOID* Win32StartAddress;                                                //0x244
    VOID* LegacyPowerObject;                                                //0x248
    struct _LIST_ENTRY ThreadListEntry;                                     //0x24c
    struct _EX_RUNDOWN_REF RundownProtect;                                  //0x254
    struct _EX_PUSH_LOCK ThreadLock;                                        //0x258
    ULONG ReadClusterSize;                                                  //0x25c
    volatile LONG MmLockOrdering;                                           //0x260
    volatile LONG CmLockOrdering;                                           //0x264
    union
    {
        ULONG CrossThreadFlags;                                             //0x268
        struct
        {
            ULONG Terminated:1;                                             //0x268
            ULONG ThreadInserted:1;                                         //0x268
            ULONG HideFromDebugger:1;                                       //0x268
            ULONG ActiveImpersonationInfo:1;                                //0x268
            ULONG HardErrorsAreDisabled:1;                                  //0x268
            ULONG BreakOnTermination:1;                                     //0x268
            ULONG SkipCreationMsg:1;                                        //0x268
            ULONG SkipTerminationMsg:1;                                     //0x268
            ULONG CopyTokenOnOpen:1;                                        //0x268
            ULONG ThreadIoPriority:3;                                       //0x268
            ULONG ThreadPagePriority:3;                                     //0x268
            ULONG RundownFail:1;                                            //0x268
            ULONG UmsForceQueueTermination:1;                               //0x268
            ULONG ReservedCrossThreadFlags:15;                              //0x268
        };
    };
    union
    {
        ULONG SameThreadPassiveFlags;                                       //0x26c
        struct
        {
            ULONG ActiveExWorker:1;                                         //0x26c
            ULONG MemoryMaker:1;                                            //0x26c
            ULONG ClonedThread:1;                                           //0x26c
            ULONG KeyedEventInUse:1;                                        //0x26c
            ULONG SelfTerminate:1;                                          //0x26c
        };
    };
    union
    {
        ULONG SameThreadApcFlags;                                           //0x270
        struct
        {
            UCHAR Spare:1;                                                  //0x270
            volatile UCHAR StartAddressInvalid:1;                           //0x270
            UCHAR EtwCalloutActive:1;                                       //0x270
            UCHAR OwnsProcessWorkingSetExclusive:1;                         //0x270
            UCHAR OwnsProcessWorkingSetShared:1;                            //0x270
            UCHAR OwnsSystemCacheWorkingSetExclusive:1;                     //0x270
            UCHAR OwnsSystemCacheWorkingSetShared:1;                        //0x270
            UCHAR OwnsSessionWorkingSetExclusive:1;                         //0x270
            UCHAR OwnsSessionWorkingSetShared:1;                            //0x271
            UCHAR OwnsProcessAddressSpaceExclusive:1;                       //0x271
            UCHAR OwnsProcessAddressSpaceShared:1;                          //0x271
            UCHAR SuppressSymbolLoad:1;                                     //0x271
            UCHAR Prefetching:1;                                            //0x271
            UCHAR OwnsVadExclusive:1;                                       //0x271
            UCHAR OwnsChangeControlAreaExclusive:1;                         //0x271
            UCHAR OwnsChangeControlAreaShared:1;                            //0x271
            UCHAR OwnsPagedPoolWorkingSetExclusive:1;                       //0x272
            UCHAR OwnsPagedPoolWorkingSetShared:1;                          //0x272
            UCHAR OwnsSystemPtesWorkingSetExclusive:1;                      //0x272
            UCHAR OwnsSystemPtesWorkingSetShared:1;                         //0x272
            UCHAR TrimTrigger:2;                                            //0x272
            UCHAR Spare2:2;                                                 //0x272
            UCHAR PriorityRegionActive;                                     //0x273
        };
    };
    UCHAR CacheManagerActive;                                               //0x274
    UCHAR DisablePageFaultClustering;                                       //0x275
    UCHAR ActiveFaultCount;                                                 //0x276
    UCHAR LockOrderState;                                                   //0x277
    ULONG AlpcMessageId;                                                    //0x278
    union
    {
        VOID* AlpcMessage;                                                  //0x27c
        ULONG AlpcReceiveAttributeSet;                                      //0x27c
    };
    LONG ExitStatus;                                                        //0x280
    struct _LIST_ENTRY AlpcWaitListEntry;                                   //0x284
    ULONG CacheManagerCount;                                                //0x28c
    ULONG IoBoostCount;                                                     //0x290
    struct _LIST_ENTRY BoostList;                                           //0x294
    struct _LIST_ENTRY DeboostList;                                         //0x29c
    ULONG BoostListLock;                                                    //0x2a4
    ULONG IrpListLock;                                                      //0x2a8
    VOID* ReservedForSynchTracking;                                         //0x2ac
    struct _SINGLE_LIST_ENTRY CmCallbackListHead;                           //0x2b0
    struct _GUID* ActivityId;                                               //0x2b4
    VOID* WnfContext;                                                       //0x2b8
    ULONG KernelStackReference;                                             //0x2bc
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

