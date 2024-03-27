#pragma once
/* ------------------ */

#include <_CONTROL_AREA.h>
#include <_MMPTE.h>
#include <_SUBSECTION.h>
#include <_MSUBSECTION.h>
#include <_MM_AVL_TABLE.h>
#include <_MMSUBSECTION_FLAGS.h>
#include <_MMSUBSECTION_NODE.h>
#include <_LIST_ENTRY.h>

//0x38 bytes (sizeof)
struct _MSUBSECTION
{
    struct _CONTROL_AREA* ControlArea;                                      //0x0
    struct _MMPTE* SubsectionBase;                                          //0x4
    union
    {
        struct _SUBSECTION* NextSubsection;                                 //0x8
        struct _MSUBSECTION* NextMappedSubsection;                          //0x8
    };
    ULONG PtesInSubsection;                                                 //0xc
    union
    {
        ULONG UnusedPtes;                                                   //0x10
        struct _MM_AVL_TABLE* GlobalPerSessionHead;                         //0x10
    };
    union
    {
        ULONG LongFlags;                                                    //0x14
        struct _MMSUBSECTION_FLAGS SubsectionFlags;                         //0x14
    } u;                                                                    //0x14
    ULONG StartingSector;                                                   //0x18
    ULONG NumberOfFullSectors;                                              //0x1c
    union
    {
        LONG Balance:2;                                                     //0x20
        struct _MMSUBSECTION_NODE* Parent;                                  //0x20
    } u1;                                                                   //0x20
    struct _MMSUBSECTION_NODE* LeftChild;                                   //0x24
    struct _MMSUBSECTION_NODE* RightChild;                                  //0x28
    struct _LIST_ENTRY DereferenceList;                                     //0x2c
    ULONG NumberOfMappedViews;                                              //0x34
};
/* Used in */
// _MAPPED_FILE_SEGMENT
// _MMVAD
// _MSUBSECTION

