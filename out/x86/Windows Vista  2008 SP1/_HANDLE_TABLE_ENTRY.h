#pragma once
/* ------------------ */

#include <_HANDLE_TABLE_ENTRY_INFO.h>

//0x8 bytes (sizeof)
struct _HANDLE_TABLE_ENTRY
{
    union
    {
        VOID* Object;                                                       //0x0
        ULONG ObAttributes;                                                 //0x0
        struct _HANDLE_TABLE_ENTRY_INFO* InfoTable;                         //0x0
        ULONG Value;                                                        //0x0
    };
    union
    {
        ULONG GrantedAccess;                                                //0x4
        struct
        {
            USHORT GrantedAccessIndex;                                      //0x4
            USHORT CreatorBackTraceIndex;                                   //0x6
        };
        LONG NextFreeTableEntry;                                            //0x4
    };
};
/* Used in */
// _HANDLE_TABLE
// _KALPC_MESSAGE

