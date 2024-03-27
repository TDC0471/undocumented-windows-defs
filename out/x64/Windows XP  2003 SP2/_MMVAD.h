#pragma once
/* ------------------ */

#include <_MMVAD.h>
#include <_MMVAD_FLAGS.h>
#include <_CONTROL_AREA.h>
#include <_MMPTE.h>
#include <_MMVAD_FLAGS2.h>

//0x50 bytes (sizeof)
struct _MMVAD
{
    union
    {
        LONGLONG Balance:2;                                                 //0x0
        struct _MMVAD* Parent;                                              //0x0
    } u1;                                                                   //0x0
    struct _MMVAD* LeftChild;                                               //0x8
    struct _MMVAD* RightChild;                                              //0x10
    ULONGLONG StartingVpn;                                                  //0x18
    ULONGLONG EndingVpn;                                                    //0x20
    union
    {
        ULONGLONG LongFlags;                                                //0x28
        struct _MMVAD_FLAGS VadFlags;                                       //0x28
    } u;                                                                    //0x28
    struct _CONTROL_AREA* ControlArea;                                      //0x30
    struct _MMPTE* FirstPrototypePte;                                       //0x38
    struct _MMPTE* LastContiguousPte;                                       //0x40
    union
    {
        ULONG LongFlags2;                                                   //0x48
        struct _MMVAD_FLAGS2 VadFlags2;                                     //0x48
    } u2;                                                                   //0x48
};
/* Used in */
// _MMVAD
// _MMVAD_LONG
// _MMVAD_SHORT

