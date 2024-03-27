#pragma once
/* ------------------ */

#include <_LARGE_INTEGER.h>
#include <_ETHREAD.h>
#include <_KDPC.h>
#include <_SLIST_HEADER.h>
#include <_ETW_APC_ENTRY.h>

//0x288 bytes (sizeof)
struct _ETW_STACK_TRACE_BLOCK
{
    LONG Flags;                                                             //0x0
    union _LARGE_INTEGER RelatedTimestamp;                                  //0x8
    struct _ETHREAD* Thread;                                                //0x10
    struct _KDPC StackWalkDpc;                                              //0x14
    union _SLIST_HEADER ApcListHead;                                        //0x38
    struct _ETW_APC_ENTRY ApcEntry[12];                                     //0x40
    LONG ApcCount;                                                          //0x280
    LONG MaxApcCount;                                                       //0x284
};
/* Used in */
// _WMI_LOGGER_CONTEXT

