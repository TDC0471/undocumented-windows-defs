#pragma once
/* ------------------ */


//0x8 bytes (sizeof)
struct _MMPTE_TIMESTAMP
{
    ULONGLONG MustBeZero:1;                                                 //0x0
    ULONGLONG PageFileLow:4;                                                //0x0
    ULONGLONG Protection:5;                                                 //0x0
    ULONGLONG Prototype:1;                                                  //0x0
    ULONGLONG Transition:1;                                                 //0x0
    ULONGLONG Reserved:20;                                                  //0x0
    ULONGLONG GlobalTimeStamp:32;                                           //0x0
};
/* Used in */
// _MMPTE

