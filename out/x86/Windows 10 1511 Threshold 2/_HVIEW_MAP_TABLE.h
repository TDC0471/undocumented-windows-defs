#pragma once
/* ------------------ */

#include <_HVIEW_MAP_ENTRY.h>

//0x600 bytes (sizeof)
struct _HVIEW_MAP_TABLE
{
    struct _HVIEW_MAP_ENTRY Entries[64];                                    //0x0
};
/* Used in */
// _HVIEW_MAP_DIRECTORY

