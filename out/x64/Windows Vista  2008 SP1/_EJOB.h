#pragma once
/* ------------------ */

#include <_KEVENT.h>
#include <_LIST_ENTRY.h>
#include <_ERESOURCE.h>
#include <_LARGE_INTEGER.h>
#include <_JOB_ACCESS_STATE.h>
#include <_EX_PUSH_LOCK.h>

//0x1b0 bytes (sizeof)
struct _EJOB
{
    struct _KEVENT Event;                                                   //0x0
    struct _LIST_ENTRY JobLinks;                                            //0x18
    struct _LIST_ENTRY ProcessListHead;                                     //0x28
    struct _ERESOURCE JobLock;                                              //0x38
    union _LARGE_INTEGER TotalUserTime;                                     //0xa0
    union _LARGE_INTEGER TotalKernelTime;                                   //0xa8
    union _LARGE_INTEGER ThisPeriodTotalUserTime;                           //0xb0
    union _LARGE_INTEGER ThisPeriodTotalKernelTime;                         //0xb8
    ULONG TotalPageFaultCount;                                              //0xc0
    ULONG TotalProcesses;                                                   //0xc4
    ULONG ActiveProcesses;                                                  //0xc8
    ULONG TotalTerminatedProcesses;                                         //0xcc
    union _LARGE_INTEGER PerProcessUserTimeLimit;                           //0xd0
    union _LARGE_INTEGER PerJobUserTimeLimit;                               //0xd8
    ULONG LimitFlags;                                                       //0xe0
    ULONGLONG MinimumWorkingSetSize;                                        //0xe8
    ULONGLONG MaximumWorkingSetSize;                                        //0xf0
    ULONG ActiveProcessLimit;                                               //0xf8
    ULONGLONG Affinity;                                                     //0x100
    UCHAR PriorityClass;                                                    //0x108
    struct _JOB_ACCESS_STATE* AccessState;                                  //0x110
    ULONG UIRestrictionsClass;                                              //0x118
    ULONG EndOfJobTimeAction;                                               //0x11c
    VOID* CompletionPort;                                                   //0x120
    VOID* CompletionKey;                                                    //0x128
    ULONG SessionId;                                                        //0x130
    ULONG SchedulingClass;                                                  //0x134
    ULONGLONG ReadOperationCount;                                           //0x138
    ULONGLONG WriteOperationCount;                                          //0x140
    ULONGLONG OtherOperationCount;                                          //0x148
    ULONGLONG ReadTransferCount;                                            //0x150
    ULONGLONG WriteTransferCount;                                           //0x158
    ULONGLONG OtherTransferCount;                                           //0x160
    ULONGLONG ProcessMemoryLimit;                                           //0x168
    ULONGLONG JobMemoryLimit;                                               //0x170
    ULONGLONG PeakProcessMemoryUsed;                                        //0x178
    ULONGLONG PeakJobMemoryUsed;                                            //0x180
    ULONGLONG CurrentJobMemoryUsed;                                         //0x188
    struct _EX_PUSH_LOCK MemoryLimitsLock;                                  //0x190
    struct _LIST_ENTRY JobSetLinks;                                         //0x198
    ULONG MemberLevel;                                                      //0x1a8
    ULONG JobFlags;                                                         //0x1ac
};
/* Used in */
// _EPROCESS

