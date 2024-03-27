#pragma once
/* ------------------ */

#include <_KTIMER.h>
#include <_KTIMER_TABLE_ENTRY.h>

//0x2200 bytes (sizeof)
struct _KTIMER_TABLE
{
    struct _KTIMER* TimerExpiry[64];                                        //0x0
    struct _KTIMER_TABLE_ENTRY TimerEntries[256];                           //0x200
};
/* Used in */
// _KPRCB

