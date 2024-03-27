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

//0x68 bytes (sizeof)
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
    union
    {
        LONGLONG Balance:2;                                                 //0x38
        struct _MMSUBSECTION_NODE* Parent;                                  //0x38
    } u1;                                                                   //0x38
    struct _MMSUBSECTION_NODE* LeftChild;                                   //0x40
    struct _MMSUBSECTION_NODE* RightChild;                                  //0x48
    struct _LIST_ENTRY DereferenceList;                                     //0x50
    ULONGLONG NumberOfMappedViews;                                          //0x60
};
/* Used in */
// _MAPPED_FILE_SEGMENT
// _MMVAD
// _MSUBSECTION

