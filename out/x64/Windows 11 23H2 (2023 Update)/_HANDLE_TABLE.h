#pragma once
/* ------------------ */

#include <_EPROCESS.h>
#include <_LIST_ENTRY.h>
#include <_EX_PUSH_LOCK.h>
#include <_HANDLE_TABLE_FREE_LIST.h>
#include <_HANDLE_TRACE_DEBUG_INFO.h>

//0x80 bytes (sizeof)
struct _HANDLE_TABLE
{
    ULONG NextHandleNeedingPool;                                            //0x0
    LONG ExtraInfoPages;                                                    //0x4
    volatile ULONGLONG TableCode;                                           //0x8
    struct _EPROCESS* QuotaProcess;                                         //0x10
    struct _LIST_ENTRY HandleTableList;                                     //0x18
    ULONG UniqueProcessId;                                                  //0x28
    union
    {
        ULONG Flags;                                                        //0x2c
        struct
        {
            UCHAR StrictFIFO:1;                                             //0x2c
            UCHAR EnableHandleExceptions:1;                                 //0x2c
            UCHAR Rundown:1;                                                //0x2c
            UCHAR Duplicated:1;                                             //0x2c
            UCHAR RaiseUMExceptionOnInvalidHandleClose:1;                   //0x2c
        };
    };
    struct _EX_PUSH_LOCK HandleContentionEvent;                             //0x30
    struct _EX_PUSH_LOCK HandleTableLock;                                   //0x38
    union
    {
        struct _HANDLE_TABLE_FREE_LIST FreeLists[1];                        //0x40
        struct
        {
            UCHAR ActualEntry[32];                                          //0x40
            struct _HANDLE_TRACE_DEBUG_INFO* DebugInfo;                     //0x60
        };
    };
};
/* Used in */
// _EPROCESS
// _RTL_ATOM_TABLE

