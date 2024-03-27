#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
enum _KCLOCK_TIMER_ONE_SHOT_STATE
{
    KClockTimerOneShotUnarmed = 0,
    KClockTimerOneShotArmed = 1,
    KClockTimerOneShotRearmRequired = 2,
    KClockTimerOneShotInvalid = 3
};
/* Used in */
// _KCLOCK_TIMER_STATE

