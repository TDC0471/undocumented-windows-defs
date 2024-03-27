#pragma once
/* ------------------ */

#include <_CONTROL_AREA.h>
#include <_MMPTE.h>
#include <_SUBSECTION.h>
#include <_RTL_AVL_TREE.h>
#include <_MI_SUBSECTION_WAIT_BLOCK.h>
#include <_MI_PER_SESSION_PROTOS.h>
#include <_MMSUBSECTION_FLAGS.h>

//0x28 bytes (sizeof)
struct _SUBSECTION
{
    struct _CONTROL_AREA* ControlArea;                                      //0x0
    struct _MMPTE* SubsectionBase;                                          //0x4
    struct _SUBSECTION* NextSubsection;                                     //0x8
    union
    {
        struct _RTL_AVL_TREE GlobalPerSessionHead;                          //0xc
        struct _MI_SUBSECTION_WAIT_BLOCK* CreationWaitList;                 //0xc
        struct _MI_PER_SESSION_PROTOS* SessionDriverProtos;                 //0xc
    };
    union
    {
        ULONG LongFlags;                                                    //0x10
        struct _MMSUBSECTION_FLAGS SubsectionFlags;                         //0x10
    } u;                                                                    //0x10
    ULONG StartingSector;                                                   //0x14
    ULONG NumberOfFullSectors;                                              //0x18
    ULONG PtesInSubsection;                                                 //0x1c
    union
    {
        ULONG NumberOfChildViews;                                           //0x20
    } u1;                                                                   //0x20
    union
    {
        struct
        {
            ULONG UnusedPtes:31;                                            //0x24
            ULONG DirtyPages:1;                                             //0x24
        };
        struct
        {
            ULONG AlignmentNoAccessPtes:31;                                 //0x24
            ULONG DirtyPages:1;                                             //0x24
        } u2;                                                               //0x24
    };
};
/* Used in */
// _MI_PER_SESSION_PROTOS
// _MI_REVERSE_VIEW_MAP
// _MMINPAGE_SUPPORT
// _MMVAD
// _MSUBSECTION
// _SUBSECTION

