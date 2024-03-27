#pragma once
/* ------------------ */


//0x38 bytes (sizeof)
struct _PS_WAKE_INFORMATION
{
    ULONGLONG NotificationChannel;                                          //0x0
    ULONGLONG WakeCounters[5];                                              //0x8
    ULONGLONG NoWakeCounter;                                                //0x30
};
/* Used in */
// _EJOB

