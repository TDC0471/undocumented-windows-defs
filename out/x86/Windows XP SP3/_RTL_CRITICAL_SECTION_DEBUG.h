#pragma once
/* ------------------ */

#include <_RTL_CRITICAL_SECTION.h>
#include <_LIST_ENTRY.h>

//0x20 bytes (sizeof)
struct _RTL_CRITICAL_SECTION_DEBUG
{
    USHORT Type;                                                            //0x0
    USHORT CreatorBackTraceIndex;                                           //0x2
    struct _RTL_CRITICAL_SECTION* CriticalSection;                          //0x4
    struct _LIST_ENTRY ProcessLocksList;                                    //0x8
    ULONG EntryCount;                                                       //0x10
    ULONG ContentionCount;                                                  //0x14
    ULONG Spare[2];                                                         //0x18
};
/* Used in */
// _RTL_CRITICAL_SECTION

