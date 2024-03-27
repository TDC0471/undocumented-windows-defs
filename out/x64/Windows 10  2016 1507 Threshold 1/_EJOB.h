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
#include <_PS_WAKE_INFORMATION.h>
#include <_JOBOBJECT_WAKE_FILTER.h>
#include <_JOB_NOTIFICATION_INFORMATION.h>
#include <_IO_MINI_COMPLETION_PACKET_USER.h>
#include <_JOB_CPU_RATE_CONTROL.h>
#include <_EX_PUSH_LOCK.h>
#include <_EPROCESS_VALUES.h>
#include <_GUID.h>
#include <_ESILO.h>
#include <_PS_PROPERTY_SET.h>
#include <_JOB_NET_RATE_CONTROL.h>
#include <_JOB_IO_RATE_CONTROL.h>
#include <_PROCESS_ENERGY_VALUES.h>

//0x528 bytes (sizeof)
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
    struct _EJOB* EffectiveDiskIoRateLimitJob;                              //0x340
    struct _EJOB* EffectiveNetIoRateLimitJob;                               //0x348
    struct _EJOB* EffectiveHeapAttributionJob;                              //0x350
    ULONG EffectiveLimitFlags;                                              //0x358
    ULONG EffectiveSchedulingClass;                                         //0x35c
    ULONG EffectiveFreezeCount;                                             //0x360
    ULONG EffectiveBackgroundCount;                                         //0x364
    ULONG EffectiveSwapCount;                                               //0x368
    ULONG EffectiveNotificationLimitCount;                                  //0x36c
    UCHAR EffectivePriorityClass;                                           //0x370
    UCHAR PriorityClass;                                                    //0x371
    UCHAR NestingDepth;                                                     //0x372
    UCHAR Reserved1[1];                                                     //0x373
    ULONG CompletionFilter;                                                 //0x374
    union
    {
        struct _WNF_STATE_NAME WakeChannel;                                 //0x378
        struct _PS_WAKE_INFORMATION WakeInfo;                               //0x378
    };
    struct _JOBOBJECT_WAKE_FILTER WakeFilter;                               //0x3b0
    ULONG LowEdgeLatchFilter;                                               //0x3b8
    ULONG OwnedHighEdgeFilters;                                             //0x3bc
    struct _EJOB* NotificationLink;                                         //0x3c0
    ULONGLONG CurrentJobMemoryUsed;                                         //0x3c8
    struct _JOB_NOTIFICATION_INFORMATION* NotificationInfo;                 //0x3d0
    VOID* NotificationInfoQuotaReference;                                   //0x3d8
    struct _IO_MINI_COMPLETION_PACKET_USER* NotificationPacket;             //0x3e0
    struct _JOB_CPU_RATE_CONTROL* CpuRateControl;                           //0x3e8
    VOID* EffectiveSchedulingGroup;                                         //0x3f0
    ULONGLONG ReadyTime;                                                    //0x3f8
    struct _EX_PUSH_LOCK MemoryLimitsLock;                                  //0x400
    struct _LIST_ENTRY SiblingJobLinks;                                     //0x408
    struct _LIST_ENTRY ChildJobListHead;                                    //0x418
    struct _EJOB* ParentJob;                                                //0x428
    struct _EJOB* volatile RootJob;                                         //0x430
    struct _LIST_ENTRY IteratorListHead;                                    //0x438
    ULONGLONG AncestorCount;                                                //0x448
    union
    {
        struct _EJOB** Ancestors;                                           //0x450
        VOID* SessionObject;                                                //0x450
    };
    struct _EPROCESS_VALUES Accounting;                                     //0x458
    ULONG ShadowActiveProcessCount;                                         //0x4a8
    ULONG ActiveAuxiliaryProcessCount;                                      //0x4ac
    ULONG SequenceNumber;                                                   //0x4b0
    ULONGLONG TimerListLock;                                                //0x4b8
    struct _LIST_ENTRY TimerListHead;                                       //0x4c0
    struct _GUID ContainerId;                                               //0x4d0
    struct _ESILO* Container;                                               //0x4e0
    struct _PS_PROPERTY_SET PropertySet;                                    //0x4e8
    struct _JOB_NET_RATE_CONTROL* NetRateControl;                           //0x500
    struct _JOB_IO_RATE_CONTROL* IoRateControl;                             //0x508
    union
    {
        ULONG JobFlags;                                                     //0x510
        struct
        {
            ULONG CloseDone:1;                                              //0x510
            ULONG MultiGroup:1;                                             //0x510
            ULONG OutstandingNotification:1;                                //0x510
            ULONG NotificationInProgress:1;                                 //0x510
            ULONG UILimits:1;                                               //0x510
            ULONG CpuRateControlActive:1;                                   //0x510
            ULONG OwnCpuRateControl:1;                                      //0x510
            ULONG Terminating:1;                                            //0x510
            ULONG WorkingSetLock:1;                                         //0x510
            ULONG JobFrozen:1;                                              //0x510
            ULONG Background:1;                                             //0x510
            ULONG WakeNotificationAllocated:1;                              //0x510
            ULONG WakeNotificationEnabled:1;                                //0x510
            ULONG WakeNotificationPending:1;                                //0x510
            ULONG LimitNotificationRequired:1;                              //0x510
            ULONG ZeroCountNotificationRequired:1;                          //0x510
            ULONG CycleTimeNotificationRequired:1;                          //0x510
            ULONG CycleTimeNotificationPending:1;                           //0x510
            ULONG TimersVirtualized:1;                                      //0x510
            ULONG JobSwapped:1;                                             //0x510
            ULONG ViolationDetected:1;                                      //0x510
            ULONG EmptyJobNotified:1;                                       //0x510
            ULONG NoSystemCharge:1;                                         //0x510
            ULONG DropNoWakeCharges:1;                                      //0x510
            ULONG NoWakeChargePolicyDecided:1;                              //0x510
            ULONG NetRateControlActive:1;                                   //0x510
            ULONG OwnNetRateControl:1;                                      //0x510
            ULONG IoRateControlActive:1;                                    //0x510
            ULONG OwnIoRateControl:1;                                       //0x510
            ULONG IsContainerRoot:1;                                        //0x510
            ULONG SpareJobFlags:2;                                          //0x510
        };
    };
    ULONG EffectiveHighEdgeFilters;                                         //0x514
    struct _PROCESS_ENERGY_VALUES* EnergyValues;                            //0x518
    volatile ULONGLONG SharedCommitCharge;                                  //0x520
};
/* Used in */
// _EJOB
// _EPROCESS

