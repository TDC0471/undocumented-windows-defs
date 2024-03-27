#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
enum _POP_IRP_WATCHDOG_STATE
{
    IrpWatchdogStateDisabled = 0,
    IrpWatchdogStateEnabled = 1,
    IrpWatchdogStateCompleted = 2,
    IrpWatchdogStateBlackboxSelected = 3
};
/* Used in */
// _POP_IRP_DATA

