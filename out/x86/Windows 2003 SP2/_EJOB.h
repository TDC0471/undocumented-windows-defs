#pragma once
/* ------------------ */

#include <_KEVENT.h>
#include <_LIST_ENTRY.h>
#include <_ERESOURCE.h>
#include <_LARGE_INTEGER.h>
#include <_PS_JOB_TOKEN_FILTER.h>
#include <_IO_COUNTERS.h>
#include <_KGUARDED_MUTEX.h>

//0x180 bytes (sizeof)
struct _EJOB
{
    struct _KEVENT Event;                                                   //0x0
    struct _LIST_ENTRY JobLinks;                                            //0x10
    struct _LIST_ENTRY ProcessListHead;                                     //0x18
    struct _ERESOURCE JobLock;                                              //0x20
    union _LARGE_INTEGER TotalUserTime;                                     //0x58
    union _LARGE_INTEGER TotalKernelTime;                                   //0x60
    union _LARGE_INTEGER ThisPeriodTotalUserTime;                           //0x68
    union _LARGE_INTEGER ThisPeriodTotalKernelTime;                         //0x70
    ULONG TotalPageFaultCount;                                              //0x78
    ULONG TotalProcesses;                                                   //0x7c
    ULONG ActiveProcesses;                                                  //0x80
    ULONG TotalTerminatedProcesses;                                         //0x84
    union _LARGE_INTEGER PerProcessUserTimeLimit;                           //0x88
    union _LARGE_INTEGER PerJobUserTimeLimit;                               //0x90
    ULONG LimitFlags;                                                       //0x98
    ULONG MinimumWorkingSetSize;                                            //0x9c
    ULONG MaximumWorkingSetSize;                                            //0xa0
    ULONG ActiveProcessLimit;                                               //0xa4
    ULONG Affinity;                                                         //0xa8
    UCHAR PriorityClass;                                                    //0xac
    ULONG UIRestrictionsClass;                                              //0xb0
    ULONG SecurityLimitFlags;                                               //0xb4
    VOID* Token;                                                            //0xb8
    struct _PS_JOB_TOKEN_FILTER* Filter;                                    //0xbc
    ULONG EndOfJobTimeAction;                                               //0xc0
    VOID* CompletionPort;                                                   //0xc4
    VOID* CompletionKey;                                                    //0xc8
    ULONG SessionId;                                                        //0xcc
    ULONG SchedulingClass;                                                  //0xd0
    ULONGLONG ReadOperationCount;                                           //0xd8
    ULONGLONG WriteOperationCount;                                          //0xe0
    ULONGLONG OtherOperationCount;                                          //0xe8
    ULONGLONG ReadTransferCount;                                            //0xf0
    ULONGLONG WriteTransferCount;                                           //0xf8
    ULONGLONG OtherTransferCount;                                           //0x100
    struct _IO_COUNTERS IoInfo;                                             //0x108
    ULONG ProcessMemoryLimit;                                               //0x138
    ULONG JobMemoryLimit;                                                   //0x13c
    ULONG PeakProcessMemoryUsed;                                            //0x140
    ULONG PeakJobMemoryUsed;                                                //0x144
    ULONG CurrentJobMemoryUsed;                                             //0x148
    struct _KGUARDED_MUTEX MemoryLimitsLock;                                //0x14c
    struct _LIST_ENTRY JobSetLinks;                                         //0x16c
    ULONG MemberLevel;                                                      //0x174
    ULONG JobFlags;                                                         //0x178
};
/* Used in */
// _EPROCESS

