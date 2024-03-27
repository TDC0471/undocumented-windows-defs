#pragma once
/* ------------------ */

#include <_MMVAD.h>

//0xc bytes (sizeof)
struct _MI_CFG_BITMAP_INFO
{
    VOID* BaseAddress;                                                      //0x0
    ULONG RegionSize;                                                       //0x4
    struct _MMVAD* BitmapVad;                                               //0x8
};
/* Used in */
// _MI_USER_VA_INFO

