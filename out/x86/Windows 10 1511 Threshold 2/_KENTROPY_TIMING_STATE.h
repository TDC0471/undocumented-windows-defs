#pragma once
/* ------------------ */

#include <_KDPC.h>

//0x128 bytes (sizeof)
struct _KENTROPY_TIMING_STATE
{
    ULONG EntropyCount;                                                     //0x0
    ULONG Buffer[64];                                                       //0x4
    struct _KDPC Dpc;                                                       //0x104
    ULONG LastDeliveredBuffer;                                              //0x124
};
/* Used in */
// _KPRCB

