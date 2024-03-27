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
#include <_EPROCESS.h>
#include <_MMADDRESS_LIST.h>
#include <_MMBANKED_SECTION.h>
#include <_MMEXTEND_INFO.h>

//0x90 bytes (sizeof)
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
    struct _EX_PUSH_LOCK PushLock;                                          //0x30
    union
    {
        ULONGLONG LongFlags3;                                               //0x38
        struct _MMVAD_FLAGS3 VadFlags3;                                     //0x38
    } u5;                                                                   //0x38
    union
    {
        ULONG LongFlags2;                                                   //0x40
        struct _MMVAD_FLAGS2 VadFlags2;                                     //0x40
    } u2;                                                                   //0x40
    struct _SUBSECTION* Subsection;                                         //0x48
    struct _MMPTE* FirstPrototypePte;                                       //0x50
    struct _MMPTE* LastContiguousPte;                                       //0x58
    struct _LIST_ENTRY ViewLinks;                                           //0x60
    struct _EPROCESS* VadsProcess;                                          //0x70
    union
    {
        struct _LIST_ENTRY List;                                            //0x78
        struct _MMADDRESS_LIST Secured;                                     //0x78
    } u3;                                                                   //0x78
    union
    {
        struct _MMBANKED_SECTION* Banked;                                   //0x88
        struct _MMEXTEND_INFO* ExtendedInfo;                                //0x88
    } u4;                                                                   //0x88
};
