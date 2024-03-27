#pragma once
/* ------------------ */


//0x8 bytes (sizeof)
struct _MMPTE_SUBSECTION
{
    ULONGLONG Valid:1;                                                      //0x0
    ULONGLONG Unused0:4;                                                    //0x0
    ULONGLONG Protection:5;                                                 //0x0
    ULONGLONG Prototype:1;                                                  //0x0
    ULONGLONG Unused1:21;                                                   //0x0
    ULONGLONG SubsectionAddress:32;                                         //0x0
};
/* Used in */
// _MMPTE

