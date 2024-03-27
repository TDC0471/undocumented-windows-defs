#pragma once
/* ------------------ */

#include <_OBJECT_DIRECTORY.h>
#include <_OBJECT_DIRECTORY_ENTRY.h>

//0x18 bytes (sizeof)
struct _OBP_LOOKUP_CONTEXT
{
    struct _OBJECT_DIRECTORY* Directory;                                    //0x0
    VOID* Object;                                                           //0x4
    struct _OBJECT_DIRECTORY_ENTRY** EntryLink;                             //0x8
    ULONG HashValue;                                                        //0xc
    USHORT HashIndex;                                                       //0x10
    UCHAR DirectoryLocked;                                                  //0x12
    UCHAR LockedExclusive;                                                  //0x13
    ULONG LockStateSignature;                                               //0x14
};
