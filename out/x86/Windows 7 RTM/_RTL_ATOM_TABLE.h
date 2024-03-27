#pragma once
/* ------------------ */

#include <_RTL_CRITICAL_SECTION.h>
#include <_RTL_HANDLE_TABLE.h>
#include <_RTL_ATOM_TABLE_ENTRY.h>

//0x44 bytes (sizeof)
struct _RTL_ATOM_TABLE
{
    ULONG Signature;                                                        //0x0
    struct _RTL_CRITICAL_SECTION CriticalSection;                           //0x4
    struct _RTL_HANDLE_TABLE RtlHandleTable;                                //0x1c
    ULONG NumberOfBuckets;                                                  //0x3c
    struct _RTL_ATOM_TABLE_ENTRY* Buckets[1];                               //0x40
};
