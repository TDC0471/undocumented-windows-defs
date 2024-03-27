#pragma once
/* ------------------ */


//0x10 bytes (sizeof)
struct _PPM_COORDINATED_SELECTION
{
    ULONG MaximumStates;                                                    //0x0
    ULONG SelectedStates;                                                   //0x4
    ULONG DefaultSelection;                                                 //0x8
    ULONG* Selection;                                                       //0xc
};
/* Used in */
// _PPM_IDLE_STATES

