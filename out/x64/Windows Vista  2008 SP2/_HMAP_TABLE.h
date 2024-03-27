#pragma once
/* ------------------ */

#include <_HMAP_ENTRY.h>

//0x4000 bytes (sizeof)
struct _HMAP_TABLE
{
    struct _HMAP_ENTRY Table[512];                                          //0x0
};
/* Used in */
// _DUAL
// _HMAP_DIRECTORY

