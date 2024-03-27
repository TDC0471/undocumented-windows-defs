#pragma once
/* ------------------ */


//0x20 bytes (sizeof)
struct _KCLOCK_INCREMENT_TRACE
{
    ULONG ActualIncrement;                                                  //0x0
    ULONG RequestedIncrement;                                               //0x4
    ULONGLONG InterruptTime;                                                //0x8
    ULONGLONG PerformanceCounter;                                           //0x10
    UCHAR OneShot;                                                          //0x18
};
/* Used in */
// _KCLOCK_TIMER_STATE

