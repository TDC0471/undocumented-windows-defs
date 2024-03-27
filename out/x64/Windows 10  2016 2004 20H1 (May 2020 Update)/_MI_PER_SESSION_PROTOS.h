#pragma once
/* ------------------ */

#include <_RTL_BALANCED_NODE.h>
#include <_SINGLE_LIST_ENTRY.h>
#include <_MI_PROTOTYPE_PTES_NODE.h>
#include <_SUBSECTION.h>
#include <_MMPTE.h>

//0x58 bytes (sizeof)
struct _MI_PER_SESSION_PROTOS
{
    union
    {
        struct _RTL_BALANCED_NODE SessionProtoNode;                         //0x0
        struct _SINGLE_LIST_ENTRY FreeList;                                 //0x0
        VOID* DriverAddress;                                                //0x0
    };
    struct _MI_PROTOTYPE_PTES_NODE ProtosNode;                              //0x18
    ULONGLONG NumberOfPtes;                                                 //0x38
    union
    {
        ULONG SessionId;                                                    //0x40
        struct _SUBSECTION* Subsection;                                     //0x40
    };
    struct _MMPTE* SubsectionBase;                                          //0x48
    union
    {
        ULONG ReferenceCount;                                               //0x50
        ULONG NumberOfPtesToFree;                                           //0x50
    } u2;                                                                   //0x50
};
/* Used in */
// _SUBSECTION

