#pragma once
/* ------------------ */

#include <_MMVAD_SHORT.h>
#include <_MMVAD_FLAGS2.h>
#include <_SUBSECTION.h>
#include <_MMPTE.h>
#include <_LIST_ENTRY.h>
#include <_EPROCESS.h>
#include <_MI_VAD_SEQUENTIAL_INFO.h>
#include <_MMEXTEND_INFO.h>

//0x80 bytes (sizeof)
struct _MMVAD
{
    struct _MMVAD_SHORT Core;                                               //0x0
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
        struct _MI_VAD_SEQUENTIAL_INFO SequentialVa;                        //0x78
        struct _MMEXTEND_INFO* ExtendedInfo;                                //0x78
    } u4;                                                                   //0x78
};
/* Used in */
// _MI_CFG_BITMAP_INFO

