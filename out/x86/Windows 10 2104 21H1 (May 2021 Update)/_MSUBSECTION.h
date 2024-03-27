#pragma once
/* ------------------ */

#include <_SUBSECTION.h>
#include <_RTL_BALANCED_NODE.h>
#include <_LIST_ENTRY.h>
#include <_MI_PROTOTYPE_PTES_NODE.h>

//0x54 bytes (sizeof)
struct _MSUBSECTION
{
    struct _SUBSECTION Core;                                                //0x0
    struct _RTL_BALANCED_NODE SubsectionNode;                               //0x28
    struct _LIST_ENTRY DereferenceList;                                     //0x34
    ULONG NumberOfMappedViews;                                              //0x3c
    ULONG NumberOfPfnReferences;                                            //0x40
    struct _MI_PROTOTYPE_PTES_NODE ProtosNode;                              //0x44
};
/* Used in */
// _MI_SECTION_STATE

