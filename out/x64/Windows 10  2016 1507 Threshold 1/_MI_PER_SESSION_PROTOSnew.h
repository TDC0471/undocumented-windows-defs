#pragma once
/* ------------------ */

#include <_RTL_BALANCED_NODE.h>
#include <_SINGLE_LIST_ENTRY.h>
#include <_SUBSECTION.h>
#include <_MMPTE.h>

//0x30 bytes (sizeof)
struct _MI_PER_SESSION_PROTOS
{
    union
    {
        struct _RTL_BALANCED_NODE SessionProtoNode;                         //0x0
        struct _SINGLE_LIST_ENTRY FreeList;                                 //0x0
        VOID* DriverAddress;                                                //0x0
    };
    union
    {
        ULONG SessionId;                                                    //0x18
        struct _SUBSECTION* Subsection;                                     //0x18
    };
    struct _MMPTE* SubsectionBase;                                          //0x20
    union
    {
        ULONG ReferenceCount;                                               //0x28
        ULONG NumberOfPtesToFree;                                           //0x28
    } u2;                                                                   //0x28
};
/* Used in */
// _SUBSECTION

