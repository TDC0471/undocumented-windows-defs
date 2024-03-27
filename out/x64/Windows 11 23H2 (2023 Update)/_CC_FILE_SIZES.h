#pragma once
/* ------------------ */

#include <_LARGE_INTEGER.h>

//0x18 bytes (sizeof)
struct _CC_FILE_SIZES
{
    union _LARGE_INTEGER AllocationSize;                                    //0x0
    union _LARGE_INTEGER FileSize;                                          //0x8
    union _LARGE_INTEGER ValidDataLength;                                   //0x10
};
