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

//0x700 bytes (sizeof)
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
    struct _JOB_ACCESS_STATE* AccessState;                                  //0x210
    VOID* AccessStateQuotaReference;                                        //0x218
    ULONG UIRestrictionsClass;                                              //0x220
    ULONG EndOfJobTimeAction;                                               //0x224
    VOID* CompletionPort;                                                   //0x228
    VOID* CompletionKey;                                                    //0x230
    ULONGLONG CompletionCount;                                              //0x238
    ULONG SessionId;                                                        //0x240
    ULONG SchedulingClass;                                                  //0x244
    ULONGLONG ReadOperationCount;                                           //0x248
    ULONGLONG WriteOperationCount;                                          //0x250
    ULONGLONG OtherOperationCount;                                          //0x258
    ULONGLONG ReadTransferCount;                                            //0x260
    ULONGLONG WriteTransferCount;                                           //0x268
    ULONGLONG OtherTransferCount;                                           //0x270
    struct _PROCESS_DISK_COUNTERS DiskIoInfo;                               //0x278
    ULONGLONG ProcessMemoryLimit;                                           //0x2a0
    ULONGLONG JobMemoryLimit;                                               //0x2a8
    ULONGLONG JobTotalMemoryLimit;                                          //0x2b0
    ULONGLONG PeakProcessMemoryUsed;                                        //0x2b8
    ULONGLONG PeakJobMemoryUsed;                                            //0x2c0
    struct _KAFFINITY_EX EffectiveAffinity;                                 //0x2c8
    union _LARGE_INTEGER EffectivePerProcessUserTimeLimit;                  //0x3d0
    ULONGLONG EffectiveMinimumWorkingSetSize;                               //0x3d8
    ULONGLONG EffectiveMaximumWorkingSetSize;                               //0x3e0
    ULONGLONG EffectiveProcessMemoryLimit;                                  //0x3e8
    struct _EJOB* EffectiveProcessMemoryLimitJob;                           //0x3f0
    struct _EJOB* EffectivePerProcessUserTimeLimitJob;                      //0x3f8
    struct _EJOB* EffectiveNetIoRateLimitJob;                               //0x400
    struct _EJOB* EffectiveHeapAttributionJob;                              //0x408
    ULONG EffectiveLimitFlags;                                              //0x410
    ULONG EffectiveSchedulingClass;                                         //0x414
    ULONG EffectiveFreezeCount;                                             //0x418
    ULONG EffectiveBackgroundCount;                                         //0x41c
    ULONG EffectiveSwapCount;                                               //0x420
    ULONG EffectiveNotificationLimitCount;                                  //0x424
    UCHAR EffectivePriorityClass;                                           //0x428
    UCHAR PriorityClass;                                                    //0x429
    UCHAR NestingDepth;                                                     //0x42a
    UCHAR Reserved1[1];                                                     //0x42b
    ULONG CompletionFilter;                                                 //0x42c
    union
    {
        struct _WNF_STATE_NAME WakeChannel;                                 //0x430
        struct _PS_JOB_WAKE_INFORMATION WakeInfo;                           //0x430
    };
    struct _JOBOBJECT_WAKE_FILTER WakeFilter;                               //0x478
    ULONG LowEdgeLatchFilter;                                               //0x480
    struct _EJOB* NotificationLink;                                         //0x488
    ULONGLONG CurrentJobMemoryUsed;                                         //0x490
    struct _JOB_NOTIFICATION_INFORMATION* NotificationInfo;                 //0x498
    VOID* NotificationInfoQuotaReference;                                   //0x4a0
    struct _IO_MINI_COMPLETION_PACKET_USER* NotificationPacket;             //0x4a8
    struct _JOB_CPU_RATE_CONTROL* CpuRateControl;                           //0x4b0
    VOID* EffectiveSchedulingGroup;                                         //0x4b8
    ULONGLONG ReadyTime;                                                    //0x4c0
    struct _EX_PUSH_LOCK MemoryLimitsLock;                                  //0x4c8
    struct _LIST_ENTRY SiblingJobLinks;                                     //0x4d0
    struct _LIST_ENTRY ChildJobListHead;                                    //0x4e0
    struct _EJOB* ParentJob;                                                //0x4f0
    struct _EJOB* volatile RootJob;                                         //0x4f8
    struct _LIST_ENTRY IteratorListHead;                                    //0x500
    ULONGLONG AncestorCount;                                                //0x510
    union
    {
        struct _EJOB** Ancestors;                                           //0x518
        VOID* SessionObject;                                                //0x518
    };
    struct _EPROCESS_VALUES Accounting;                                     //0x520
    ULONG ShadowActiveProcessCount;                                         //0x588
    ULONG ActiveAuxiliaryProcessCount;                                      //0x58c
    ULONG SequenceNumber;                                                   //0x590
    ULONG JobId;                                                            //0x594
    struct _GUID ContainerId;                                               //0x598
    struct _GUID ContainerTelemetryId;                                      //0x5a8
    struct _ESERVERSILO_GLOBALS* ServerSiloGlobals;                         //0x5b8
    struct _PS_PROPERTY_SET PropertySet;                                    //0x5c0
    struct _PSP_STORAGE* Storage;                                           //0x5d8
    struct _JOB_NET_RATE_CONTROL* NetRateControl;                           //0x5e0
    union
    {
        ULONG JobFlags;                                                     //0x5e8
        struct
        {
            ULONG CloseDone:1;                                              //0x5e8
            ULONG MultiGroup:1;                                             //0x5e8
            ULONG OutstandingNotification:1;                                //0x5e8
            ULONG NotificationInProgress:1;                                 //0x5e8
            ULONG UILimits:1;                                               //0x5e8
            ULONG CpuRateControlActive:1;                                   //0x5e8
            ULONG OwnCpuRateControl:1;                                      //0x5e8
            ULONG Terminating:1;                                            //0x5e8
            ULONG WorkingSetLock:1;                                         //0x5e8
            ULONG JobFrozen:1;                                              //0x5e8
            ULONG Background:1;                                             //0x5e8
            ULONG WakeNotificationAllocated:1;                              //0x5e8
            ULONG WakeNotificationEnabled:1;                                //0x5e8
            ULONG WakeNotificationPending:1;                                //0x5e8
            ULONG LimitNotificationRequired:1;                              //0x5e8
            ULONG ZeroCountNotificationRequired:1;                          //0x5e8
            ULONG CycleTimeNotificationRequired:1;                          //0x5e8
            ULONG CycleTimeNotificationPending:1;                           //0x5e8
            ULONG TimersVirtualized:1;                                      //0x5e8
            ULONG JobSwapped:1;                                             //0x5e8
            ULONG ViolationDetected:1;                                      //0x5e8
            ULONG EmptyJobNotified:1;                                       //0x5e8
            ULONG NoSystemCharge:1;                                         //0x5e8
            ULONG DropNoWakeCharges:1;                                      //0x5e8
            ULONG NoWakeChargePolicyDecided:1;                              //0x5e8
            ULONG NetRateControlActive:1;                                   //0x5e8
            ULONG OwnNetRateControl:1;                                      //0x5e8
            ULONG IoRateControlActive:1;                                    //0x5e8
            ULONG OwnIoRateControl:1;                                       //0x5e8
            ULONG DisallowNewProcesses:1;                                   //0x5e8
            ULONG Silo:1;                                                   //0x5e8
            ULONG ContainerTelemetryIdSet:1;                                //0x5e8
        };
    };
    union
    {
        ULONG JobFlags2;                                                    //0x5ec
        struct
        {
            ULONG ParentLocked:1;                                           //0x5ec
            ULONG EnableUsermodeSiloThreadImpersonation:1;                  //0x5ec
            ULONG DisallowUsermodeSiloThreadImpersonation:1;                //0x5ec
        };
    };
    struct _PROCESS_EXTENDED_ENERGY_VALUES* EnergyValues;                   //0x5f0
    volatile ULONGLONG SharedCommitCharge;                                  //0x5f8
    ULONG DiskIoAttributionUserRefCount;                                    //0x600
    ULONG DiskIoAttributionRefCount;                                        //0x604
    union
    {
        VOID* DiskIoAttributionContext;                                     //0x608
        struct _EJOB* DiskIoAttributionOwnerJob;                            //0x608
    };
    struct _JOB_RATE_CONTROL_HEADER IoRateControlHeader;                    //0x610
    struct _PS_IO_CONTROL_ENTRY GlobalIoControl;                            //0x638
    volatile LONG IoControlStateLock;                                       //0x670
    struct _RTL_RB_TREE VolumeIoControlTree;                                //0x678
    ULONGLONG IoRateOverQuotaHistory;                                       //0x688
    ULONG IoRateCurrentGeneration;                                          //0x690
    ULONG IoRateLastQueryGeneration;                                        //0x694
    ULONG IoRateGenerationLength;                                           //0x698
    ULONG IoRateOverQuotaNotifySequenceId;                                  //0x69c
    ULONGLONG LastThrottledIoTime;                                          //0x6a0
    struct _EX_PUSH_LOCK IoControlLock;                                     //0x6a8
    LONGLONG SiloHardReferenceCount;                                        //0x6b0
    struct _WORK_QUEUE_ITEM RundownWorkItem;                                //0x6b8
    VOID* PartitionObject;                                                  //0x6d8
    struct _EJOB* PartitionOwnerJob;                                        //0x6e0
    union _JOBOBJECT_ENERGY_TRACKING_STATE EnergyTrackingState;             //0x6e8
    ULONGLONG KernelWaitTime;                                               //0x6f0
    ULONGLONG UserWaitTime;                                                 //0x6f8
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

