#pragma once
/* ------------------ */

#include <_EPROCESS.h>
#include <_LIST_ENTRY.h>
#include <_EX_PUSH_LOCK.h>
#include <_HANDLE_TABLE_FREE_LIST.h>
#include <_HANDLE_TRACE_DEBUG_INFO.h>

//0x5c bytes (sizeof)
struct _HANDLE_TABLE
{
    ULONG NextHandleNeedingPool;                                            //0x0
    LONG ExtraInfoPages;                                                    //0x4
    volatile ULONG TableCode;                                               //0x8
    struct _EPROCESS* QuotaProcess;                                         //0xc
    struct _LIST_ENTRY HandleTableList;                                     //0x10
    ULONG UniqueProcessId;                                                  //0x18
    union
    {
        ULONG Flags;                                                        //0x1c
        struct
        {
            UCHAR StrictFIFO:1;                                             //0x1c
            UCHAR EnableHandleExceptions:1;                                 //0x1c
            UCHAR Rundown:1;                                                //0x1c
            UCHAR Duplicated:1;                                             //0x1c
        };
    };
    struct _EX_PUSH_LOCK HandleContentionEvent;                             //0x20
    struct _EX_PUSH_LOCK HandleTableLock;                                   //0x24
    union
    {
        struct _HANDLE_TABLE_FREE_LIST FreeLists[1];                        //0x28
        struct
        {
            UCHAR ActualEntry[20];                                          //0x28
            struct _HANDLE_TRACE_DEBUG_INFO* DebugInfo;                     //0x3c
        };
    };
};
/* Used in */
// _EPROCESS
// _RTL_ATOM_TABLE

