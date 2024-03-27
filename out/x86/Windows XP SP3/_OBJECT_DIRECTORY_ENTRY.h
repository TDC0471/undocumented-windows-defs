#pragma once
/* ------------------ */

#include <_OBJECT_DIRECTORY_ENTRY.h>

//0x8 bytes (sizeof)
struct _OBJECT_DIRECTORY_ENTRY
{
    struct _OBJECT_DIRECTORY_ENTRY* ChainLink;                              //0x0
    VOID* Object;                                                           //0x4
};
/* Used in */
// _OBJECT_DIRECTORY
// _OBJECT_DIRECTORY_ENTRY

