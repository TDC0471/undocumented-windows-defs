#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
enum _KINTERRUPT_POLARITY
{
    InterruptPolarityUnknown = 0,
    InterruptActiveHigh = 1,
    InterruptRisingEdge = 1,
    InterruptActiveLow = 2,
    InterruptFallingEdge = 2,
    InterruptActiveBoth = 3
};
/* Used in */
// _KINTERRUPT

