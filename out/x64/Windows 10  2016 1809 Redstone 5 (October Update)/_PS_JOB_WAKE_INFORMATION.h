#pragma once
/* ------------------ */


//0x48 bytes (sizeof)
struct _PS_JOB_WAKE_INFORMATION
{
    ULONGLONG NotificationChannel;                                          //0x0
    ULONGLONG WakeCounters[7];                                              //0x8
    ULONGLONG NoWakeCounter;                                                //0x40
};
/* Used in */
// _EJOB

