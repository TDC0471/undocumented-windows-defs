#pragma once
/* ------------------ */

#include <_KTIMER.h>
#include <_KTIMER_TABLE_ENTRY.h>
#include <_KTIMER_TABLE_STATE.h>

//0x1850 bytes (sizeof)
struct _KTIMER_TABLE
{
    struct _KTIMER* TimerExpiry[16];                                        //0x0
    struct _KTIMER_TABLE_ENTRY TimerEntries[1][256];                        //0x40
    struct _KTIMER_TABLE_STATE TableState;                                  //0x1840
};
/* Used in */
// _KPRCB

