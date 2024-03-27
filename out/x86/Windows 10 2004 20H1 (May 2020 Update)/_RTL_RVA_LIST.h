#pragma once
/* ------------------ */

#include <_RTL_BITMAP.h>

//0x20 bytes (sizeof)
struct _RTL_RVA_LIST
{
    ULONG RvaCount;                                                         //0x0
    ULONG StateBitsPerRva;                                                  //0x4
    UCHAR* CompressedBuffer;                                                //0x8
    ULONG CompressedBufferSize;                                             //0xc
    struct _RTL_BITMAP RvaStateBitMap;                                      //0x10
    ULONG* StateBitValueMap;                                                //0x18
    VOID* ExtensionBuffer;                                                  //0x1c
};
/* Used in */
// _MI_IMAGE_LOAD_CONFIG

