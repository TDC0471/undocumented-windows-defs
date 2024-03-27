#pragma once
/* ------------------ */

#include <_CONTROL_AREA.h>
#include <_MMSUBSECTION_FLAGS.h>
#include <_MMPTE.h>
#include <_SUBSECTION.h>

//0x20 bytes (sizeof)
struct _SUBSECTION
{
    struct _CONTROL_AREA* ControlArea;                                      //0x0
    union
    {
        ULONG LongFlags;                                                    //0x4
        struct _MMSUBSECTION_FLAGS SubsectionFlags;                         //0x4
    } u;                                                                    //0x4
    ULONG StartingSector;                                                   //0x8
    ULONG NumberOfFullSectors;                                              //0xc
    struct _MMPTE* SubsectionBase;                                          //0x10
    ULONG UnusedPtes;                                                       //0x14
    ULONG PtesInSubsection;                                                 //0x18
    struct _SUBSECTION* NextSubsection;                                     //0x1c
};
/* Used in */
// _SEGMENT_OBJECT
// _SUBSECTION

