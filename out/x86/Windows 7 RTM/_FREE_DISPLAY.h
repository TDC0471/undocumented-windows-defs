#pragma once
/* ------------------ */

#include <_RTL_BITMAP.h>

//0xc bytes (sizeof)
struct _FREE_DISPLAY
{
    ULONG RealVectorSize;                                                   //0x0
    struct _RTL_BITMAP Display;                                             //0x4
};
/* Used in */
// _DUAL

