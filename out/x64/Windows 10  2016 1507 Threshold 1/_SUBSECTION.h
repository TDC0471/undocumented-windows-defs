#pragma once
/* ------------------ */

#include <_CONTROL_AREA.h>
#include <_MMPTE.h>
#include <_SUBSECTION.h>
#include <_MI_FILE_EXTENTS.h>
#include <_RTL_AVL_TREE.h>
#include <_MI_PER_SESSION_PROTOS.h>
#include <_MMSUBSECTION_FLAGS.h>

//0x38 bytes (sizeof)
struct _SUBSECTION
{
    struct _CONTROL_AREA* ControlArea;                                      //0x0
    struct _MMPTE* SubsectionBase;                                          //0x8
    struct _SUBSECTION* NextSubsection;                                     //0x10
    union
    {
        struct _MI_FILE_EXTENTS* FileExtents;                               //0x18
        struct _RTL_AVL_TREE GlobalPerSessionHead;                          //0x18
        struct _MI_PER_SESSION_PROTOS* SessionDriverProtos;                 //0x18
    };
    union
    {
        ULONG LongFlags;                                                    //0x20
        struct _MMSUBSECTION_FLAGS SubsectionFlags;                         //0x20
    } u;                                                                    //0x20
    ULONG StartingSector;                                                   //0x24
    ULONG NumberOfFullSectors;                                              //0x28
    ULONG PtesInSubsection;                                                 //0x2c
    union
    {
        ULONG NumberOfChildViews;                                           //0x30
    } u1;                                                                   //0x30
    union
    {
        ULONG UnusedPtes;                                                   //0x34
        ULONG AlignmentNoAccessPtes;                                        //0x34
    };
};
/* Used in */
// _MI_PER_SESSION_PROTOS
// _MI_REVERSE_VIEW_MAP
// _MMINPAGE_SUPPORT
// _MMVAD
// _MSUBSECTION
// _SEGMENT_OBJECT
// _SUBSECTION

