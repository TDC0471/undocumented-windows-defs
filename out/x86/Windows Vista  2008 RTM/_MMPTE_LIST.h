#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
struct _MMPTE_LIST
{
    ULONG Valid:1;                                                          //0x0
    ULONG OneEntry:1;                                                       //0x0
    ULONG filler0:8;                                                        //0x0
    ULONG Prototype:1;                                                      //0x0
    ULONG filler1:1;                                                        //0x0
    ULONG NextEntry:20;                                                     //0x0
};
/* Used in */
// _MMPTE

