#pragma once
/* ------------------ */

#include <_HMAP_TABLE.h>

//0x1000 bytes (sizeof)
struct _HMAP_DIRECTORY
{
    struct _HMAP_TABLE* Directory[1024];                                    //0x0
};
/* Used in */
// _DUAL

