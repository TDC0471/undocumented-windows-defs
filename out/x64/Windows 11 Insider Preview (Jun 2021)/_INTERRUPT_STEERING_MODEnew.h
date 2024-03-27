#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
enum _INTERRUPT_STEERING_MODE
{
    IntSteerModeNone = 0,
    IntSteerModeController = 1,
    IntSteerModeRedirect = 2,
    IntSteerModeControllerFixed = 3
};
/* Used in */
// _INTERRUPT_TRACKING_ROOT

