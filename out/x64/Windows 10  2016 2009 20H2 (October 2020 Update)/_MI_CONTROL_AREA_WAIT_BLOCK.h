#pragma once
/* ------------------ */

#include <_MI_CONTROL_AREA_WAIT_BLOCK.h>
#include <_KGATE.h>

//0x28 bytes (sizeof)
struct _MI_CONTROL_AREA_WAIT_BLOCK
{
    struct _MI_CONTROL_AREA_WAIT_BLOCK* Next;                               //0x0
    ULONG WaitReason;                                                       //0x8
    ULONG WaitResponse;                                                     //0xc
    struct _KGATE Gate;                                                     //0x10
};
/* Used in */
// _CONTROL_AREA
// _MI_CONTROL_AREA_WAIT_BLOCK
// _SUBSECTION

