#pragma once
/* ------------------ */

#include <_MMVAD.h>

//0x18 bytes (sizeof)
struct _MI_CFG_BITMAP_INFO
{
    VOID* BaseAddress;                                                      //0x0
    ULONGLONG RegionSize;                                                   //0x8
    struct _MMVAD* BitmapVad;                                               //0x10
};
/* Used in */
// _MI_USER_VA_INFO

