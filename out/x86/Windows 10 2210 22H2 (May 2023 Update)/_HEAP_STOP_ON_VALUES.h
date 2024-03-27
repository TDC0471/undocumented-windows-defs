#pragma once
/* ------------------ */

#include <_HEAP_STOP_ON_TAG.h>

//0x18 bytes (sizeof)
struct _HEAP_STOP_ON_VALUES
{
    ULONG AllocAddress;                                                     //0x0
    struct _HEAP_STOP_ON_TAG AllocTag;                                      //0x4
    ULONG ReAllocAddress;                                                   //0x8
    struct _HEAP_STOP_ON_TAG ReAllocTag;                                    //0xc
    ULONG FreeAddress;                                                      //0x10
    struct _HEAP_STOP_ON_TAG FreeTag;                                       //0x14
};
