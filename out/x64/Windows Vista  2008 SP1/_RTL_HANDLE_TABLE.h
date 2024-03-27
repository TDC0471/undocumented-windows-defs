#pragma once
/* ------------------ */

#include <_RTL_HANDLE_TABLE_ENTRY.h>

//0x30 bytes (sizeof)
struct _RTL_HANDLE_TABLE
{
    ULONG MaximumNumberOfHandles;                                           //0x0
    ULONG SizeOfHandleTableEntry;                                           //0x4
    ULONG Reserved[2];                                                      //0x8
    struct _RTL_HANDLE_TABLE_ENTRY* FreeHandles;                            //0x10
    struct _RTL_HANDLE_TABLE_ENTRY* CommittedHandles;                       //0x18
    struct _RTL_HANDLE_TABLE_ENTRY* UnCommittedHandles;                     //0x20
    struct _RTL_HANDLE_TABLE_ENTRY* MaxReservedHandles;                     //0x28
};
/* Used in */
// _RTL_ATOM_TABLE

