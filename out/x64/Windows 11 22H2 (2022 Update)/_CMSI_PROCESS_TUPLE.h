#pragma once
/* ------------------ */

#include <_CMSI_RW_LOCK.h>

//0x30 bytes (sizeof)
struct _CMSI_PROCESS_TUPLE
{
    VOID* ProcessHandle;                                                    //0x0
    VOID* ProcessReference;                                                 //0x8
    struct _CMSI_RW_LOCK WorkingSetLock;                                    //0x10
    ULONGLONG LockedPageCharges;                                            //0x18
    ULONGLONG WorkingSetMinimum;                                            //0x20
    ULONGLONG WorkingSetMaximum;                                            //0x28
};
/* Used in */
// _HVP_VIEW_MAP

