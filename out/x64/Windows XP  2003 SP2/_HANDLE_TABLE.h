#pragma once
/* ------------------ */

#include <_EPROCESS.h>
#include <_EX_PUSH_LOCK.h>
#include <_LIST_ENTRY.h>
#include <_HANDLE_TRACE_DEBUG_INFO.h>

//0x70 bytes (sizeof)
struct _HANDLE_TABLE
{
    ULONGLONG TableCode;                                                    //0x0
    struct _EPROCESS* QuotaProcess;                                         //0x8
    VOID* UniqueProcessId;                                                  //0x10
    struct _EX_PUSH_LOCK HandleTableLock[4];                                //0x18
    struct _LIST_ENTRY HandleTableList;                                     //0x38
    struct _EX_PUSH_LOCK HandleContentionEvent;                             //0x48
    struct _HANDLE_TRACE_DEBUG_INFO* DebugInfo;                             //0x50
    LONG ExtraInfoPages;                                                    //0x58
    ULONG FirstFree;                                                        //0x5c
    ULONG LastFree;                                                         //0x60
    ULONG NextHandleNeedingPool;                                            //0x64
    LONG HandleCount;                                                       //0x68
    union
    {
        ULONG Flags;                                                        //0x6c
        UCHAR StrictFIFO:1;                                                 //0x6c
    };
};
/* Used in */
// _EPROCESS

