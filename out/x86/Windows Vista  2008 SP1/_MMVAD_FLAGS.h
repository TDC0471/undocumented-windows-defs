#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
struct _MMVAD_FLAGS
{
    ULONG CommitCharge:19;                                                  //0x0
    ULONG NoChange:1;                                                       //0x0
    ULONG VadType:3;                                                        //0x0
    ULONG MemCommit:1;                                                      //0x0
    ULONG Protection:5;                                                     //0x0
    ULONG Spare:2;                                                          //0x0
    ULONG PrivateMemory:1;                                                  //0x0
};
/* Used in */
// _MMVAD
// _MMVAD_LONG
// _MMVAD_SHORT

