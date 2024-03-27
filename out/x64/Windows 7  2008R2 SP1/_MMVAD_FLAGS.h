#pragma once
/* ------------------ */


//0x8 bytes (sizeof)
struct _MMVAD_FLAGS
{
    ULONGLONG CommitCharge:51;                                              //0x0
    ULONGLONG NoChange:1;                                                   //0x0
    ULONGLONG VadType:3;                                                    //0x0
    ULONGLONG MemCommit:1;                                                  //0x0
    ULONGLONG Protection:5;                                                 //0x0
    ULONGLONG Spare:2;                                                      //0x0
    ULONGLONG PrivateMemory:1;                                              //0x0
};
/* Used in */
// _MMVAD
// _MMVAD_LONG
// _MMVAD_SHORT

