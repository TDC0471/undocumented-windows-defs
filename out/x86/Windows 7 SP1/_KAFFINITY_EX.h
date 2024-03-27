#pragma once
/* ------------------ */


//0xc bytes (sizeof)
struct _KAFFINITY_EX
{
    USHORT Count;                                                           //0x0
    USHORT Size;                                                            //0x2
    ULONG Reserved;                                                         //0x4
    ULONG Bitmap[1];                                                        //0x8
};
/* Used in */
// _ALIGNED_AFFINITY_SUMMARY
// _EJOB
// _KAFFINITY_ENUMERATION_CONTEXT
// _KPRCB
// _KPROCESS
// _PPM_IDLE_STATE
// _PPM_IDLE_STATES
// _PPM_PERF_STATES
// _PROC_PERF_DOMAIN
// _THERMAL_INFORMATION_EX

