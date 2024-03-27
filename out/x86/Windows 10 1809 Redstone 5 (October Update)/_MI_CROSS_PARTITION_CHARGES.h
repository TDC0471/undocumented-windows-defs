#pragma once
/* ------------------ */


//0x10 bytes (sizeof)
struct _MI_CROSS_PARTITION_CHARGES
{
    ULONG CurrentCharges;                                                   //0x0
    ULONG ChargeFailures;                                                   //0x4
    ULONG ChargePeak;                                                       //0x8
    ULONG ChargeMinimum;                                                    //0xc
};
/* Used in */
// _MI_PARTITION_SEGMENTS

