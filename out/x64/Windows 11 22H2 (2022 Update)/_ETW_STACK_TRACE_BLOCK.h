#pragma once
/* ------------------ */

#include <_LARGE_INTEGER.h>
#include <_ETHREAD.h>
#include <_KDPC.h>
#include <_SLIST_HEADER.h>

//0xa0 bytes (sizeof)
struct _ETW_STACK_TRACE_BLOCK
{
    union _LARGE_INTEGER RelatedTimestamp;                                  //0x0
    struct _ETHREAD* Thread;                                                //0x8
    struct _KDPC StackWalkDpc;                                              //0x10
    ULONGLONG ApcSpinLock;                                                  //0x50
    union _SLIST_HEADER ApcFreeListHead;                                    //0x60
    union _SLIST_HEADER ApcGlobalListHead;                                  //0x70
    LONG ApcCount;                                                          //0x80
    ULONG MinimumApcCount;                                                  //0x84
    ULONG MaximumApcCount;                                                  //0x88
    LONG Flags;                                                             //0x8c
    LONG OutstandingApcCount;                                               //0x90
    LONG MaxOutstandingApcCount;                                            //0x94
};
/* Used in */
// _WMI_LOGGER_CONTEXT

