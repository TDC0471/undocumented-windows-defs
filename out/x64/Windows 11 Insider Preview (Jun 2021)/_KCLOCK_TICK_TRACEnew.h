#pragma once
/* ------------------ */


//0x28 bytes (sizeof)
struct _KCLOCK_TICK_TRACE
{
    ULONGLONG PerformanceCounter;                                           //0x0
    ULONGLONG PreInterruptTime;                                             //0x8
    ULONGLONG PostInterruptTime;                                            //0x10
    ULONGLONG TimeStampCounter;                                             //0x18
    UCHAR IsClockOwner;                                                     //0x20
};
/* Used in */
// _KCLOCK_TIMER_STATE

