#pragma once
/* ------------------ */

#include <_MI_DRIVER_VA.h>
#include <_MMPTE.h>
#include <_RTL_BITMAP.h>

//0x14 bytes (sizeof)
struct _MI_DRIVER_VA
{
    struct _MI_DRIVER_VA* Next;                                             //0x0
    struct _MMPTE* PointerPte;                                              //0x4
    struct _RTL_BITMAP BitMap;                                              //0x8
    ULONG Hint;                                                             //0x10
};
/* Used in */
// _MI_DRIVER_VA
// _MI_SYSTEM_IMAGE_STATE

