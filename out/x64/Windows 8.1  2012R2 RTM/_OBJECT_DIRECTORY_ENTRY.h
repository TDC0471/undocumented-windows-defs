#pragma once
/* ------------------ */

#include <_OBJECT_DIRECTORY_ENTRY.h>

//0x18 bytes (sizeof)
struct _OBJECT_DIRECTORY_ENTRY
{
    struct _OBJECT_DIRECTORY_ENTRY* ChainLink;                              //0x0
    VOID* Object;                                                           //0x8
    ULONG HashValue;                                                        //0x10
};
/* Used in */
// _OBJECT_DIRECTORY
// _OBJECT_DIRECTORY_ENTRY
// _OBP_LOOKUP_CONTEXT

