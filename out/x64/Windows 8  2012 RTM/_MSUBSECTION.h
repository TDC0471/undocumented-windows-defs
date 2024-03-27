#pragma once
/* ------------------ */

#include <_CONTROL_AREA.h>
#include <_MMPTE.h>
#include <_SUBSECTION.h>
#include <_MSUBSECTION.h>
#include <_MM_AVL_TABLE.h>
#include <_MMSUBSECTION_FLAGS.h>
#include <_MM_AVL_NODE.h>
#include <_LIST_ENTRY.h>

//0x70 bytes (sizeof)
struct _MSUBSECTION
{
    struct _CONTROL_AREA* ControlArea;                                      //0x0
    struct _MMPTE* SubsectionBase;                                          //0x8
    union
    {
        struct _SUBSECTION* NextSubsection;                                 //0x10
        struct _MSUBSECTION* NextMappedSubsection;                          //0x10
    };
    ULONG PtesInSubsection;                                                 //0x18
    union
    {
        ULONG UnusedPtes;                                                   //0x20
        struct _MM_AVL_TABLE* GlobalPerSessionHead;                         //0x20
    };
    union
    {
        ULONG LongFlags;                                                    //0x28
        struct _MMSUBSECTION_FLAGS SubsectionFlags;                         //0x28
    } u;                                                                    //0x28
    ULONG StartingSector;                                                   //0x2c
    ULONG NumberOfFullSectors;                                              //0x30
    struct _MM_AVL_NODE SubsectionNode;                                     //0x38
    struct _LIST_ENTRY DereferenceList;                                     //0x50
    ULONGLONG NumberOfMappedViews;                                          //0x60
    ULONGLONG NumberOfPfnReferences;                                        //0x68
};
/* Used in */
// _MMVAD
// _MSUBSECTION

