#pragma once
/* ------------------ */

#include <LIST_ENTRY64.h>

//0x28 bytes (sizeof)
struct _ACTIVATION_CONTEXT_STACK64
{
    ULONGLONG ActiveFrame;                                                  //0x0
    struct LIST_ENTRY64 FrameListCache;                                     //0x8
    ULONG Flags;                                                            //0x18
    ULONG NextCookieSequenceNumber;                                         //0x1c
    ULONG StackId;                                                          //0x20
};
/* Used in */
// _TEB64

