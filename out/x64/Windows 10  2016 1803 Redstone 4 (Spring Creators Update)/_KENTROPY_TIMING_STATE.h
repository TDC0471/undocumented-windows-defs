#pragma once
/* ------------------ */

#include <_KDPC.h>

//0x150 bytes (sizeof)
struct _KENTROPY_TIMING_STATE
{
    ULONG EntropyCount;                                                     //0x0
    ULONG Buffer[64];                                                       //0x4
    struct _KDPC Dpc;                                                       //0x108
    ULONG LastDeliveredBuffer;                                              //0x148
};
/* Used in */
// _KPRCB

