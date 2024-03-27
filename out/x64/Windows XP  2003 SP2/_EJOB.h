#pragma once
/* ------------------ */

#include <_KEVENT.h>
#include <_LIST_ENTRY.h>
#include <_ERESOURCE.h>
#include <_LARGE_INTEGER.h>
#include <_PS_JOB_TOKEN_FILTER.h>
#include <_IO_COUNTERS.h>
#include <_KGUARDED_MUTEX.h>

//0x220 bytes (sizeof)
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
    ULONG UIRestrictionsClass;                                              //0x10c
    ULONG SecurityLimitFlags;                                               //0x110
    VOID* Token;                                                            //0x118
    struct _PS_JOB_TOKEN_FILTER* Filter;                                    //0x120
    ULONG EndOfJobTimeAction;                                               //0x128
    VOID* CompletionPort;                                                   //0x130
    VOID* CompletionKey;                                                    //0x138
    ULONG SessionId;                                                        //0x140
    ULONG SchedulingClass;                                                  //0x144
    ULONGLONG ReadOperationCount;                                           //0x148
    ULONGLONG WriteOperationCount;                                          //0x150
    ULONGLONG OtherOperationCount;                                          //0x158
    ULONGLONG ReadTransferCount;                                            //0x160
    ULONGLONG WriteTransferCount;                                           //0x168
    ULONGLONG OtherTransferCount;                                           //0x170
    struct _IO_COUNTERS IoInfo;                                             //0x178
    ULONGLONG ProcessMemoryLimit;                                           //0x1a8
    ULONGLONG JobMemoryLimit;                                               //0x1b0
    ULONGLONG PeakProcessMemoryUsed;                                        //0x1b8
    ULONGLONG PeakJobMemoryUsed;                                            //0x1c0
    ULONGLONG CurrentJobMemoryUsed;                                         //0x1c8
    struct _KGUARDED_MUTEX MemoryLimitsLock;                                //0x1d0
    struct _LIST_ENTRY JobSetLinks;                                         //0x208
    ULONG MemberLevel;                                                      //0x218
    ULONG JobFlags;                                                         //0x21c
};
/* Used in */
// _EPROCESS

