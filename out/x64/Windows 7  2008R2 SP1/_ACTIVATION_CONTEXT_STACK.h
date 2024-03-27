#pragma once
/* ------------------ */

#include <_RTL_ACTIVATION_CONTEXT_STACK_FRAME.h>
#include <_LIST_ENTRY.h>

//0x28 bytes (sizeof)
struct _ACTIVATION_CONTEXT_STACK
{
    struct _RTL_ACTIVATION_CONTEXT_STACK_FRAME* ActiveFrame;                //0x0
    struct _LIST_ENTRY FrameListCache;                                      //0x8
    ULONG Flags;                                                            //0x18
    ULONG NextCookieSequenceNumber;                                         //0x1c
    ULONG StackId;                                                          //0x20
};
/* Used in */
// _TEB

