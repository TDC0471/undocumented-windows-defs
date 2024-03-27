#pragma once
/* ------------------ */

#include <_LARGE_INTEGER.h>

//0x38 bytes (sizeof)
struct _FILE_NETWORK_OPEN_INFORMATION
{
    union _LARGE_INTEGER CreationTime;                                      //0x0
    union _LARGE_INTEGER LastAccessTime;                                    //0x8
    union _LARGE_INTEGER LastWriteTime;                                     //0x10
    union _LARGE_INTEGER ChangeTime;                                        //0x18
    union _LARGE_INTEGER AllocationSize;                                    //0x20
    union _LARGE_INTEGER EndOfFile;                                         //0x28
    ULONG FileAttributes;                                                   //0x30
};
/* Used in */
// _FAST_IO_DISPATCH
// _OPEN_PACKET

