#pragma once
/* ------------------ */


//0x28 bytes (sizeof)
struct _MI_CROSS_PARTITION_CHARGES
{
    ULONGLONG CurrentCharges;                                               //0x0
    ULONGLONG ChargeFailures;                                               //0x8
    ULONGLONG ChargePeak;                                                   //0x10
    ULONGLONG ChargeMinimum;                                                //0x18
    ULONGLONG ChargeMaximum;                                                //0x20
};
/* Used in */
// _MI_SECTION_STATE

