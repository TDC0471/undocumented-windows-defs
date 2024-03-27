#pragma once
/* ------------------ */

#include <_MMVAD.h>

//0x20 bytes (sizeof)
struct _MI_CFG_BITMAP_INFO
{
    VOID* BaseAddress;                                                      //0x0
    ULONGLONG RegionSize;                                                   //0x8
    VOID* VadBaseAddress;                                                   //0x10
    struct _MMVAD* BitmapVad;                                               //0x18
};
/* Used in */
// _MI_USER_VA_INFO

