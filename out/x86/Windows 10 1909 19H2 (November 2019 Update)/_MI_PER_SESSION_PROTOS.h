#pragma once
/* ------------------ */

#include <_RTL_BALANCED_NODE.h>
#include <_SINGLE_LIST_ENTRY.h>
#include <_MI_PROTOTYPE_PTES_NODE.h>
#include <_SUBSECTION.h>
#include <_MMPTE.h>

//0x2c bytes (sizeof)
struct _MI_PER_SESSION_PROTOS
{
    union
    {
        struct _RTL_BALANCED_NODE SessionProtoNode;                         //0x0
        struct _SINGLE_LIST_ENTRY FreeList;                                 //0x0
        VOID* DriverAddress;                                                //0x0
    };
    struct _MI_PROTOTYPE_PTES_NODE ProtosNode;                              //0xc
    ULONG NumberOfPtes;                                                     //0x1c
    union
    {
        ULONG SessionId;                                                    //0x20
        struct _SUBSECTION* Subsection;                                     //0x20
    };
    struct _MMPTE* SubsectionBase;                                          //0x24
    union
    {
        ULONG ReferenceCount;                                               //0x28
        ULONG NumberOfPtesToFree;                                           //0x28
    } u2;                                                                   //0x28
};
/* Used in */
// _SUBSECTION

