#pragma once
/* ------------------ */

#include <_HANDLE_TABLE_ENTRY_INFO.h>
#include <_HANDLE_TABLE_ENTRY.h>
#include <_EXHANDLE.h>

//0x10 bytes (sizeof)
union _HANDLE_TABLE_ENTRY
{
    volatile LONGLONG VolatileLowValue;                                     //0x0
    LONGLONG LowValue;                                                      //0x0
    struct
    {
        struct _HANDLE_TABLE_ENTRY_INFO* volatile InfoTable;                //0x0
    LONGLONG HighValue;                                                     //0x8
    union _HANDLE_TABLE_ENTRY* NextFreeHandleEntry;                         //0x8
        struct _EXHANDLE LeafHandleValue;                                   //0x8
    };
    LONGLONG RefCountField;                                                 //0x0
    ULONGLONG Unlocked:1;                                                   //0x0
    ULONGLONG RefCnt:16;                                                    //0x0
    ULONGLONG Attributes:3;                                                 //0x0
    struct
    {
        ULONGLONG ObjectPointerBits:44;                                     //0x0
    ULONG GrantedAccessBits:25;                                             //0x8
    ULONG NoRightsUpgrade:1;                                                //0x8
        ULONG Spare1:6;                                                     //0x8
    };
    ULONG Spare2;                                                           //0xc
};
/* Used in */
// _HANDLE_TABLE_ENTRY
// _HANDLE_TABLE_FREE_LIST

