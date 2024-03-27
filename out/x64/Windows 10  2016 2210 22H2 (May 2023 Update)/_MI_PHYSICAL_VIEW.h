#pragma once
/* ------------------ */

#include <_RTL_BALANCED_NODE.h>
#include <_MMVAD_SHORT.h>
#include <_AWEINFO.h>
#include <_CONTROL_AREA.h>

//0x30 bytes (sizeof)
struct _MI_PHYSICAL_VIEW
{
    struct _RTL_BALANCED_NODE PhysicalNode;                                 //0x0
    struct _MMVAD_SHORT* Vad;                                               //0x18
    struct _AWEINFO* AweInfo;                                               //0x20
    union
    {
        ULONG ViewPageSize:2;                                               //0x28
        struct _CONTROL_AREA* ControlArea;                                  //0x28
    } u1;                                                                   //0x28
};
/* Used in */
// _MI_VAD_EVENT_BLOCK

