#pragma once
/* ------------------ */

#include <_MMVAD.h>

//0x10 bytes (sizeof)
struct _MI_CFG_BITMAP_INFO
{
    VOID* BaseAddress;                                                      //0x0
    ULONG RegionSize;                                                       //0x4
    VOID* VadBaseAddress;                                                   //0x8
    struct _MMVAD* BitmapVad;                                               //0xc
};
/* Used in */
// _MI_USER_VA_INFO

