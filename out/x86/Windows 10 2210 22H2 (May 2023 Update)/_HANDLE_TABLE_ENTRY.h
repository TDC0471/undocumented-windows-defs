#pragma once
/* ------------------ */

#include <_HANDLE_TABLE_ENTRY_INFO.h>
#include <_HANDLE_TABLE_ENTRY.h>
#include <_EXHANDLE.h>

//0x8 bytes (sizeof)
union _HANDLE_TABLE_ENTRY
{
    volatile LONG VolatileLowValue;                                         //0x0
    LONG LowValue;                                                          //0x0
    struct
    {
        struct _HANDLE_TABLE_ENTRY_INFO* volatile InfoTable;                //0x0
    LONG HighValue;                                                         //0x4
    union _HANDLE_TABLE_ENTRY* NextFreeHandleEntry;                         //0x4
        struct _EXHANDLE LeafHandleValue;                                   //0x4
    };
    ULONG Unlocked:1;                                                       //0x0
    ULONG Attributes:2;                                                     //0x0
    struct
    {
        ULONG ObjectPointerBits:29;                                         //0x0
    LONG RefCountField;                                                     //0x4
    ULONG GrantedAccessBits:25;                                             //0x4
    ULONG ProtectFromClose:1;                                               //0x4
    ULONG NoRightsUpgrade:1;                                                //0x4
    };
    ULONG RefCnt:5;                                                         //0x4
};
/* Used in */
// _HANDLE_TABLE_ENTRY
// _HANDLE_TABLE_FREE_LIST

