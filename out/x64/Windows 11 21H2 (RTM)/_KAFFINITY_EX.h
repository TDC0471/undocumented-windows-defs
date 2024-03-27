#pragma once
/* ------------------ */


//0x108 bytes (sizeof)
struct _KAFFINITY_EX
{
    USHORT Count;                                                           //0x0
    USHORT Size;                                                            //0x2
    ULONG Reserved;                                                         //0x4
    union
    {
        ULONGLONG Bitmap[1];                                                //0x8
        ULONGLONG StaticBitmap[32];                                         //0x8
    };
};
/* Used in */
// HAL_PRIVATE_DISPATCH
// _EJOB
// _HAL_INTEL_ENLIGHTENMENT_INFORMATION
// _KE_IDEAL_PROCESSOR_ASSIGNMENT_BLOCK
// _KPRCB
// _KPROCESS
// _KSOFTWARE_INTERRUPT_BATCH
// _KSTATIC_AFFINITY_BLOCK
// _KTHREAD
// _PPM_IDLE_STATE
// _PPM_IDLE_STATES
// _PPM_PLATFORM_STATE
// _PROC_PERF_DOMAIN

