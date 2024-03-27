#pragma once
/* ------------------ */

#include <_HANDLE_TABLE_ENTRY_INFO.h>

//0x10 bytes (sizeof)
struct _HANDLE_TABLE_ENTRY
{
    union
    {
        VOID* Object;                                                       //0x0
        ULONG ObAttributes;                                                 //0x0
        struct _HANDLE_TABLE_ENTRY_INFO* InfoTable;                         //0x0
        ULONGLONG Value;                                                    //0x0
    };
    union
    {
        ULONG GrantedAccess;                                                //0x8
        struct
        {
            USHORT GrantedAccessIndex;                                      //0x8
            USHORT CreatorBackTraceIndex;                                   //0xa
        };
        ULONG NextFreeTableEntry;                                           //0x8
    };
};
/* Used in */
// _HANDLE_TABLE

