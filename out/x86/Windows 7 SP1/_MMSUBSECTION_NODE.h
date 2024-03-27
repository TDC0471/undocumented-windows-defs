#pragma once
/* ------------------ */

#include <_MMSUBSECTION_FLAGS.h>
#include <_MMSUBSECTION_NODE.h>

//0x18 bytes (sizeof)
struct _MMSUBSECTION_NODE
{
    union
    {
        ULONG LongFlags;                                                    //0x0
        struct _MMSUBSECTION_FLAGS SubsectionFlags;                         //0x0
    } u;                                                                    //0x0
    ULONG StartingSector;                                                   //0x4
    ULONG NumberOfFullSectors;                                              //0x8
    union
    {
        LONG Balance:2;                                                     //0xc
        struct _MMSUBSECTION_NODE* Parent;                                  //0xc
    } u1;                                                                   //0xc
    struct _MMSUBSECTION_NODE* LeftChild;                                   //0x10
    struct _MMSUBSECTION_NODE* RightChild;                                  //0x14
};
/* Used in */
// _MMSUBSECTION_NODE
// _MM_SUBSECTION_AVL_TABLE
// _MSUBSECTION

