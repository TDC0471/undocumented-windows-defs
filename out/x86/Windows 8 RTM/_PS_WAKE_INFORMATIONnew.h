#pragma once
/* ------------------ */


//0x48 bytes (sizeof)
struct _PS_WAKE_INFORMATION
{
    ULONGLONG NotificationChannel;                                          //0x0
    ULONGLONG WakeCounters[8];                                              //0x8
};
/* Used in */
// _EJOB

