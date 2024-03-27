#pragma once
/* ------------------ */


//0x10 bytes (sizeof)
struct _PROC_IDLE_SNAP
{
    ULONGLONG Time;                                                         //0x0
    ULONGLONG Idle;                                                         //0x8
};
/* Used in */
// _PROCESSOR_POWER_STATE

