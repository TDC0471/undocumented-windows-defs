#pragma once
/* ------------------ */

#include <_HVIEW_MAP_TABLE.h>

//0x200 bytes (sizeof)
struct _HVIEW_MAP_DIRECTORY
{
    struct _HVIEW_MAP_TABLE* Tables[128];                                   //0x0
};
/* Used in */
// _HVIEW_MAP

