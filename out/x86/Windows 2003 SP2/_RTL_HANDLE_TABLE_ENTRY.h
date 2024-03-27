#pragma once
/* ------------------ */

#include <_RTL_HANDLE_TABLE_ENTRY.h>

//0x4 bytes (sizeof)
struct _RTL_HANDLE_TABLE_ENTRY
{
    union
    {
        ULONG Flags;                                                        //0x0
        struct _RTL_HANDLE_TABLE_ENTRY* NextFree;                           //0x0
    };
};
/* Used in */
// _RTL_HANDLE_TABLE
// _RTL_HANDLE_TABLE_ENTRY

