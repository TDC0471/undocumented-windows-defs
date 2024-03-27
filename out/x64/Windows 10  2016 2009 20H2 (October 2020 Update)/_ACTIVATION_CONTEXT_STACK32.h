#pragma once
/* ------------------ */

#include <LIST_ENTRY32.h>

//0x18 bytes (sizeof)
struct _ACTIVATION_CONTEXT_STACK32
{
    ULONG ActiveFrame;                                                      //0x0
    struct LIST_ENTRY32 FrameListCache;                                     //0x4
    ULONG Flags;                                                            //0xc
    ULONG NextCookieSequenceNumber;                                         //0x10
    ULONG StackId;                                                          //0x14
};
/* Used in */
// _TEB32

