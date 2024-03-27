#pragma once
/* ------------------ */

#include <_SUBSECTION.h>
#include <_RTL_BALANCED_NODE.h>
#include <_LIST_ENTRY.h>

//0x70 bytes (sizeof)
struct _MSUBSECTION
{
    struct _SUBSECTION Core;                                                //0x0
    struct _RTL_BALANCED_NODE SubsectionNode;                               //0x38
    struct _LIST_ENTRY DereferenceList;                                     //0x50
    ULONGLONG NumberOfMappedViews;                                          //0x60
    ULONG NumberOfPfnReferences;                                            //0x68
    ULONG LargeViews;                                                       //0x6c
};
/* Used in */
// _MI_SECTION_STATE

