#pragma once
/* ------------------ */

#include <_RTL_BALANCED_NODE.h>
#include <_SINGLE_LIST_ENTRY.h>
#include <_SUBSECTION.h>
#include <_MMPTE.h>

//0x18 bytes (sizeof)
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
        ULONG SessionId;                                                    //0xc
        struct _SUBSECTION* Subsection;                                     //0xc
    };
    struct _MMPTE* SubsectionBase;                                          //0x10
    union
    {
        ULONG ReferenceCount;                                               //0x14
        ULONG NumberOfPtesToFree;                                           //0x14
    } u2;                                                                   //0x14
};
/* Used in */
// _SUBSECTION

