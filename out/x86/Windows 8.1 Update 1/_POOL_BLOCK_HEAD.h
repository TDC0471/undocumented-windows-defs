#pragma once
/* ------------------ */

#include <_POOL_HEADER.h>
#include <_LIST_ENTRY.h>

//0x10 bytes (sizeof)
struct _POOL_BLOCK_HEAD
{
    struct _POOL_HEADER Header;                                             //0x0
    struct _LIST_ENTRY List;                                                //0x8
};
