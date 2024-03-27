#pragma once
/* ------------------ */

#include <_POOL_HEADER.h>

//0x28 bytes (sizeof)
struct _POOL_HACKER
{
    struct _POOL_HEADER Header;                                             //0x0
    ULONG Contents[8];                                                      //0x8
};
