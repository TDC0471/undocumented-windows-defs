#pragma once
/* ------------------ */

#include <_OBJECT_DIRECTORY.h>
#include <_OBJECT_DIRECTORY_ENTRY.h>

//0x18 bytes (sizeof)
struct _OBP_LOOKUP_CONTEXT
{
    struct _OBJECT_DIRECTORY* Directory;                                    //0x0
    struct _OBJECT_DIRECTORY_ENTRY** EntryLink;                             //0x8
    ULONG HashValue;                                                        //0x10
    UCHAR HashIndex;                                                        //0x14
    UCHAR LockedExclusive;                                                  //0x15
    UCHAR DirectoryReferenced;                                              //0x16
    UCHAR Unused;                                                           //0x17
};
