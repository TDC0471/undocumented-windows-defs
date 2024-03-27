#pragma once
/* ------------------ */

#include <_OBJECT_DIRECTORY.h>

//0x14 bytes (sizeof)
struct _OBP_LOOKUP_CONTEXT
{
    struct _OBJECT_DIRECTORY* Directory;                                    //0x0
    VOID* Object;                                                           //0x4
    ULONG HashValue;                                                        //0x8
    USHORT HashIndex;                                                       //0xc
    UCHAR DirectoryLocked;                                                  //0xe
    volatile ULONG LockStateSignature;                                      //0x10
};
