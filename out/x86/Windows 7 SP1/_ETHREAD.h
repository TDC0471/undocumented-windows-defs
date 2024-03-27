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
#include <_PSP_CPU_QUOTA_APC.h>
#include <_EX_RUNDOWN_REF.h>
#include <_EX_PUSH_LOCK.h>
#include <_SINGLE_LIST_ENTRY.h>

//0x2b8 bytes (sizeof)
struct _ETHREAD
{
    struct _KTHREAD Tcb;                                                    //0x0
    union _LARGE_INTEGER CreateTime;                                        //0x200
    union
    {
        union _LARGE_INTEGER ExitTime;                                      //0x208
        struct _LIST_ENTRY KeyedWaitChain;                                  //0x208
    };
    LONG ExitStatus;                                                        //0x210
    union
    {
        struct _LIST_ENTRY PostBlockList;                                   //0x214
        struct
        {
            VOID* ForwardLinkShadow;                                        //0x214
            VOID* StartAddress;                                             //0x218
        };
    };
    union
    {
        struct _TERMINATION_PORT* TerminationPort;                          //0x21c
        struct _ETHREAD* ReaperLink;                                        //0x21c
        VOID* KeyedWaitValue;                                               //0x21c
    };
    ULONG ActiveTimerListLock;                                              //0x220
    struct _LIST_ENTRY ActiveTimerListHead;                                 //0x224
    struct _CLIENT_ID Cid;                                                  //0x22c
    union
    {
        struct _KSEMAPHORE KeyedWaitSemaphore;                              //0x234
        struct _KSEMAPHORE AlpcWaitSemaphore;                               //0x234
    };
    union _PS_CLIENT_SECURITY_CONTEXT ClientSecurity;                       //0x248
    struct _LIST_ENTRY IrpList;                                             //0x24c
    ULONG TopLevelIrp;                                                      //0x254
    struct _DEVICE_OBJECT* DeviceToVerify;                                  //0x258
    union _PSP_CPU_QUOTA_APC* CpuQuotaApc;                                  //0x25c
    VOID* Win32StartAddress;                                                //0x260
    VOID* LegacyPowerObject;                                                //0x264
    struct _LIST_ENTRY ThreadListEntry;                                     //0x268
    struct _EX_RUNDOWN_REF RundownProtect;                                  //0x270
    struct _EX_PUSH_LOCK ThreadLock;                                        //0x274
    ULONG ReadClusterSize;                                                  //0x278
    volatile LONG MmLockOrdering;                                           //0x27c
    union
    {
        ULONG CrossThreadFlags;                                             //0x280
        struct
        {
            ULONG Terminated:1;                                             //0x280
            ULONG ThreadInserted:1;                                         //0x280
            ULONG HideFromDebugger:1;                                       //0x280
            ULONG ActiveImpersonationInfo:1;                                //0x280
            ULONG Reserved:1;                                               //0x280
            ULONG HardErrorsAreDisabled:1;                                  //0x280
            ULONG BreakOnTermination:1;                                     //0x280
            ULONG SkipCreationMsg:1;                                        //0x280
            ULONG SkipTerminationMsg:1;                                     //0x280
            ULONG CopyTokenOnOpen:1;                                        //0x280
            ULONG ThreadIoPriority:3;                                       //0x280
            ULONG ThreadPagePriority:3;                                     //0x280
            ULONG RundownFail:1;                                            //0x280
            ULONG NeedsWorkingSetAging:1;                                   //0x280
        };
    };
    union
    {
        ULONG SameThreadPassiveFlags;                                       //0x284
        struct
        {
            ULONG ActiveExWorker:1;                                         //0x284
            ULONG ExWorkerCanWaitUser:1;                                    //0x284
            ULONG MemoryMaker:1;                                            //0x284
            ULONG ClonedThread:1;                                           //0x284
            ULONG KeyedEventInUse:1;                                        //0x284
            ULONG RateApcState:2;                                           //0x284
            ULONG SelfTerminate:1;                                          //0x284
        };
    };
    union
    {
        ULONG SameThreadApcFlags;                                           //0x288
        struct
        {
            UCHAR Spare:1;                                                  //0x288
            volatile UCHAR StartAddressInvalid:1;                           //0x288
            UCHAR EtwPageFaultCalloutActive:1;                              //0x288
            UCHAR OwnsProcessWorkingSetExclusive:1;                         //0x288
            UCHAR OwnsProcessWorkingSetShared:1;                            //0x288
            UCHAR OwnsSystemCacheWorkingSetExclusive:1;                     //0x288
            UCHAR OwnsSystemCacheWorkingSetShared:1;                        //0x288
            UCHAR OwnsSessionWorkingSetExclusive:1;                         //0x288
            UCHAR OwnsSessionWorkingSetShared:1;                            //0x289
            UCHAR OwnsProcessAddressSpaceExclusive:1;                       //0x289
            UCHAR OwnsProcessAddressSpaceShared:1;                          //0x289
            UCHAR SuppressSymbolLoad:1;                                     //0x289
            UCHAR Prefetching:1;                                            //0x289
            UCHAR OwnsDynamicMemoryShared:1;                                //0x289
            UCHAR OwnsChangeControlAreaExclusive:1;                         //0x289
            UCHAR OwnsChangeControlAreaShared:1;                            //0x289
            UCHAR OwnsPagedPoolWorkingSetExclusive:1;                       //0x28a
            UCHAR OwnsPagedPoolWorkingSetShared:1;                          //0x28a
            UCHAR OwnsSystemPtesWorkingSetExclusive:1;                      //0x28a
            UCHAR OwnsSystemPtesWorkingSetShared:1;                         //0x28a
            UCHAR TrimTrigger:2;                                            //0x28a
            UCHAR Spare1:2;                                                 //0x28a
            UCHAR PriorityRegionActive;                                     //0x28b
        };
    };
    UCHAR CacheManagerActive;                                               //0x28c
    UCHAR DisablePageFaultClustering;                                       //0x28d
    UCHAR ActiveFaultCount;                                                 //0x28e
    UCHAR LockOrderState;                                                   //0x28f
    ULONG AlpcMessageId;                                                    //0x290
    union
    {
        VOID* AlpcMessage;                                                  //0x294
        ULONG AlpcReceiveAttributeSet;                                      //0x294
    };
    struct _LIST_ENTRY AlpcWaitListEntry;                                   //0x298
    ULONG CacheManagerCount;                                                //0x2a0
    ULONG IoBoostCount;                                                     //0x2a4
    ULONG IrpListLock;                                                      //0x2a8
    VOID* ReservedForSynchTracking;                                         //0x2ac
    struct _SINGLE_LIST_ENTRY CmCallbackListHead;                           //0x2b0
};
/* Used in */
// _ALPC_DISPATCH_CONTEXT
// _EPROCESS
// _ETHREAD
// _IOV_FORCED_PENDING_TRACE
// _IRP
// _KALPC_MESSAGE
// _LPCP_MESSAGE
// _LPCP_PORT_OBJECT
// _MMPAGING_FILE
// _VF_KE_CRITICAL_REGION_TRACE
// _VF_POOL_TRACE
// _VI_FAULT_TRACE
// _WMI_LOGGER_CONTEXT

