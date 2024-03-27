#pragma once
/* ------------------ */


//0x20 bytes (sizeof)
struct _MI_CROSS_PARTITION_CHARGES
{
    ULONGLONG CurrentCharges;                                               //0x0
    ULONGLONG ChargeFailures;                                               //0x8
    ULONGLONG ChargePeak;                                                   //0x10
    ULONGLONG MaximumAllowed;                                               //0x18
};
/* Used in */
// _MI_PARTITION_SEGMENTS

