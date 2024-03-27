#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>

//0x28 bytes (sizeof)
struct _MI_SYSTEM_ACCELERATORS
{
    struct _LIST_ENTRY HardwareInstances;                                   //0x0
    ULONG NumberOfHardwareInstances;                                        //0x10
    UCHAR ShuttingDown;                                                     //0x14
    UCHAR AllocationFailures;                                               //0x15
    UCHAR AllocationQueryFailures;                                          //0x16
    VOID** OpaqueContext;                                                   //0x18
    volatile LONG Lock;                                                     //0x20
};
/* Used in */
// _MI_SYSTEM_INFORMATION

