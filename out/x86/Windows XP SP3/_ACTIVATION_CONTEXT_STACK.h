#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>

//0x14 bytes (sizeof)
struct _ACTIVATION_CONTEXT_STACK
{
    ULONG Flags;                                                            //0x0
    ULONG NextCookieSequenceNumber;                                         //0x4
    VOID* ActiveFrame;                                                      //0x8
    struct _LIST_ENTRY FrameListCache;                                      //0xc
};
/* Used in */
// _TEB

