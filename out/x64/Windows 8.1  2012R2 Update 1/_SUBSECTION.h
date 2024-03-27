#pragma once
/* ------------------ */

#include <_CONTROL_AREA.h>
#include <_MMPTE.h>
#include <_SUBSECTION.h>
#include <_RTL_AVL_TREE.h>
#include <_MMSUBSECTION_FLAGS.h>

//0x38 bytes (sizeof)
struct _SUBSECTION
{
    struct _CONTROL_AREA* ControlArea;                                      //0x0
    struct _MMPTE* SubsectionBase;                                          //0x8
    struct _SUBSECTION* NextSubsection;                                     //0x10
    ULONG PtesInSubsection;                                                 //0x18
    union
    {
        ULONG UnusedPtes;                                                   //0x20
        struct _RTL_AVL_TREE GlobalPerSessionHead;                          //0x20
    };
    union
    {
        ULONG LongFlags;                                                    //0x28
        struct _MMSUBSECTION_FLAGS SubsectionFlags;                         //0x28
    } u;                                                                    //0x28
    ULONG StartingSector;                                                   //0x2c
    ULONG NumberOfFullSectors;                                              //0x30
};
/* Used in */
// _MI_REVERSE_VIEW_MAP
// _MMVAD
// _SEGMENT_OBJECT
// _SUBSECTION

