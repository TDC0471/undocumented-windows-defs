#pragma once
/* ------------------ */

#include <_MMVAD_SHORT.h>
#include <_MMVAD_FLAGS2.h>
#include <_SUBSECTION.h>
#include <_MSUBSECTION.h>
#include <_MMPTE.h>
#include <_LIST_ENTRY.h>
#include <_EPROCESS.h>
#include <_MI_VAD_SEQUENTIAL_INFO.h>
#include <_MMEXTEND_INFO.h>

//0x48 bytes (sizeof)
struct _MMVAD
{
    struct _MMVAD_SHORT Core;                                               //0x0
    union
    {
        ULONG LongFlags2;                                                   //0x28
        struct _MMVAD_FLAGS2 VadFlags2;                                     //0x28
    } u2;                                                                   //0x28
    union
    {
        struct _SUBSECTION* Subsection;                                     //0x2c
        struct _MSUBSECTION* MappedSubsection;                              //0x2c
    };
    struct _MMPTE* FirstPrototypePte;                                       //0x30
    struct _MMPTE* LastContiguousPte;                                       //0x34
    struct _LIST_ENTRY ViewLinks;                                           //0x38
    struct _EPROCESS* VadsProcess;                                          //0x40
    union
    {
        struct _MI_VAD_SEQUENTIAL_INFO SequentialVa;                        //0x44
        struct _MMEXTEND_INFO* ExtendedInfo;                                //0x44
    } u4;                                                                   //0x44
};
