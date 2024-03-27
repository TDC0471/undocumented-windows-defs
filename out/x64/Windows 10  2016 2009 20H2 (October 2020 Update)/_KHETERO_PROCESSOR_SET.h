#pragma once
/* ------------------ */


//0x18 bytes (sizeof)
struct _KHETERO_PROCESSOR_SET
{
    ULONGLONG IdealMask;                                                    //0x0
    ULONGLONG PreferredMask;                                                //0x8
    ULONGLONG AvailableMask;                                                //0x10
};
/* Used in */
// _KNODE

