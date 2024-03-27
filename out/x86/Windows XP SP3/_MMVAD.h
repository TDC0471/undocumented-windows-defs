#pragma once
/* ------------------ */

#include <_MMVAD.h>
#include <_MMVAD_FLAGS.h>
#include <_CONTROL_AREA.h>
#include <_MMPTE.h>
#include <_MMVAD_FLAGS2.h>

//0x28 bytes (sizeof)
struct _MMVAD
{
    ULONG StartingVpn;                                                      //0x0
    ULONG EndingVpn;                                                        //0x4
    struct _MMVAD* Parent;                                                  //0x8
    struct _MMVAD* LeftChild;                                               //0xc
    struct _MMVAD* RightChild;                                              //0x10
    union
    {
        ULONG LongFlags;                                                    //0x14
        struct _MMVAD_FLAGS VadFlags;                                       //0x14
    } u;                                                                    //0x14
    struct _CONTROL_AREA* ControlArea;                                      //0x18
    struct _MMPTE* FirstPrototypePte;                                       //0x1c
    struct _MMPTE* LastContiguousPte;                                       //0x20
    union
    {
        ULONG LongFlags2;                                                   //0x24
        struct _MMVAD_FLAGS2 VadFlags2;                                     //0x24
    } u2;                                                                   //0x24
};
/* Used in */
// _MMVAD
// _MMVAD_LONG
// _MMVAD_SHORT

