#pragma once
/* ------------------ */

#include <_EPROCESS.h>
#include <_EX_PUSH_LOCK.h>
#include <_LIST_ENTRY.h>
#include <_HANDLE_TRACE_DEBUG_INFO.h>
#include <_HANDLE_TABLE_ENTRY.h>

//0x3c bytes (sizeof)
struct _HANDLE_TABLE
{
    ULONG TableCode;                                                        //0x0
    struct _EPROCESS* QuotaProcess;                                         //0x4
    VOID* UniqueProcessId;                                                  //0x8
    struct _EX_PUSH_LOCK HandleLock;                                        //0xc
    struct _LIST_ENTRY HandleTableList;                                     //0x10
    struct _EX_PUSH_LOCK HandleContentionEvent;                             //0x18
    struct _HANDLE_TRACE_DEBUG_INFO* DebugInfo;                             //0x1c
    LONG ExtraInfoPages;                                                    //0x20
    union
    {
        ULONG Flags;                                                        //0x24
        UCHAR StrictFIFO:1;                                                 //0x24
    };
    ULONG FirstFreeHandle;                                                  //0x28
    struct _HANDLE_TABLE_ENTRY* LastFreeHandleEntry;                        //0x2c
    ULONG HandleCount;                                                      //0x30
    ULONG NextHandleNeedingPool;                                            //0x34
    ULONG HandleCountHighWatermark;                                         //0x38
};
/* Used in */
// _EPROCESS

