#pragma once
/* ------------------ */


//0xa8 bytes (sizeof)
struct _KAFFINITY_EX
{
    USHORT Count;                                                           //0x0
    USHORT Size;                                                            //0x2
    ULONG Reserved;                                                         //0x4
    ULONGLONG Bitmap[20];                                                   //0x8
};
/* Used in */
// _EJOB
// _KPRCB
// _KPROCESS
// _PPM_IDLE_STATE
// _PPM_IDLE_STATES
// _PPM_PLATFORM_STATE
// _PROC_PERF_DOMAIN

