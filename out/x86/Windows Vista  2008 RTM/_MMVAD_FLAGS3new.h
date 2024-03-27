#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
struct _MMVAD_FLAGS3
{
    ULONG PreferredNode:6;                                                  //0x0
    ULONG Spare:2;                                                          //0x0
    ULONG SequentialAccess:1;                                               //0x0
    ULONG LastSequentialTrim:15;                                            //0x0
    ULONG Spare2:8;                                                         //0x0
};
/* Used in */
// _MMVAD
// _MMVAD_LONG
// _MMVAD_SHORT

