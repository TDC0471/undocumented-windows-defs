#pragma once
/* ------------------ */

#include <_MMVAD.h>
#include <_MMVAD_FLAGS.h>
#include <_CONTROL_AREA.h>
#include <_MMPTE.h>
#include <_MMVAD_FLAGS2.h>
#include <_LIST_ENTRY.h>
#include <_MMADDRESS_LIST.h>
#include <_MMBANKED_SECTION.h>
#include <_MMEXTEND_INFO.h>

//0x34 bytes (sizeof)
struct _MMVAD_LONG
{
    union
    {
        LONG Balance:2;                                                     //0x0
        struct _MMVAD* Parent;                                              //0x0
    } u1;                                                                   //0x0
    struct _MMVAD* LeftChild;                                               //0x4
    struct _MMVAD* RightChild;                                              //0x8
    ULONG StartingVpn;                                                      //0xc
    ULONG EndingVpn;                                                        //0x10
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
    union
    {
        struct _LIST_ENTRY List;                                            //0x28
        struct _MMADDRESS_LIST Secured;                                     //0x28
    } u3;                                                                   //0x28
    union
    {
        struct _MMBANKED_SECTION* Banked;                                   //0x30
        struct _MMEXTEND_INFO* ExtendedInfo;                                //0x30
    } u4;                                                                   //0x30
};
