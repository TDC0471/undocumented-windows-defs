#pragma once
/* ------------------ */


//0xc bytes (sizeof)
struct _PERFINFO_PPM_STATE_SELECTION
{
    ULONG SelectedState;                                                    //0x0
    ULONG VetoedStates;                                                     //0x4
    ULONG VetoReason[1];                                                    //0x8
};
/* Used in */
// _PPM_IDLE_STATES

