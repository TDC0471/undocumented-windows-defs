#pragma once
/* ------------------ */

#include <_KEVENT.h>
#include <_LIST_ENTRY.h>
#include <_ERESOURCE.h>
#include <_LARGE_INTEGER.h>
#include <_JOB_ACCESS_STATE.h>
#include <_EX_PUSH_LOCK.h>

//0x128 bytes (sizeof)
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
    struct _JOB_ACCESS_STATE* AccessState;                                  //0xb0
    ULONG UIRestrictionsClass;                                              //0xb4
    ULONG EndOfJobTimeAction;                                               //0xb8
    VOID* CompletionPort;                                                   //0xbc
    VOID* CompletionKey;                                                    //0xc0
    ULONG SessionId;                                                        //0xc4
    ULONG SchedulingClass;                                                  //0xc8
    ULONGLONG ReadOperationCount;                                           //0xd0
    ULONGLONG WriteOperationCount;                                          //0xd8
    ULONGLONG OtherOperationCount;                                          //0xe0
    ULONGLONG ReadTransferCount;                                            //0xe8
    ULONGLONG WriteTransferCount;                                           //0xf0
    ULONGLONG OtherTransferCount;                                           //0xf8
    ULONG ProcessMemoryLimit;                                               //0x100
    ULONG JobMemoryLimit;                                                   //0x104
    ULONG PeakProcessMemoryUsed;                                            //0x108
    ULONG PeakJobMemoryUsed;                                                //0x10c
    ULONG CurrentJobMemoryUsed;                                             //0x110
    struct _EX_PUSH_LOCK MemoryLimitsLock;                                  //0x114
    struct _LIST_ENTRY JobSetLinks;                                         //0x118
    ULONG MemberLevel;                                                      //0x120
    ULONG JobFlags;                                                         //0x124
};
/* Used in */
// _EPROCESS

