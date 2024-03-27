#pragma once
/* ------------------ */

#include <_HEAP_STOP_ON_TAG.h>

//0x30 bytes (sizeof)
struct _HEAP_STOP_ON_VALUES
{
    ULONGLONG AllocAddress;                                                 //0x0
    struct _HEAP_STOP_ON_TAG AllocTag;                                      //0x8
    ULONGLONG ReAllocAddress;                                               //0x10
    struct _HEAP_STOP_ON_TAG ReAllocTag;                                    //0x18
    ULONGLONG FreeAddress;                                                  //0x20
    struct _HEAP_STOP_ON_TAG FreeTag;                                       //0x28
};
