#pragma once
/* ------------------ */


//0x8 bytes (sizeof)
struct _MMPTE_LIST
{
    ULONGLONG Valid:1;                                                      //0x0
    ULONGLONG OneEntry:1;                                                   //0x0
    ULONGLONG filler0:2;                                                    //0x0
    ULONGLONG SwizzleBit:1;                                                 //0x0
    ULONGLONG Protection:5;                                                 //0x0
    ULONGLONG Prototype:1;                                                  //0x0
    ULONGLONG Transition:1;                                                 //0x0
    ULONGLONG filler1:16;                                                   //0x0
    ULONGLONG NextEntry:36;                                                 //0x0
};
/* Used in */
// _MMPTE

