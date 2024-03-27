#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
enum _POP_POWER_ACTION_WATCHDOG_STATE
{
    PopPowerActionWatchdogStateDisabled = 0,
    PopPowerActionWatchdogStateTransitioning = 1,
    PopPowerActionWatchdogStateResuming = 2,
    PopPowerActionWatchdogStateMax = 3
};
/* Used in */
// _POP_POWER_ACTION

