#pragma once
/* ------------------ */

#include <_LARGE_INTEGER.h>
#include <_ETHREAD.h>
#include <_KDPC.h>
#include <_SLIST_HEADER.h>
#include <_ETW_APC_ENTRY.h>

//0x80 bytes (sizeof)
struct _ETW_STACK_TRACE_BLOCK
{
    union _LARGE_INTEGER RelatedTimestamp;                                  //0x0
    struct _ETHREAD* Thread;                                                //0x8
    struct _KDPC StackWalkDpc;                                              //0x10
    union _SLIST_HEADER ApcListHead;                                        //0x50
    struct _ETW_APC_ENTRY* ApcEntry;                                        //0x60
    ULONG ApcEntryCount;                                                    //0x68
    LONG Flags;                                                             //0x6c
    LONG ApcCount;                                                          //0x70
    LONG MaxApcCount;                                                       //0x74
};
/* Used in */
// _WMI_LOGGER_CONTEXT

