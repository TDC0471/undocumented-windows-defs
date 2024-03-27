#pragma once
/* ------------------ */

#include <_KEVENT.h>
#include <_LIST_ENTRY.h>
#include <_ERESOURCE.h>
#include <_LARGE_INTEGER.h>
#include <_KAFFINITY_EX.h>
#include <_JOB_ACCESS_STATE.h>
#include <_EX_PUSH_LOCK.h>

//0x138 bytes (sizeof)
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
    ULONG MinimumWorkingSetSize;                                            //0x98
    ULONG MaximumWorkingSetSize;                                            //0x9c
    ULONG LimitFlags;                                                       //0xa0
    ULONG ActiveProcessLimit;                                               //0xa4
    struct _KAFFINITY_EX Affinity;                                          //0xa8
    UCHAR PriorityClass;                                                    //0xb4
    struct _JOB_ACCESS_STATE* AccessState;                                  //0xb8
    ULONG UIRestrictionsClass;                                              //0xbc
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
    ULONG ProcessMemoryLimit;                                               //0x108
    ULONG JobMemoryLimit;                                                   //0x10c
    ULONG PeakProcessMemoryUsed;                                            //0x110
    ULONG PeakJobMemoryUsed;                                                //0x114
    ULONGLONG CurrentJobMemoryUsed;                                         //0x118
    struct _EX_PUSH_LOCK MemoryLimitsLock;                                  //0x120
    struct _LIST_ENTRY JobSetLinks;                                         //0x124
    ULONG MemberLevel;                                                      //0x12c
    ULONG JobFlags;                                                         //0x130
};
/* Used in */
// _EPROCESS

