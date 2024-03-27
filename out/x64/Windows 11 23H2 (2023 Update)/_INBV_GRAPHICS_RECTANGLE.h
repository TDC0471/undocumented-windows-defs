#pragma once
/* ------------------ */

#include <_INBV_PIXEL_FORMAT.h>

//0x18 bytes (sizeof)
struct _INBV_GRAPHICS_RECTANGLE
{
    ULONG Height;                                                           //0x0
    ULONG Width;                                                            //0x4
    enum _INBV_PIXEL_FORMAT PixelFormat;                                    //0x8
    ULONG Size;                                                             //0xc
    VOID* Data;                                                             //0x10
};
/* Used in */
// _INBV_DISPLAY_CONTEXT

