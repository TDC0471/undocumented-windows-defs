#pragma once
/* ------------------ */


//0x8 bytes (sizeof)
struct _MMPTE_SOFTWARE
{
    ULONGLONG Valid:1;                                                      //0x0
    ULONGLONG PageFileReserved:1;                                           //0x0
    ULONGLONG PageFileAllocated:1;                                          //0x0
    ULONGLONG ColdPage:1;                                                   //0x0
    ULONGLONG SwizzleBit:1;                                                 //0x0
    ULONGLONG Protection:5;                                                 //0x0
    ULONGLONG Prototype:1;                                                  //0x0
    ULONGLONG Transition:1;                                                 //0x0
    ULONGLONG PageFileLow:4;                                                //0x0
    ULONGLONG UsedPageTableEntries:10;                                      //0x0
    ULONGLONG ShadowStack:1;                                                //0x0
    ULONGLONG Unused:5;                                                     //0x0
    ULONGLONG PageFileHigh:32;                                              //0x0
};
/* Used in */
// _MMPTE

