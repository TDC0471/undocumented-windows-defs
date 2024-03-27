#pragma once
/* ------------------ */

#include <_LARGE_INTEGER.h>

//0x20 bytes (sizeof)
struct _PERFINFO_HARDPAGEFAULT_INFORMATION
{
    union _LARGE_INTEGER ReadOffset;                                        //0x0
    VOID* VirtualAddress;                                                   //0x8
    VOID* FileObject;                                                       //0x10
    ULONG ThreadId;                                                         //0x18
    ULONG ByteCount;                                                        //0x1c
};
/* Used in */
// _PF_HARD_FAULT_INFO

