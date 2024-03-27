#pragma once
/* ------------------ */


//0xc bytes (sizeof)
struct _KHETERO_PROCESSOR_SET
{
    ULONG IdealMask;                                                        //0x0
    ULONG PreferredMask;                                                    //0x4
    ULONG AvailableMask;                                                    //0x8
};
/* Used in */
// _KNODE

