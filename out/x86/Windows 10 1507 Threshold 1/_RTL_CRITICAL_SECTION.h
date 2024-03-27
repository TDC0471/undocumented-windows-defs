#pragma once
/* ------------------ */

#include <_RTL_CRITICAL_SECTION_DEBUG.h>

//0x18 bytes (sizeof)
struct _RTL_CRITICAL_SECTION
{
    struct _RTL_CRITICAL_SECTION_DEBUG* DebugInfo;                          //0x0
    LONG LockCount;                                                         //0x4
    LONG RecursionCount;                                                    //0x8
    VOID* OwningThread;                                                     //0xc
    VOID* LockSemaphore;                                                    //0x10
    ULONG SpinCount;                                                        //0x14
};
/* Used in */
// _HEAP_LOCK
// _PEB
// _RTL_CRITICAL_SECTION_DEBUG

