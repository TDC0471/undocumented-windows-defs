#pragma once
/* ------------------ */

#include <_XSAVE_AREA.h>

//0x20 bytes (sizeof)
struct _XSTATE_CONTEXT
{
    ULONGLONG Mask;                                                         //0x0
    ULONG Length;                                                           //0x8
    ULONG Reserved1;                                                        //0xc
    struct _XSAVE_AREA* Area;                                               //0x10
    VOID* Buffer;                                                           //0x18
};
/* Used in */
// _XSTATE_SAVE

