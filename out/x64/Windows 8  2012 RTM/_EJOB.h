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

//0x4a8 bytes (sizeof)
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
    ULONGLONG PeakProcessMemoryUsed;                                        //0x250
    ULONGLONG PeakJobMemoryUsed;                                            //0x258
    struct _KAFFINITY_EX EffectiveAffinity;                                 //0x260
    union _LARGE_INTEGER EffectivePerProcessUserTimeLimit;                  //0x308
    ULONGLONG EffectiveMinimumWorkingSetSize;                               //0x310
    ULONGLONG EffectiveMaximumWorkingSetSize;                               //0x318
    ULONGLONG EffectiveProcessMemoryLimit;                                  //0x320
    struct _EJOB* EffectiveProcessMemoryLimitJob;                           //0x328
    struct _EJOB* EffectivePerProcessUserTimeLimitJob;                      //0x330
    ULONG EffectiveLimitFlags;                                              //0x338
    ULONG EffectiveSchedulingClass;                                         //0x33c
    ULONG EffectiveFreezeCount;                                             //0x340
    ULONG EffectiveBackgroundCount;                                         //0x344
    ULONG EffectiveSwapCount;                                               //0x348
    ULONG EffectiveNotificationLimitCount;                                  //0x34c
    UCHAR EffectivePriorityClass;                                           //0x350
    UCHAR PriorityClass;                                                    //0x351
    UCHAR Reserved1[2];                                                     //0x352
    ULONG CompletionFilter;                                                 //0x354
    union
    {
        struct _WNF_STATE_NAME WakeChannel;                                 //0x358
        struct _PS_WAKE_INFORMATION WakeInfo;                               //0x358
    };
    struct _JOBOBJECT_WAKE_FILTER WakeFilter;                               //0x3a0
    ULONG LowEdgeLatchFilter;                                               //0x3a8
    ULONG OwnedHighEdgeFilters;                                             //0x3ac
    struct _EJOB* NotificationLink;                                         //0x3b0
    ULONGLONG CurrentJobMemoryUsed;                                         //0x3b8
    struct _JOB_NOTIFICATION_INFORMATION* NotificationInfo;                 //0x3c0
    VOID* NotificationInfoQuotaReference;                                   //0x3c8
    struct _IO_MINI_COMPLETION_PACKET_USER* NotificationPacket;             //0x3d0
    struct _JOB_CPU_RATE_CONTROL* CpuRateControl;                           //0x3d8
    VOID* EffectiveSchedulingGroup;                                         //0x3e0
    struct _EX_PUSH_LOCK MemoryLimitsLock;                                  //0x3e8
    struct _LIST_ENTRY SiblingJobLinks;                                     //0x3f0
    struct _LIST_ENTRY ChildJobListHead;                                    //0x400
    struct _EJOB* ParentJob;                                                //0x410
    struct _EJOB* volatile RootJob;                                         //0x418
    struct _LIST_ENTRY IteratorListHead;                                    //0x420
    struct _EPROCESS_VALUES Accounting;                                     //0x430
    ULONG ShadowActiveProcessCount;                                         //0x480
    ULONG SequenceNumber;                                                   //0x484
    ULONGLONG TimerListLock;                                                //0x488
    struct _LIST_ENTRY TimerListHead;                                       //0x490
    union
    {
        ULONG JobFlags;                                                     //0x4a0
        struct
        {
            ULONG CloseDone:1;                                              //0x4a0
            ULONG MultiGroup:1;                                             //0x4a0
            ULONG OutstandingNotification:1;                                //0x4a0
            ULONG NotificationInProgress:1;                                 //0x4a0
            ULONG UILimits:1;                                               //0x4a0
            ULONG CpuRateControlActive:1;                                   //0x4a0
            ULONG OwnCpuRateControl:1;                                      //0x4a0
            ULONG Terminating:1;                                            //0x4a0
            ULONG WorkingSetLock:1;                                         //0x4a0
            ULONG JobFrozen:1;                                              //0x4a0
            ULONG Background:1;                                             //0x4a0
            ULONG WakeNotificationAllocated:1;                              //0x4a0
            ULONG WakeNotificationEnabled:1;                                //0x4a0
            ULONG WakeNotificationPending:1;                                //0x4a0
            ULONG LimitNotificationRequired:1;                              //0x4a0
            ULONG ZeroCountNotificationRequired:1;                          //0x4a0
            ULONG CycleTimeNotificationRequired:1;                          //0x4a0
            ULONG CycleTimeNotificationPending:1;                           //0x4a0
            ULONG TimersVirtualized:1;                                      //0x4a0
            ULONG JobSwapped:1;                                             //0x4a0
            ULONG ViolationDetected:1;                                      //0x4a0
            ULONG EmptyJobNotified:1;                                       //0x4a0
            ULONG NoSystemCharge:1;                                         //0x4a0
            ULONG SpareJobFlags:9;                                          //0x4a0
        };
    };
    ULONG EffectiveHighEdgeFilters;                                         //0x4a4
};
/* Used in */
// _EJOB
// _EPROCESS

