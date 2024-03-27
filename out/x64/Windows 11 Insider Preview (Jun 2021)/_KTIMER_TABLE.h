#pragma once
/* ------------------ */

#include <_KTIMER.h>
#include <_KTIMER_TABLE_ENTRY.h>
#include <_KTIMER_TABLE_STATE.h>

//0x4218 bytes (sizeof)
struct _KTIMER_TABLE
{
    struct _KTIMER* TimerExpiry[64];                                        //0x0
    struct _KTIMER_TABLE_ENTRY TimerEntries[2][256];                        //0x200
    struct _KTIMER_TABLE_STATE TableState;                                  //0x4200
};
/* Used in */
// _KPRCB

