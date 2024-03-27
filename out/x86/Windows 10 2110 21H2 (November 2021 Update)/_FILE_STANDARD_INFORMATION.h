#pragma once
/* ------------------ */

#include <_LARGE_INTEGER.h>

//0x18 bytes (sizeof)
struct _FILE_STANDARD_INFORMATION
{
    union _LARGE_INTEGER AllocationSize;                                    //0x0
    union _LARGE_INTEGER EndOfFile;                                         //0x8
    ULONG NumberOfLinks;                                                    //0x10
    UCHAR DeletePending;                                                    //0x14
    UCHAR Directory;                                                        //0x15
};
/* Used in */
// _FAST_IO_DISPATCH

