#pragma once
/* ------------------ */

#include <_MI_CONTROL_AREA_WAIT_BLOCK.h>
#include <_KGATE.h>

//0x1c bytes (sizeof)
struct _MI_CONTROL_AREA_WAIT_BLOCK
{
    struct _MI_CONTROL_AREA_WAIT_BLOCK* Next;                               //0x0
    ULONG WaitReason;                                                       //0x4
    ULONG WaitResponse;                                                     //0x8
    struct _KGATE Gate;                                                     //0xc
};
/* Used in */
// _CONTROL_AREA
// _MI_CONTROL_AREA_WAIT_BLOCK
// _SUBSECTION

