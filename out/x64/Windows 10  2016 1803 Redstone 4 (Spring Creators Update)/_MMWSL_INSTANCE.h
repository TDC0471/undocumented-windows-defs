#pragma once
/* ------------------ */

#include <_MMPTE.h>

//0x28 bytes (sizeof)
struct _MMWSL_INSTANCE
{
    struct _MMPTE* NextPteToTrim;                                           //0x0
    struct _MMPTE* NextPteToAge;                                            //0x8
    struct _MMPTE* NextPteToAccessClear;                                    //0x10
    ULONG LastAccessClearingRemainder;                                      //0x18
    ULONG LastAgingRemainder;                                               //0x1c
    ULONGLONG LockedEntries;                                                //0x20
};
/* Used in */
// _MI_SESSION_STATE
// _MI_SYSTEM_VA_STATE
// _MI_VISIBLE_PARTITION
// _MMSUPPORT_INSTANCE
// _MM_SESSION_SPACE

