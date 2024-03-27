#pragma once
/* ------------------ */

#include <_INBV_MODE_INFORMATION.h>
#include <_INBV_GRAPHICS_RECTANGLE.h>
#include <_INBV_OFFSET.h>

//0x28 bytes (sizeof)
struct _INBV_DISPLAY_CONTEXT
{
    UCHAR FrameBufferValid;                                                 //0x0
    UCHAR FrameBufferMapped;                                                //0x1
    UCHAR DisplayRotation;                                                  //0x2
    struct _INBV_MODE_INFORMATION ModeInformation;                          //0x4
    VOID* ShadowBuffer;                                                     //0x18
    union
    {
        VOID* FrameBuffer;                                                  //0x20
        LONG (*BltRoutine)(struct _INBV_GRAPHICS_RECTANGLE* arg1, struct _INBV_OFFSET* arg2, UCHAR arg3); //0x20
    } VideoMemory;                                                          //0x20
};
/* Used in */
// _KSR_FIRMWARE_INFORMATION

