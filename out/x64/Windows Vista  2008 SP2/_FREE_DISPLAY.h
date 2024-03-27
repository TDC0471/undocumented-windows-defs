#pragma once
/* ------------------ */

#include <_RTL_BITMAP.h>

//0x18 bytes (sizeof)
struct _FREE_DISPLAY
{
    ULONG RealVectorSize;                                                   //0x0
    struct _RTL_BITMAP Display;                                             //0x8
};
/* Used in */
// _DUAL

