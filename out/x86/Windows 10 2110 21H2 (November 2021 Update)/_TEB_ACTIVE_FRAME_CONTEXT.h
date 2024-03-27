#pragma once
/* ------------------ */


//0x8 bytes (sizeof)
struct _TEB_ACTIVE_FRAME_CONTEXT
{
    ULONG Flags;                                                            //0x0
    CHAR* FrameName;                                                        //0x4
};
/* Used in */
// _TEB_ACTIVE_FRAME

