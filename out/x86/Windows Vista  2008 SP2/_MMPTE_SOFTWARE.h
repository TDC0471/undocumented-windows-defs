#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
struct _MMPTE_SOFTWARE
{
    ULONG Valid:1;                                                          //0x0
    ULONG PageFileLow:4;                                                    //0x0
    ULONG Protection:5;                                                     //0x0
    ULONG Prototype:1;                                                      //0x0
    ULONG Transition:1;                                                     //0x0
    ULONG PageFileHigh:20;                                                  //0x0
};
/* Used in */
// _MMPTE

