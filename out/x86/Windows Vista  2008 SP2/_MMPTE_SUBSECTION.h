#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
struct _MMPTE_SUBSECTION
{
    ULONG Valid:1;                                                          //0x0
    ULONG SubsectionAddressLow:9;                                           //0x0
    ULONG Prototype:1;                                                      //0x0
    ULONG SubsectionAddressHigh:21;                                         //0x0
};
/* Used in */
// _MMPTE

