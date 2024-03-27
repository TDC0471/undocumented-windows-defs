#pragma once
/* ------------------ */

#include <_MI_ACTIVE_WSLE_LISTHEAD.h>

//0x1a0 bytes (sizeof)
struct _MMWSL_INSTANCE
{
    ULONGLONG NextSlot;                                                     //0x0
    ULONGLONG NextAgingSlot;                                                //0x8
    ULONGLONG NextAccessClearingSlot;                                       //0x10
    ULONG LastAccessClearingRemainder;                                      //0x18
    ULONG LastAgingRemainder;                                               //0x1c
    ULONGLONG ActiveWsleCounts[16];                                         //0x20
    struct _MI_ACTIVE_WSLE_LISTHEAD ActiveWsles[16];                        //0xa0
};
/* Used in */
// _MI_VISIBLE_PARTITION
// _MMSUPPORT_INSTANCE
// _MMWSL_FULL

