#pragma once
/* ------------------ */


//0x10 bytes (sizeof)
struct _KTIMER_TABLE_STATE
{
    ULONGLONG LastTimerExpiration[1];                                       //0x0
    ULONG LastTimerHand[1];                                                 //0x8
};
/* Used in */
// _KTIMER_TABLE

