#pragma once
/* ------------------ */

#include <_LARGE_INTEGER.h>

//0x28 bytes (sizeof)
struct _FILE_BASIC_INFORMATION
{
    union _LARGE_INTEGER CreationTime;                                      //0x0
    union _LARGE_INTEGER LastAccessTime;                                    //0x8
    union _LARGE_INTEGER LastWriteTime;                                     //0x10
    union _LARGE_INTEGER ChangeTime;                                        //0x18
    ULONG FileAttributes;                                                   //0x20
};
/* Used in */
// _FAST_IO_DISPATCH

