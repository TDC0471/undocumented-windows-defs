#pragma once
/* ------------------ */

#include <_RTL_ACTIVATION_CONTEXT_STACK_FRAME.h>
#include <_LIST_ENTRY.h>

//0x18 bytes (sizeof)
struct _ACTIVATION_CONTEXT_STACK
{
    struct _RTL_ACTIVATION_CONTEXT_STACK_FRAME* ActiveFrame;                //0x0
    struct _LIST_ENTRY FrameListCache;                                      //0x4
    ULONG Flags;                                                            //0xc
    ULONG NextCookieSequenceNumber;                                         //0x10
    ULONG StackId;                                                          //0x14
};
/* Used in */
// _TEB

