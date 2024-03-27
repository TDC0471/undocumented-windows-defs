#pragma once
/* ------------------ */

#include <_MMADDRESS_NODE.h>
#include <_MI_PER_SESSION_PROTOS.h>
#include <_SUBSECTION.h>
#include <_MMPTE.h>

//0x38 bytes (sizeof)
struct _MI_PER_SESSION_PROTOS
{
    union
    {
        LONGLONG Balance:2;                                                 //0x0
        struct _MMADDRESS_NODE* Parent;                                     //0x0
        struct _MI_PER_SESSION_PROTOS* NextToFree;                          //0x0
    } u1;                                                                   //0x0
    struct _MMADDRESS_NODE* LeftChild;                                      //0x8
    struct _MMADDRESS_NODE* RightChild;                                     //0x10
    union
    {
        ULONG SessionId;                                                    //0x18
        ULONGLONG StartingVpn;                                              //0x18
        struct _SUBSECTION* Subsection;                                     //0x18
    };
    ULONGLONG EndingVpn;                                                    //0x20
    struct _MMPTE* SubsectionBase;                                          //0x28
    union
    {
        ULONG ReferenceCount;                                               //0x30
        ULONG NumberOfPtesToFree;                                           //0x30
    } u2;                                                                   //0x30
};
/* Used in */
// _MI_PER_SESSION_PROTOS

