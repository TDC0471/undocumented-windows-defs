#pragma once
/* ------------------ */

#include <_MMIO_TRACKER.h>

//0x8 bytes (sizeof)
struct _MI_PHYSMEM_BLOCK
{
    struct _MMIO_TRACKER* IoTracker;                                        //0x0
};
/* Used in */
// _MI_VAD_EVENT_BLOCK

