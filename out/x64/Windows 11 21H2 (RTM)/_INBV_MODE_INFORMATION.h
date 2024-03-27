#pragma once
/* ------------------ */

#include <_INBV_PIXEL_FORMAT.h>

//0x10 bytes (sizeof)
struct _INBV_MODE_INFORMATION
{
    ULONG Height;                                                           //0x0
    ULONG Width;                                                            //0x4
    ULONG Stride;                                                           //0x8
    enum _INBV_PIXEL_FORMAT PixelFormat;                                    //0xc
};
/* Used in */
// _INBV_DISPLAY_CONTEXT

