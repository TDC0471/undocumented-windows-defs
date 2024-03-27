#pragma once
/* ------------------ */

#include <_RTL_BALANCED_NODE.h>
#include <_MMVAD_SHORT.h>
#include <_AWEINFO.h>
#include <_CONTROL_AREA.h>

//0x18 bytes (sizeof)
struct _MI_PHYSICAL_VIEW
{
    struct _RTL_BALANCED_NODE PhysicalNode;                                 //0x0
    struct _MMVAD_SHORT* Vad;                                               //0xc
    struct _AWEINFO* AweInfo;                                               //0x10
    union
    {
        ULONG ViewPageSize:2;                                               //0x14
        struct _CONTROL_AREA* ControlArea;                                  //0x14
    } u1;                                                                   //0x14
};
/* Used in */
// _MI_VAD_EVENT_BLOCK

