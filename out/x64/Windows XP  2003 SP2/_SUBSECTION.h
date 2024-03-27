#pragma once
/* ------------------ */

#include <_CONTROL_AREA.h>
#include <_MMSUBSECTION_FLAGS.h>
#include <_MMPTE.h>
#include <_SUBSECTION.h>

//0x30 bytes (sizeof)
struct _SUBSECTION
{
    struct _CONTROL_AREA* ControlArea;                                      //0x0
    union
    {
        ULONG LongFlags;                                                    //0x8
        struct _MMSUBSECTION_FLAGS SubsectionFlags;                         //0x8
    } u;                                                                    //0x8
    ULONG StartingSector;                                                   //0xc
    ULONG NumberOfFullSectors;                                              //0x10
    struct _MMPTE* SubsectionBase;                                          //0x18
    ULONG UnusedPtes;                                                       //0x20
    ULONG PtesInSubsection;                                                 //0x24
    struct _SUBSECTION* NextSubsection;                                     //0x28
};
/* Used in */
// _SEGMENT_OBJECT
// _SUBSECTION

