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

//0x68 bytes (sizeof)
struct _MMVAD_LONG
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
    union
    {
        struct _LIST_ENTRY List;                                            //0x50
        struct _MMADDRESS_LIST Secured;                                     //0x50
    } u3;                                                                   //0x50
    union
    {
        struct _MMBANKED_SECTION* Banked;                                   //0x60
        struct _MMEXTEND_INFO* ExtendedInfo;                                //0x60
    } u4;                                                                   //0x60
};
