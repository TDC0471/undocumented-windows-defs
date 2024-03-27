#pragma once
/* ------------------ */

#include <_OBJECT_DIRECTORY_ENTRY.h>

//0xc bytes (sizeof)
struct _OBJECT_DIRECTORY_ENTRY
{
    struct _OBJECT_DIRECTORY_ENTRY* ChainLink;                              //0x0
    VOID* Object;                                                           //0x4
    ULONG HashValue;                                                        //0x8
};
/* Used in */
// _OBJECT_DIRECTORY
// _OBJECT_DIRECTORY_ENTRY

