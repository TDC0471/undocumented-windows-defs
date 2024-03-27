#pragma once
/* ------------------ */

#include <_MMADDRESS_NODE.h>
#include <_MI_PER_SESSION_PROTOS.h>
#include <_SUBSECTION.h>
#include <_MMPTE.h>

//0x1c bytes (sizeof)
struct _MI_PER_SESSION_PROTOS
{
    union
    {
        LONG Balance:2;                                                     //0x0
        struct _MMADDRESS_NODE* Parent;                                     //0x0
        struct _MI_PER_SESSION_PROTOS* NextToFree;                          //0x0
    } u1;                                                                   //0x0
    struct _MMADDRESS_NODE* LeftChild;                                      //0x4
    struct _MMADDRESS_NODE* RightChild;                                     //0x8
    union
    {
        ULONG SessionId;                                                    //0xc
        ULONG StartingVpn;                                                  //0xc
        struct _SUBSECTION* Subsection;                                     //0xc
    };
    ULONG EndingVpn;                                                        //0x10
    struct _MMPTE* SubsectionBase;                                          //0x14
    union
    {
        ULONG ReferenceCount;                                               //0x18
        ULONG NumberOfPtesToFree;                                           //0x18
    } u2;                                                                   //0x18
};
/* Used in */
// _MI_PER_SESSION_PROTOS

