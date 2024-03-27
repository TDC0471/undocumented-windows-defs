#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
struct _MMVAD_FLAGS
{
    ULONG VadType:3;                                                        //0x0
    ULONG Protection:5;                                                     //0x0
    ULONG PreferredNode:6;                                                  //0x0
    ULONG NoChange:1;                                                       //0x0
    ULONG PrivateMemory:1;                                                  //0x0
    ULONG Teb:1;                                                            //0x0
    ULONG PrivateFixup:1;                                                   //0x0
    ULONG Spare:13;                                                         //0x0
    ULONG DeleteInProgress:1;                                               //0x0
};
/* Used in */
// _MMVAD_SHORT

