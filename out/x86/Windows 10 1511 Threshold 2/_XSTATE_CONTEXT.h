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
    ULONG Reserved2;                                                        //0x14
    VOID* Buffer;                                                           //0x18
    ULONG Reserved3;                                                        //0x1c
};
/* Used in */
// _XSTATE_SAVE

