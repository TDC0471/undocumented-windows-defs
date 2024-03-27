#pragma once
/* ------------------ */

#include <_PROCESSOR_PLATFORM_STATE_RESIDENCY.h>

//0x18 bytes (sizeof)
struct _PROCESSOR_PLATFORM_STATE_RESIDENCIES
{
    ULONG Count;                                                            //0x0
    struct _PROCESSOR_PLATFORM_STATE_RESIDENCY States[1];                   //0x8
};
/* Used in */
// _PPM_IDLE_STATES

