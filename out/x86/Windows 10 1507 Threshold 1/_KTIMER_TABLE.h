#pragma once
/* ------------------ */

#include <_KTIMER.h>
#include <_KTIMER_TABLE_ENTRY.h>

//0x1840 bytes (sizeof)
struct _KTIMER_TABLE
{
    struct _KTIMER* TimerExpiry[16];                                        //0x0
    struct _KTIMER_TABLE_ENTRY TimerEntries[256];                           //0x40
};
/* Used in */
// _KPRCB

