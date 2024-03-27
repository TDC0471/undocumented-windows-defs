#pragma once
/* ------------------ */

#include <_KEVENT.h>
#include <_LIST_ENTRY.h>
#include <_ERESOURCE.h>
#include <_LARGE_INTEGER.h>
#include <_KAFFINITY_EX.h>
#include <_JOB_ACCESS_STATE.h>
#include <_EX_PUSH_LOCK.h>

//0x1c8 bytes (sizeof)
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
    ULONGLONG MinimumWorkingSetSize;                                        //0xe0
    ULONGLONG MaximumWorkingSetSize;                                        //0xe8
    ULONG LimitFlags;                                                       //0xf0
    ULONG ActiveProcessLimit;                                               //0xf4
    struct _KAFFINITY_EX Affinity;                                          //0xf8
    UCHAR PriorityClass;                                                    //0x120
    struct _JOB_ACCESS_STATE* AccessState;                                  //0x128
    ULONG UIRestrictionsClass;                                              //0x130
    ULONG EndOfJobTimeAction;                                               //0x134
    VOID* CompletionPort;                                                   //0x138
    VOID* CompletionKey;                                                    //0x140
    ULONG SessionId;                                                        //0x148
    ULONG SchedulingClass;                                                  //0x14c
    ULONGLONG ReadOperationCount;                                           //0x150
    ULONGLONG WriteOperationCount;                                          //0x158
    ULONGLONG OtherOperationCount;                                          //0x160
    ULONGLONG ReadTransferCount;                                            //0x168
    ULONGLONG WriteTransferCount;                                           //0x170
    ULONGLONG OtherTransferCount;                                           //0x178
    ULONGLONG ProcessMemoryLimit;                                           //0x180
    ULONGLONG JobMemoryLimit;                                               //0x188
    ULONGLONG PeakProcessMemoryUsed;                                        //0x190
    ULONGLONG PeakJobMemoryUsed;                                            //0x198
    ULONGLONG CurrentJobMemoryUsed;                                         //0x1a0
    struct _EX_PUSH_LOCK MemoryLimitsLock;                                  //0x1a8
    struct _LIST_ENTRY JobSetLinks;                                         //0x1b0
    ULONG MemberLevel;                                                      //0x1c0
    ULONG JobFlags;                                                         //0x1c4
};
/* Used in */
// _EPROCESS

