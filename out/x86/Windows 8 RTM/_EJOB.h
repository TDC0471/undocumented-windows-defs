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

//0x2b8 bytes (sizeof)
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
    ULONG PeakProcessMemoryUsed;                                            //0x150
    ULONG PeakJobMemoryUsed;                                                //0x154
    struct _KAFFINITY_EX EffectiveAffinity;                                 //0x158
    union _LARGE_INTEGER EffectivePerProcessUserTimeLimit;                  //0x168
    ULONG EffectiveMinimumWorkingSetSize;                                   //0x170
    ULONG EffectiveMaximumWorkingSetSize;                                   //0x174
    ULONG EffectiveProcessMemoryLimit;                                      //0x178
    struct _EJOB* EffectiveProcessMemoryLimitJob;                           //0x17c
    struct _EJOB* EffectivePerProcessUserTimeLimitJob;                      //0x180
    ULONG EffectiveLimitFlags;                                              //0x184
    ULONG EffectiveSchedulingClass;                                         //0x188
    ULONG EffectiveFreezeCount;                                             //0x18c
    ULONG EffectiveBackgroundCount;                                         //0x190
    ULONG EffectiveSwapCount;                                               //0x194
    ULONG EffectiveNotificationLimitCount;                                  //0x198
    UCHAR EffectivePriorityClass;                                           //0x19c
    UCHAR PriorityClass;                                                    //0x19d
    UCHAR Reserved1[2];                                                     //0x19e
    ULONG CompletionFilter;                                                 //0x1a0
    union
    {
        struct _WNF_STATE_NAME WakeChannel;                                 //0x1a8
        struct _PS_WAKE_INFORMATION WakeInfo;                               //0x1a8
    };
    struct _JOBOBJECT_WAKE_FILTER WakeFilter;                               //0x1f0
    ULONG LowEdgeLatchFilter;                                               //0x1f8
    ULONG OwnedHighEdgeFilters;                                             //0x1fc
    struct _EJOB* NotificationLink;                                         //0x200
    ULONGLONG CurrentJobMemoryUsed;                                         //0x208
    struct _JOB_NOTIFICATION_INFORMATION* NotificationInfo;                 //0x210
    VOID* NotificationInfoQuotaReference;                                   //0x214
    struct _IO_MINI_COMPLETION_PACKET_USER* NotificationPacket;             //0x218
    struct _JOB_CPU_RATE_CONTROL* CpuRateControl;                           //0x21c
    VOID* EffectiveSchedulingGroup;                                         //0x220
    struct _EX_PUSH_LOCK MemoryLimitsLock;                                  //0x224
    struct _LIST_ENTRY SiblingJobLinks;                                     //0x228
    struct _LIST_ENTRY ChildJobListHead;                                    //0x230
    struct _EJOB* ParentJob;                                                //0x238
    struct _EJOB* volatile RootJob;                                         //0x23c
    struct _LIST_ENTRY IteratorListHead;                                    //0x240
    struct _EPROCESS_VALUES Accounting;                                     //0x248
    ULONG ShadowActiveProcessCount;                                         //0x298
    ULONG SequenceNumber;                                                   //0x29c
    ULONG TimerListLock;                                                    //0x2a0
    struct _LIST_ENTRY TimerListHead;                                       //0x2a4
    union
    {
        ULONG JobFlags;                                                     //0x2ac
        struct
        {
            ULONG CloseDone:1;                                              //0x2ac
            ULONG MultiGroup:1;                                             //0x2ac
            ULONG OutstandingNotification:1;                                //0x2ac
            ULONG NotificationInProgress:1;                                 //0x2ac
            ULONG UILimits:1;                                               //0x2ac
            ULONG CpuRateControlActive:1;                                   //0x2ac
            ULONG OwnCpuRateControl:1;                                      //0x2ac
            ULONG Terminating:1;                                            //0x2ac
            ULONG WorkingSetLock:1;                                         //0x2ac
            ULONG JobFrozen:1;                                              //0x2ac
            ULONG Background:1;                                             //0x2ac
            ULONG WakeNotificationAllocated:1;                              //0x2ac
            ULONG WakeNotificationEnabled:1;                                //0x2ac
            ULONG WakeNotificationPending:1;                                //0x2ac
            ULONG LimitNotificationRequired:1;                              //0x2ac
            ULONG ZeroCountNotificationRequired:1;                          //0x2ac
            ULONG CycleTimeNotificationRequired:1;                          //0x2ac
            ULONG CycleTimeNotificationPending:1;                           //0x2ac
            ULONG TimersVirtualized:1;                                      //0x2ac
            ULONG JobSwapped:1;                                             //0x2ac
            ULONG ViolationDetected:1;                                      //0x2ac
            ULONG EmptyJobNotified:1;                                       //0x2ac
            ULONG NoSystemCharge:1;                                         //0x2ac
            ULONG SpareJobFlags:9;                                          //0x2ac
        };
    };
    ULONG EffectiveHighEdgeFilters;                                         //0x2b0
};
/* Used in */
// _EJOB
// _EPROCESS

