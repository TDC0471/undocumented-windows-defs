#pragma once
/* ------------------ */

#include <_MI_ACTIVE_WSLE_LISTHEAD.h>

//0xd4 bytes (sizeof)
struct _MMWSL_INSTANCE
{
    ULONG NextSlot;                                                         //0x0
    ULONG NextAgingSlot;                                                    //0x4
    ULONG NextAccessClearingSlot;                                           //0x8
    ULONG LastAccessClearingRemainder;                                      //0xc
    ULONG LastAgingRemainder;                                               //0x10
    ULONG ActiveWsleCounts[16];                                             //0x14
    struct _MI_ACTIVE_WSLE_LISTHEAD ActiveWsles[16];                        //0x54
};
/* Used in */
// _MI_VISIBLE_PARTITION
// _MMSUPPORT_INSTANCE
// _MMWSL_FULL

