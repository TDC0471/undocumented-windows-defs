#pragma once
/* ------------------ */

#include <_RTL_CRITICAL_SECTION_DEBUG.h>

//0x28 bytes (sizeof)
struct _RTL_CRITICAL_SECTION
{
    struct _RTL_CRITICAL_SECTION_DEBUG* DebugInfo;                          //0x0
    LONG LockCount;                                                         //0x8
    LONG RecursionCount;                                                    //0xc
    VOID* OwningThread;                                                     //0x10
    VOID* LockSemaphore;                                                    //0x18
    ULONGLONG SpinCount;                                                    //0x20
};
/* Used in */
// _HEAP_LOCK
// _PEB
// _RTL_ATOM_TABLE
// _RTL_CRITICAL_SECTION_DEBUG

