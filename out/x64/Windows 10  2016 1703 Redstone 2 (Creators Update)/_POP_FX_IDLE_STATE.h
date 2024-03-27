#pragma once
/* ------------------ */


//0x18 bytes (sizeof)
struct _POP_FX_IDLE_STATE
{
    ULONGLONG TransitionLatency;                                            //0x0
    ULONGLONG ResidencyRequirement;                                         //0x8
    ULONG NominalPower;                                                     //0x10
};
/* Used in */
// _POP_FX_COMPONENT

