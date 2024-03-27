#pragma once
/* ------------------ */

#include <_OBJECT_DIRECTORY.h>

//0x20 bytes (sizeof)
struct _OBP_LOOKUP_CONTEXT
{
    struct _OBJECT_DIRECTORY* Directory;                                    //0x0
    VOID* Object;                                                           //0x8
    ULONG HashValue;                                                        //0x10
    USHORT HashIndex;                                                       //0x14
    UCHAR DirectoryLocked;                                                  //0x16
    volatile ULONG LockStateSignature;                                      //0x18
};
