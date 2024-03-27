#pragma once
/* ------------------ */

#include <_OBJECT_DIRECTORY.h>
#include <_OBJECT_DIRECTORY_ENTRY.h>

//0x28 bytes (sizeof)
struct _OBP_LOOKUP_CONTEXT
{
    struct _OBJECT_DIRECTORY* Directory;                                    //0x0
    VOID* Object;                                                           //0x8
    struct _OBJECT_DIRECTORY_ENTRY** EntryLink;                             //0x10
    ULONG HashValue;                                                        //0x18
    USHORT HashIndex;                                                       //0x1c
    UCHAR DirectoryLocked;                                                  //0x1e
    UCHAR LockedExclusive;                                                  //0x1f
    ULONG LockStateSignature;                                               //0x20
};
