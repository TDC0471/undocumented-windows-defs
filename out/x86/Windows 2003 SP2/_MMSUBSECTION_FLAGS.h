#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
struct _MMSUBSECTION_FLAGS
{
    ULONG ReadOnly:1;                                                       //0x0
    ULONG ReadWrite:1;                                                      //0x0
    ULONG SubsectionStatic:1;                                               //0x0
    ULONG GlobalMemory:1;                                                   //0x0
    ULONG Protection:5;                                                     //0x0
    ULONG Spare:1;                                                          //0x0
    ULONG StartingSector4132:10;                                            //0x0
    ULONG SectorEndOffset:12;                                               //0x0
};
/* Used in */
// _SEGMENT_OBJECT
// _SUBSECTION

