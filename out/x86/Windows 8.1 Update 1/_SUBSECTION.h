#pragma once
/* ------------------ */

#include <_CONTROL_AREA.h>
#include <_MMPTE.h>
#include <_SUBSECTION.h>
#include <_RTL_AVL_TREE.h>
#include <_MMSUBSECTION_FLAGS.h>

//0x20 bytes (sizeof)
struct _SUBSECTION
{
    struct _CONTROL_AREA* ControlArea;                                      //0x0
    struct _MMPTE* SubsectionBase;                                          //0x4
    struct _SUBSECTION* NextSubsection;                                     //0x8
    ULONG PtesInSubsection;                                                 //0xc
    union
    {
        ULONG UnusedPtes;                                                   //0x10
        struct _RTL_AVL_TREE GlobalPerSessionHead;                          //0x10
    };
    union
    {
        ULONG LongFlags;                                                    //0x14
        struct _MMSUBSECTION_FLAGS SubsectionFlags;                         //0x14
    } u;                                                                    //0x14
    ULONG StartingSector;                                                   //0x18
    ULONG NumberOfFullSectors;                                              //0x1c
};
/* Used in */
// _MI_REVERSE_VIEW_MAP
// _MMVAD
// _SEGMENT_OBJECT
// _SUBSECTION
