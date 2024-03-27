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

//0x2f8 bytes (sizeof)
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
    struct _EJOB* EffectiveDiskIoRateLimitJob;                              //0x184
    struct _EJOB* EffectiveNetIoRateLimitJob;                               //0x188
    struct _EJOB* EffectiveHeapAttributionJob;                              //0x18c
    ULONG EffectiveLimitFlags;                                              //0x190
    ULONG EffectiveSchedulingClass;                                         //0x194
    ULONG EffectiveFreezeCount;                                             //0x198
    ULONG EffectiveBackgroundCount;                                         //0x19c
    ULONG EffectiveSwapCount;                                               //0x1a0
    ULONG EffectiveNotificationLimitCount;                                  //0x1a4
    UCHAR EffectivePriorityClass;                                           //0x1a8
    UCHAR PriorityClass;                                                    //0x1a9
    UCHAR NestingDepth;                                                     //0x1aa
    UCHAR Reserved1[1];                                                     //0x1ab
    ULONG CompletionFilter;                                                 //0x1ac
    union
    {
        struct _WNF_STATE_NAME WakeChannel;                                 //0x1b0
        struct _PS_WAKE_INFORMATION WakeInfo;                               //0x1b0
    };
    struct _JOBOBJECT_WAKE_FILTER WakeFilter;                               //0x1e8
    ULONG LowEdgeLatchFilter;                                               //0x1f0
    ULONG OwnedHighEdgeFilters;                                             //0x1f4
    struct _EJOB* NotificationLink;                                         //0x1f8
    ULONGLONG CurrentJobMemoryUsed;                                         //0x200
    struct _JOB_NOTIFICATION_INFORMATION* NotificationInfo;                 //0x208
    VOID* NotificationInfoQuotaReference;                                   //0x20c
    struct _IO_MINI_COMPLETION_PACKET_USER* NotificationPacket;             //0x210
    struct _JOB_CPU_RATE_CONTROL* CpuRateControl;                           //0x214
    VOID* EffectiveSchedulingGroup;                                         //0x218
    ULONGLONG ReadyTime;                                                    //0x220
    struct _EX_PUSH_LOCK MemoryLimitsLock;                                  //0x228
    struct _LIST_ENTRY SiblingJobLinks;                                     //0x22c
    struct _LIST_ENTRY ChildJobListHead;                                    //0x234
    struct _EJOB* ParentJob;                                                //0x23c
    struct _EJOB* volatile RootJob;                                         //0x240
    struct _LIST_ENTRY IteratorListHead;                                    //0x244
    ULONG AncestorCount;                                                    //0x24c
    union
    {
        struct _EJOB** Ancestors;                                           //0x250
        VOID* SessionObject;                                                //0x250
    };
    struct _EPROCESS_VALUES Accounting;                                     //0x258
    ULONG ShadowActiveProcessCount;                                         //0x2a8
    ULONG ActiveAuxiliaryProcessCount;                                      //0x2ac
    ULONG SequenceNumber;                                                   //0x2b0
    ULONG TimerListLock;                                                    //0x2b4
    struct _LIST_ENTRY TimerListHead;                                       //0x2b8
    struct _GUID ContainerId;                                               //0x2c0
    struct _ESILO* Container;                                               //0x2d0
    struct _PS_PROPERTY_SET PropertySet;                                    //0x2d4
    struct _JOB_NET_RATE_CONTROL* NetRateControl;                           //0x2e0
    struct _JOB_IO_RATE_CONTROL* IoRateControl;                             //0x2e4
    union
    {
        ULONG JobFlags;                                                     //0x2e8
        struct
        {
            ULONG CloseDone:1;                                              //0x2e8
            ULONG MultiGroup:1;                                             //0x2e8
            ULONG OutstandingNotification:1;                                //0x2e8
            ULONG NotificationInProgress:1;                                 //0x2e8
            ULONG UILimits:1;                                               //0x2e8
            ULONG CpuRateControlActive:1;                                   //0x2e8
            ULONG OwnCpuRateControl:1;                                      //0x2e8
            ULONG Terminating:1;                                            //0x2e8
            ULONG WorkingSetLock:1;                                         //0x2e8
            ULONG JobFrozen:1;                                              //0x2e8
            ULONG Background:1;                                             //0x2e8
            ULONG WakeNotificationAllocated:1;                              //0x2e8
            ULONG WakeNotificationEnabled:1;                                //0x2e8
            ULONG WakeNotificationPending:1;                                //0x2e8
            ULONG LimitNotificationRequired:1;                              //0x2e8
            ULONG ZeroCountNotificationRequired:1;                          //0x2e8
            ULONG CycleTimeNotificationRequired:1;                          //0x2e8
            ULONG CycleTimeNotificationPending:1;                           //0x2e8
            ULONG TimersVirtualized:1;                                      //0x2e8
            ULONG JobSwapped:1;                                             //0x2e8
            ULONG ViolationDetected:1;                                      //0x2e8
            ULONG EmptyJobNotified:1;                                       //0x2e8
            ULONG NoSystemCharge:1;                                         //0x2e8
            ULONG DropNoWakeCharges:1;                                      //0x2e8
            ULONG NoWakeChargePolicyDecided:1;                              //0x2e8
            ULONG NetRateControlActive:1;                                   //0x2e8
            ULONG OwnNetRateControl:1;                                      //0x2e8
            ULONG IoRateControlActive:1;                                    //0x2e8
            ULONG OwnIoRateControl:1;                                       //0x2e8
            ULONG IsContainerRoot:1;                                        //0x2e8
            ULONG SpareJobFlags:2;                                          //0x2e8
        };
    };
    ULONG EffectiveHighEdgeFilters;                                         //0x2ec
    struct _PROCESS_ENERGY_VALUES* EnergyValues;                            //0x2f0
    volatile ULONG SharedCommitCharge;                                      //0x2f4
};
/* Used in */
// _EJOB
// _EPROCESS

