#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
struct _MMPTE_SUBSECTION
{
    ULONG Valid:1;                                                          //0x0
    ULONG SubsectionAddressLow:4;                                           //0x0
    ULONG Protection:5;                                                     //0x0
    ULONG Prototype:1;                                                      //0x0
    ULONG SubsectionAddressHigh:20;                                         //0x0
    ULONG WhichPool:1;                                                      //0x0
};
/* Used in */
// _MMPTE

