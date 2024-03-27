#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
struct _MMSUBSECTION_FLAGS
{
    USHORT SubsectionAccessed:1;                                            //0x0
    USHORT Protection:5;                                                    //0x0
    USHORT StartingSector4132:10;                                           //0x0
    USHORT SubsectionStatic:1;                                              //0x2
    USHORT GlobalMemory:1;                                                  //0x2
    USHORT DirtyPages:1;                                                    //0x2
    USHORT OnDereferenceList:1;                                             //0x2
    USHORT SectorEndOffset:12;                                              //0x2
};
/* Used in */
// _SEGMENT_OBJECT
// _SUBSECTION

