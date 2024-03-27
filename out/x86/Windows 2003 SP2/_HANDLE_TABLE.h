#pragma once
/* ------------------ */

#include <_EPROCESS.h>
#include <_EX_PUSH_LOCK.h>
#include <_LIST_ENTRY.h>
#include <_HANDLE_TRACE_DEBUG_INFO.h>

//0x44 bytes (sizeof)
struct _HANDLE_TABLE
{
    ULONG TableCode;                                                        //0x0
    struct _EPROCESS* QuotaProcess;                                         //0x4
    VOID* UniqueProcessId;                                                  //0x8
    struct _EX_PUSH_LOCK HandleTableLock[4];                                //0xc
    struct _LIST_ENTRY HandleTableList;                                     //0x1c
    struct _EX_PUSH_LOCK HandleContentionEvent;                             //0x24
    struct _HANDLE_TRACE_DEBUG_INFO* DebugInfo;                             //0x28
    LONG ExtraInfoPages;                                                    //0x2c
    ULONG FirstFree;                                                        //0x30
    ULONG LastFree;                                                         //0x34
    ULONG NextHandleNeedingPool;                                            //0x38
    LONG HandleCount;                                                       //0x3c
    union
    {
        ULONG Flags;                                                        //0x40
        UCHAR StrictFIFO:1;                                                 //0x40
    };
};
/* Used in */
// _EPROCESS

