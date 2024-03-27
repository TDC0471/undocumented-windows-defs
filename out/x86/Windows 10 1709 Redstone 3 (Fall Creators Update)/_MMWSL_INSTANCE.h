#pragma once
/* ------------------ */

#include <_MMPTE.h>

//0x18 bytes (sizeof)
struct _MMWSL_INSTANCE
{
    struct _MMPTE* NextPteToTrim;                                           //0x0
    struct _MMPTE* NextPteToAge;                                            //0x4
    struct _MMPTE* NextPteToAccessClear;                                    //0x8
    ULONG LastAccessClearingRemainder;                                      //0xc
    ULONG LastAgingRemainder;                                               //0x10
    ULONG LockedEntries;                                                    //0x14
};
/* Used in */
// _MI_SESSION_STATE
// _MI_SYSTEM_VA_STATE
// _MI_VISIBLE_PARTITION
// _MMSUPPORT_INSTANCE
// _MM_SESSION_SPACE

