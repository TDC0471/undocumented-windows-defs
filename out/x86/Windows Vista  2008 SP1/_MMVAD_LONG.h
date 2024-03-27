#pragma once
/* ------------------ */

#include <_MMVAD.h>
#include <_MMVAD_FLAGS.h>
#include <_EX_PUSH_LOCK.h>
#include <_MMVAD_FLAGS3.h>
#include <_MMVAD_FLAGS2.h>
#include <_SUBSECTION.h>
#include <_MMPTE.h>
#include <_LIST_ENTRY.h>
#include <_MMADDRESS_LIST.h>
#include <_MMBANKED_SECTION.h>
#include <_MMEXTEND_INFO.h>

//0x3c bytes (sizeof)
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
    struct _EX_PUSH_LOCK PushLock;                                          //0x18
    union
    {
        ULONG LongFlags3;                                                   //0x1c
        struct _MMVAD_FLAGS3 VadFlags3;                                     //0x1c
    } u5;                                                                   //0x1c
    union
    {
        ULONG LongFlags2;                                                   //0x20
        struct _MMVAD_FLAGS2 VadFlags2;                                     //0x20
    } u2;                                                                   //0x20
    struct _SUBSECTION* Subsection;                                         //0x24
    struct _MMPTE* FirstPrototypePte;                                       //0x28
    struct _MMPTE* LastContiguousPte;                                       //0x2c
    union
    {
        struct _LIST_ENTRY List;                                            //0x30
        struct _MMADDRESS_LIST Secured;                                     //0x30
    } u3;                                                                   //0x30
    union
    {
        struct _MMBANKED_SECTION* Banked;                                   //0x38
        struct _MMEXTEND_INFO* ExtendedInfo;                                //0x38
    } u4;                                                                   //0x38
};
