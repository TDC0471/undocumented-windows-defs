#pragma once
/* ------------------ */

#include <_TEB_ACTIVE_FRAME.h>
#include <_TEB_ACTIVE_FRAME_CONTEXT.h>

//0xc bytes (sizeof)
struct _TEB_ACTIVE_FRAME
{
    ULONG Flags;                                                            //0x0
    struct _TEB_ACTIVE_FRAME* Previous;                                     //0x4
    struct _TEB_ACTIVE_FRAME_CONTEXT* Context;                              //0x8
};
/* Used in */
// _TEB
// _TEB_ACTIVE_FRAME

