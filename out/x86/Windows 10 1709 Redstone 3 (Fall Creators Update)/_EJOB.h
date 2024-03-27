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

//0x3a0 bytes (sizeof)
struct _EJOB
{
    struct _KEVENT Event;                                                   //0x0
    struct _LIST_ENTRY JobLinks;                                            //0x10
    struct _LIST_ENTRY ProcessListHead;                                     //0x18
    struct _ERESOURCE JobLock;                                              //0x20
    union _LARGE_INTEGER TotalUserTime;                                     //0x58
    union _LARGE_INTEGER TotalKernelTime;                                   //0x60
    union _LARGE_INTEGER TotalCycleTime;                                    //0x68
    union _LARGE_INTEGER ThisPeriodTotalUserTime;                           //0x70
    union _LARGE_INTEGER ThisPeriodTotalKernelTime;                         //0x78
    ULONGLONG TotalContextSwitches;                                         //0x80
    ULONG TotalPageFaultCount;                                              //0x88
    ULONG TotalProcesses;                                                   //0x8c
    ULONG ActiveProcesses;                                                  //0x90
    ULONG TotalTerminatedProcesses;                                         //0x94
    union _LARGE_INTEGER PerProcessUserTimeLimit;                           //0x98
    union _LARGE_INTEGER PerJobUserTimeLimit;                               //0xa0
    ULONG MinimumWorkingSetSize;                                            //0xa8
    ULONG MaximumWorkingSetSize;                                            //0xac
    ULONG LimitFlags;                                                       //0xb0
    ULONG ActiveProcessLimit;                                               //0xb4
    struct _KAFFINITY_EX Affinity;                                          //0xb8
    struct _JOB_ACCESS_STATE* AccessState;                                  //0xc4
    VOID* AccessStateQuotaReference;                                        //0xc8
    ULONG UIRestrictionsClass;                                              //0xcc
    ULONG EndOfJobTimeAction;                                               //0xd0
    VOID* CompletionPort;                                                   //0xd4
    VOID* CompletionKey;                                                    //0xd8
    ULONGLONG CompletionCount;                                              //0xe0
    ULONG SessionId;                                                        //0xe8
    ULONG SchedulingClass;                                                  //0xec
    ULONGLONG ReadOperationCount;                                           //0xf0
    ULONGLONG WriteOperationCount;                                          //0xf8
    ULONGLONG OtherOperationCount;                                          //0x100
    ULONGLONG ReadTransferCount;                                            //0x108
    ULONGLONG WriteTransferCount;                                           //0x110
    ULONGLONG OtherTransferCount;                                           //0x118
    struct _PROCESS_DISK_COUNTERS DiskIoInfo;                               //0x120
    ULONG ProcessMemoryLimit;                                               //0x148
    ULONG JobMemoryLimit;                                                   //0x14c
    ULONG JobTotalMemoryLimit;                                              //0x150
    ULONG PeakProcessMemoryUsed;                                            //0x154
    ULONG PeakJobMemoryUsed;                                                //0x158
    struct _KAFFINITY_EX EffectiveAffinity;                                 //0x15c
    union _LARGE_INTEGER EffectivePerProcessUserTimeLimit;                  //0x168
    ULONG EffectiveMinimumWorkingSetSize;                                   //0x170
    ULONG EffectiveMaximumWorkingSetSize;                                   //0x174
    ULONG EffectiveProcessMemoryLimit;                                      //0x178
    struct _EJOB* EffectiveProcessMemoryLimitJob;                           //0x17c
    struct _EJOB* EffectivePerProcessUserTimeLimitJob;                      //0x180
    struct _EJOB* EffectiveNetIoRateLimitJob;                               //0x184
    struct _EJOB* EffectiveHeapAttributionJob;                              //0x188
    ULONG EffectiveLimitFlags;                                              //0x18c
    ULONG EffectiveSchedulingClass;                                         //0x190
    ULONG EffectiveFreezeCount;                                             //0x194
    ULONG EffectiveBackgroundCount;                                         //0x198
    ULONG EffectiveSwapCount;                                               //0x19c
    ULONG EffectiveNotificationLimitCount;                                  //0x1a0
    UCHAR EffectivePriorityClass;                                           //0x1a4
    UCHAR PriorityClass;                                                    //0x1a5
    UCHAR NestingDepth;                                                     //0x1a6
    UCHAR Reserved1[1];                                                     //0x1a7
    ULONG CompletionFilter;                                                 //0x1a8
    union
    {
        struct _WNF_STATE_NAME WakeChannel;                                 //0x1b0
        struct _PS_JOB_WAKE_INFORMATION WakeInfo;                           //0x1b0
    };
    struct _JOBOBJECT_WAKE_FILTER WakeFilter;                               //0x1f8
    ULONG LowEdgeLatchFilter;                                               //0x200
    struct _EJOB* NotificationLink;                                         //0x204
    ULONGLONG CurrentJobMemoryUsed;                                         //0x208
    struct _JOB_NOTIFICATION_INFORMATION* NotificationInfo;                 //0x210
    VOID* NotificationInfoQuotaReference;                                   //0x214
    struct _IO_MINI_COMPLETION_PACKET_USER* NotificationPacket;             //0x218
    struct _JOB_CPU_RATE_CONTROL* CpuRateControl;                           //0x21c
    VOID* EffectiveSchedulingGroup;                                         //0x220
    ULONGLONG ReadyTime;                                                    //0x228
    struct _EX_PUSH_LOCK MemoryLimitsLock;                                  //0x230
    struct _LIST_ENTRY SiblingJobLinks;                                     //0x234
    struct _LIST_ENTRY ChildJobListHead;                                    //0x23c
    struct _EJOB* ParentJob;                                                //0x244
    struct _EJOB* volatile RootJob;                                         //0x248
    struct _LIST_ENTRY IteratorListHead;                                    //0x24c
    ULONG AncestorCount;                                                    //0x254
    union
    {
        struct _EJOB** Ancestors;                                           //0x258
        VOID* SessionObject;                                                //0x258
    };
    struct _EPROCESS_VALUES Accounting;                                     //0x260
    ULONG ShadowActiveProcessCount;                                         //0x2b8
    ULONG ActiveAuxiliaryProcessCount;                                      //0x2bc
    ULONG SequenceNumber;                                                   //0x2c0
    ULONG JobId;                                                            //0x2c4
    struct _GUID ContainerId;                                               //0x2c8
    struct _GUID ContainerTelemetryId;                                      //0x2d8
    struct _ESERVERSILO_GLOBALS* ServerSiloGlobals;                         //0x2e8
    struct _PS_PROPERTY_SET PropertySet;                                    //0x2ec
    struct _PSP_STORAGE* Storage;                                           //0x2f8
    struct _JOB_NET_RATE_CONTROL* NetRateControl;                           //0x2fc
    union
    {
        ULONG JobFlags;                                                     //0x300
        struct
        {
            ULONG CloseDone:1;                                              //0x300
            ULONG MultiGroup:1;                                             //0x300
            ULONG OutstandingNotification:1;                                //0x300
            ULONG NotificationInProgress:1;                                 //0x300
            ULONG UILimits:1;                                               //0x300
            ULONG CpuRateControlActive:1;                                   //0x300
            ULONG OwnCpuRateControl:1;                                      //0x300
            ULONG Terminating:1;                                            //0x300
            ULONG WorkingSetLock:1;                                         //0x300
            ULONG JobFrozen:1;                                              //0x300
            ULONG Background:1;                                             //0x300
            ULONG WakeNotificationAllocated:1;                              //0x300
            ULONG WakeNotificationEnabled:1;                                //0x300
            ULONG WakeNotificationPending:1;                                //0x300
            ULONG LimitNotificationRequired:1;                              //0x300
            ULONG ZeroCountNotificationRequired:1;                          //0x300
            ULONG CycleTimeNotificationRequired:1;                          //0x300
            ULONG CycleTimeNotificationPending:1;                           //0x300
            ULONG TimersVirtualized:1;                                      //0x300
            ULONG JobSwapped:1;                                             //0x300
            ULONG ViolationDetected:1;                                      //0x300
            ULONG EmptyJobNotified:1;                                       //0x300
            ULONG NoSystemCharge:1;                                         //0x300
            ULONG DropNoWakeCharges:1;                                      //0x300
            ULONG NoWakeChargePolicyDecided:1;                              //0x300
            ULONG NetRateControlActive:1;                                   //0x300
            ULONG OwnNetRateControl:1;                                      //0x300
            ULONG IoRateControlActive:1;                                    //0x300
            ULONG OwnIoRateControl:1;                                       //0x300
            ULONG DisallowNewProcesses:1;                                   //0x300
            ULONG Silo:1;                                                   //0x300
            ULONG ContainerTelemetryIdSet:1;                                //0x300
        };
    };
    union
    {
        ULONG JobFlags2;                                                    //0x304
        struct
        {
            ULONG ParentLocked:1;                                           //0x304
            ULONG EnableUsermodeSiloThreadImpersonation:1;                  //0x304
            ULONG DisallowUsermodeSiloThreadImpersonation:1;                //0x304
        };
    };
    struct _PROCESS_EXTENDED_ENERGY_VALUES* EnergyValues;                   //0x308
    volatile ULONG SharedCommitCharge;                                      //0x30c
    ULONG DiskIoAttributionUserRefCount;                                    //0x310
    ULONG DiskIoAttributionRefCount;                                        //0x314
    union
    {
        VOID* DiskIoAttributionContext;                                     //0x318
        struct _EJOB* DiskIoAttributionOwnerJob;                            //0x318
    };
    struct _JOB_RATE_CONTROL_HEADER IoRateControlHeader;                    //0x31c
    struct _PS_IO_CONTROL_ENTRY GlobalIoControl;                            //0x330
    volatile LONG IoControlStateLock;                                       //0x34c
    struct _RTL_RB_TREE VolumeIoControlTree;                                //0x350
    ULONGLONG IoRateOverQuotaHistory;                                       //0x358
    ULONG IoRateCurrentGeneration;                                          //0x360
    ULONG IoRateLastQueryGeneration;                                        //0x364
    ULONG IoRateGenerationLength;                                           //0x368
    ULONG IoRateOverQuotaNotifySequenceId;                                  //0x36c
    ULONGLONG LastThrottledIoTime;                                          //0x370
    struct _EX_PUSH_LOCK IoControlLock;                                     //0x378
    ULONG SiloHardReferenceCount;                                           //0x37c
    struct _WORK_QUEUE_ITEM RundownWorkItem;                                //0x380
    VOID* PartitionObject;                                                  //0x390
    struct _EJOB* PartitionOwnerJob;                                        //0x394
    union _JOBOBJECT_ENERGY_TRACKING_STATE EnergyTrackingState;             //0x398
};
/* Used in */
// _DEVICE_MAP
// _EJOB
// _EPROCESS
// _ETHREAD
// _IO_DRIVER_CREATE_CONTEXT
// _MM_SESSION_SPACE
// _OB_EXTENDED_PARSE_PARAMETERS
// _SEP_LOGON_SESSION_REFERENCES

