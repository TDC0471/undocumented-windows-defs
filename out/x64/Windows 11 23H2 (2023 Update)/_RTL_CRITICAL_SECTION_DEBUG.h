#pragma once
/* ------------------ */

#include <_RTL_CRITICAL_SECTION.h>
#include <_LIST_ENTRY.h>

//0x30 bytes (sizeof)
struct _RTL_CRITICAL_SECTION_DEBUG
{
    USHORT Type;                                                            //0x0
    USHORT CreatorBackTraceIndex;                                           //0x2
    struct _RTL_CRITICAL_SECTION* CriticalSection;                          //0x8
    struct _LIST_ENTRY ProcessLocksList;                                    //0x10
    ULONG EntryCount;                                                       //0x20
    ULONG ContentionCount;                                                  //0x24
    ULONG Flags;                                                            //0x28
    USHORT CreatorBackTraceIndexHigh;                                       //0x2c
    USHORT Identifier;                                                      //0x2e
};
/* Used in */
// _RTL_CRITICAL_SECTION

