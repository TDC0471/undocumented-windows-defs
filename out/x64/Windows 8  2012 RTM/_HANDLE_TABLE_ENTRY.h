#pragma once
/* ------------------ */

#include <_HANDLE_TABLE_ENTRY_INFO.h>
#include <_HANDLE_TABLE_ENTRY.h>
#include <_EXHANDLE.h>

//0x10 bytes (sizeof)
struct _HANDLE_TABLE_ENTRY
{
    union
    {
        volatile LONGLONG VolatileLowValue;                                 //0x0
        LONGLONG LowValue;                                                  //0x0
        struct _HANDLE_TABLE_ENTRY_INFO* volatile InfoTable;                //0x0
        struct
        {
            ULONGLONG Unlocked:1;                                           //0x0
            ULONGLONG RefCnt:19;                                            //0x0
            ULONGLONG Attributes:3;                                         //0x0
            ULONGLONG ObjectPointerBits:41;                                 //0x0
        };
    };
    union
    {
        LONGLONG HighValue;                                                 //0x8
        struct _HANDLE_TABLE_ENTRY* NextFreeHandleEntry;                    //0x8
        struct _EXHANDLE LeafHandleValue;                                   //0x8
        struct
        {
            ULONG GrantedAccessBits:25;                                     //0x8
            ULONG Spare:7;                                                  //0x8
            ULONG TypeInfo;                                                 //0xc
        };
    };
};
/* Used in */
// _HANDLE_TABLE_ENTRY
// _HANDLE_TABLE_FREE_LIST

