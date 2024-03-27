#pragma once
/* ------------------ */


//0x8 bytes (sizeof)
struct _MMPTE_LIST
{
    ULONGLONG Valid:1;                                                      //0x0
    ULONGLONG OneEntry:1;                                                   //0x0
    ULONGLONG filler0:8;                                                    //0x0
    ULONGLONG Prototype:1;                                                  //0x0
    ULONGLONG filler1:21;                                                   //0x0
    ULONGLONG NextEntry:32;                                                 //0x0
};
/* Used in */
// _MMPTE

