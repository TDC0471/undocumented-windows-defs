#pragma once
/* ------------------ */

#include <_KEVENT.h>
#include <_LIST_ENTRY.h>
#include <_ERESOURCE.h>
#include <_LARGE_INTEGER.h>
#include <_KAFFINITY_EX.h>
#include <_JOB_ACCESS_STATE.h>
#include <_PROCESS_DISK_COUNTERS.h>
#include <_EJOB.h>
#include <_WNF_STATE_NAME.h>
#include <_PS_JOB_WAKE_INFORMATION.h>
#include <_JOBOBJECT_WAKE_FILTER.h>
#include <_JOB_NOTIFICATION_INFORMATION.h>
#include <_IO_MINI_COMPLETION_PACKET_USER.h>
#include <_JOB_CPU_RATE_CONTROL.h>
#include <_EX_PUSH_LOCK.h>
#include <_EPROCESS_VALUES.h>
#include <_GUID.h>
#include <_ESERVERSILO_GLOBALS.h>
#include <_PS_PROPERTY_SET.h>
#include <_PSP_STORAGE.h>
#include <_JOB_NET_RATE_CONTROL.h>
#include <_PROCESS_EXTENDED_ENERGY_VALUES.h>
#include <_JOB_RATE_CONTROL_HEADER.h>
#include <_PS_IO_CONTROL_ENTRY.h>
#include <_RTL_RB_TREE.h>
#include <_WORK_QUEUE_ITEM.h>
#include <_JOBOBJECT_ENERGY_TRACKING_STATE.h>

//0x640 bytes (sizeof)
struct _EJOB
{
    struct _KEVENT Event;                                                   //0x0
    struct _LIST_ENTRY JobLinks;                                            //0x18
    struct _LIST_ENTRY ProcessListHead;                                     //0x28
    struct _ERESOURCE JobLock;                                              //0x38
    union _LARGE_INTEGER TotalUserTime;                                     //0xa0
    union _LARGE_INTEGER TotalKernelTime;                                   //0xa8
    union _LARGE_INTEGER TotalCycleTime;                                    //0xb0
    union _LARGE_INTEGER ThisPeriodTotalUserTime;                           //0xb8
    union _LARGE_INTEGER ThisPeriodTotalKernelTime;                         //0xc0
    ULONGLONG TotalContextSwitches;                                         //0xc8
    ULONG TotalPageFaultCount;                                              //0xd0
    ULONG TotalProcesses;                                                   //0xd4
    ULONG ActiveProcesses;                                                  //0xd8
    ULONG TotalTerminatedProcesses;                                         //0xdc
    union _LARGE_INTEGER PerProcessUserTimeLimit;                           //0xe0
    union _LARGE_INTEGER PerJobUserTimeLimit;                               //0xe8
    ULONGLONG MinimumWorkingSetSize;                                        //0xf0
    ULONGLONG MaximumWorkingSetSize;                                        //0xf8
    ULONG LimitFlags;                                                       //0x100
    ULONG ActiveProcessLimit;                                               //0x104
    struct _KAFFINITY_EX Affinity;                                          //0x108
    struct _JOB_ACCESS_STATE* AccessState;                                  //0x1b0
    VOID* AccessStateQuotaReference;                                        //0x1b8
    ULONG UIRestrictionsClass;                                              //0x1c0
    ULONG EndOfJobTimeAction;                                               //0x1c4
    VOID* CompletionPort;                                                   //0x1c8
    VOID* CompletionKey;                                                    //0x1d0
    ULONGLONG CompletionCount;                                              //0x1d8
    ULONG SessionId;                                                        //0x1e0
    ULONG SchedulingClass;                                                  //0x1e4
    ULONGLONG ReadOperationCount;                                           //0x1e8
    ULONGLONG WriteOperationCount;                                          //0x1f0
    ULONGLONG OtherOperationCount;                                          //0x1f8
    ULONGLONG ReadTransferCount;                                            //0x200
    ULONGLONG WriteTransferCount;                                           //0x208
    ULONGLONG OtherTransferCount;                                           //0x210
    struct _PROCESS_DISK_COUNTERS DiskIoInfo;                               //0x218
    ULONGLONG ProcessMemoryLimit;                                           //0x240
    ULONGLONG JobMemoryLimit;                                               //0x248
    ULONGLONG JobTotalMemoryLimit;                                          //0x250
    ULONGLONG PeakProcessMemoryUsed;                                        //0x258
    ULONGLONG PeakJobMemoryUsed;                                            //0x260
    struct _KAFFINITY_EX EffectiveAffinity;                                 //0x268
    union _LARGE_INTEGER EffectivePerProcessUserTimeLimit;                  //0x310
    ULONGLONG EffectiveMinimumWorkingSetSize;                               //0x318
    ULONGLONG EffectiveMaximumWorkingSetSize;                               //0x320
    ULONGLONG EffectiveProcessMemoryLimit;                                  //0x328
    struct _EJOB* EffectiveProcessMemoryLimitJob;                           //0x330
    struct _EJOB* EffectivePerProcessUserTimeLimitJob;                      //0x338
    struct _EJOB* EffectiveNetIoRateLimitJob;                               //0x340
    struct _EJOB* EffectiveHeapAttributionJob;                              //0x348
    ULONG EffectiveLimitFlags;                                              //0x350
    ULONG EffectiveSchedulingClass;                                         //0x354
    ULONG EffectiveFreezeCount;                                             //0x358
    ULONG EffectiveBackgroundCount;                                         //0x35c
    ULONG EffectiveSwapCount;                                               //0x360
    ULONG EffectiveNotificationLimitCount;                                  //0x364
    UCHAR EffectivePriorityClass;                                           //0x368
    UCHAR PriorityClass;                                                    //0x369
    UCHAR NestingDepth;                                                     //0x36a
    UCHAR Reserved1[1];                                                     //0x36b
    ULONG CompletionFilter;                                                 //0x36c
    union
    {
        struct _WNF_STATE_NAME WakeChannel;                                 //0x370
        struct _PS_JOB_WAKE_INFORMATION WakeInfo;                           //0x370
    };
    struct _JOBOBJECT_WAKE_FILTER WakeFilter;                               //0x3b8
    ULONG LowEdgeLatchFilter;                                               //0x3c0
    struct _EJOB* NotificationLink;                                         //0x3c8
    ULONGLONG CurrentJobMemoryUsed;                                         //0x3d0
    struct _JOB_NOTIFICATION_INFORMATION* NotificationInfo;                 //0x3d8
    VOID* NotificationInfoQuotaReference;                                   //0x3e0
    struct _IO_MINI_COMPLETION_PACKET_USER* NotificationPacket;             //0x3e8
    struct _JOB_CPU_RATE_CONTROL* CpuRateControl;                           //0x3f0
    VOID* EffectiveSchedulingGroup;                                         //0x3f8
    ULONGLONG ReadyTime;                                                    //0x400
    struct _EX_PUSH_LOCK MemoryLimitsLock;                                  //0x408
    struct _LIST_ENTRY SiblingJobLinks;                                     //0x410
    struct _LIST_ENTRY ChildJobListHead;                                    //0x420
    struct _EJOB* ParentJob;                                                //0x430
    struct _EJOB* volatile RootJob;                                         //0x438
    struct _LIST_ENTRY IteratorListHead;                                    //0x440
    ULONGLONG AncestorCount;                                                //0x450
    union
    {
        struct _EJOB** Ancestors;                                           //0x458
        VOID* SessionObject;                                                //0x458
    };
    struct _EPROCESS_VALUES Accounting;                                     //0x460
    ULONG ShadowActiveProcessCount;                                         //0x4c8
    ULONG ActiveAuxiliaryProcessCount;                                      //0x4cc
    ULONG SequenceNumber;                                                   //0x4d0
    ULONG JobId;                                                            //0x4d4
    struct _GUID ContainerId;                                               //0x4d8
    struct _GUID ContainerTelemetryId;                                      //0x4e8
    struct _ESERVERSILO_GLOBALS* ServerSiloGlobals;                         //0x4f8
    struct _PS_PROPERTY_SET PropertySet;                                    //0x500
    struct _PSP_STORAGE* Storage;                                           //0x518
    struct _JOB_NET_RATE_CONTROL* NetRateControl;                           //0x520
    union
    {
        ULONG JobFlags;                                                     //0x528
        struct
        {
            ULONG CloseDone:1;                                              //0x528
            ULONG MultiGroup:1;                                             //0x528
            ULONG OutstandingNotification:1;                                //0x528
            ULONG NotificationInProgress:1;                                 //0x528
            ULONG UILimits:1;                                               //0x528
            ULONG CpuRateControlActive:1;                                   //0x528
            ULONG OwnCpuRateControl:1;                                      //0x528
            ULONG Terminating:1;                                            //0x528
            ULONG WorkingSetLock:1;                                         //0x528
            ULONG JobFrozen:1;                                              //0x528
            ULONG Background:1;                                             //0x528
            ULONG WakeNotificationAllocated:1;                              //0x528
            ULONG WakeNotificationEnabled:1;                                //0x528
            ULONG WakeNotificationPending:1;                                //0x528
            ULONG LimitNotificationRequired:1;                              //0x528
            ULONG ZeroCountNotificationRequired:1;                          //0x528
            ULONG CycleTimeNotificationRequired:1;                          //0x528
            ULONG CycleTimeNotificationPending:1;                           //0x528
            ULONG TimersVirtualized:1;                                      //0x528
            ULONG JobSwapped:1;                                             //0x528
            ULONG ViolationDetected:1;                                      //0x528
            ULONG EmptyJobNotified:1;                                       //0x528
            ULONG NoSystemCharge:1;                                         //0x528
            ULONG DropNoWakeCharges:1;                                      //0x528
            ULONG NoWakeChargePolicyDecided:1;                              //0x528
            ULONG NetRateControlActive:1;                                   //0x528
            ULONG OwnNetRateControl:1;                                      //0x528
            ULONG IoRateControlActive:1;                                    //0x528
            ULONG OwnIoRateControl:1;                                       //0x528
            ULONG DisallowNewProcesses:1;                                   //0x528
            ULONG Silo:1;                                                   //0x528
            ULONG ContainerTelemetryIdSet:1;                                //0x528
        };
    };
    union
    {
        ULONG JobFlags2;                                                    //0x52c
        struct
        {
            ULONG ParentLocked:1;                                           //0x52c
            ULONG EnableUsermodeSiloThreadImpersonation:1;                  //0x52c
            ULONG DisallowUsermodeSiloThreadImpersonation:1;                //0x52c
        };
    };
    struct _PROCESS_EXTENDED_ENERGY_VALUES* EnergyValues;                   //0x530
    volatile ULONGLONG SharedCommitCharge;                                  //0x538
    ULONG DiskIoAttributionUserRefCount;                                    //0x540
    ULONG DiskIoAttributionRefCount;                                        //0x544
    union
    {
        VOID* DiskIoAttributionContext;                                     //0x548
        struct _EJOB* DiskIoAttributionOwnerJob;                            //0x548
    };
    struct _JOB_RATE_CONTROL_HEADER IoRateControlHeader;                    //0x550
    struct _PS_IO_CONTROL_ENTRY GlobalIoControl;                            //0x578
    volatile LONG IoControlStateLock;                                       //0x5b0
    struct _RTL_RB_TREE VolumeIoControlTree;                                //0x5b8
    ULONGLONG IoRateOverQuotaHistory;                                       //0x5c8
    ULONG IoRateCurrentGeneration;                                          //0x5d0
    ULONG IoRateLastQueryGeneration;                                        //0x5d4
    ULONG IoRateGenerationLength;                                           //0x5d8
    ULONG IoRateOverQuotaNotifySequenceId;                                  //0x5dc
    ULONGLONG LastThrottledIoTime;                                          //0x5e0
    struct _EX_PUSH_LOCK IoControlLock;                                     //0x5e8
    LONGLONG SiloHardReferenceCount;                                        //0x5f0
    struct _WORK_QUEUE_ITEM RundownWorkItem;                                //0x5f8
    VOID* PartitionObject;                                                  //0x618
    struct _EJOB* PartitionOwnerJob;                                        //0x620
    union _JOBOBJECT_ENERGY_TRACKING_STATE EnergyTrackingState;             //0x628
    ULONGLONG KernelWaitTime;                                               //0x630
    ULONGLONG UserWaitTime;                                                 //0x638
};
/* Used in */
// _DEVICE_MAP
// _EJOB
// _EPROCESS
// _ETHREAD
// _ETW_SILODRIVERSTATE
// _IO_DRIVER_CREATE_CONTEXT
// _MM_SESSION_SPACE
// _OB_EXTENDED_PARSE_PARAMETERS
// _SEP_LOGON_SESSION_REFERENCES

