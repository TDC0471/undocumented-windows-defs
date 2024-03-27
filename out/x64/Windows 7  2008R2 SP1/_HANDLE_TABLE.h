#pragma once
/* ------------------ */

#include <_EPROCESS.h>
#include <_EX_PUSH_LOCK.h>
#include <_LIST_ENTRY.h>
#include <_HANDLE_TRACE_DEBUG_INFO.h>
#include <_HANDLE_TABLE_ENTRY.h>

//0x68 bytes (sizeof)
struct _HANDLE_TABLE
{
    ULONGLONG TableCode;                                                    //0x0
    struct _EPROCESS* QuotaProcess;                                         //0x8
    VOID* UniqueProcessId;                                                  //0x10
    struct _EX_PUSH_LOCK HandleLock;                                        //0x18
    struct _LIST_ENTRY HandleTableList;                                     //0x20
    struct _EX_PUSH_LOCK HandleContentionEvent;                             //0x30
    struct _HANDLE_TRACE_DEBUG_INFO* DebugInfo;                             //0x38
    LONG ExtraInfoPages;                                                    //0x40
    union
    {
        ULONG Flags;                                                        //0x44
        UCHAR StrictFIFO:1;                                                 //0x44
    };
    ULONG FirstFreeHandle;                                                  //0x48
    struct _HANDLE_TABLE_ENTRY* LastFreeHandleEntry;                        //0x50
    ULONG HandleCount;                                                      //0x58
    ULONG NextHandleNeedingPool;                                            //0x5c
    ULONG HandleCountHighWatermark;                                         //0x60
};
/* Used in */
// _EPROCESS

