#pragma once
/* ------------------ */

#include <_MDL.h>
#include <_POP_IO_STATUS.h>
#include <_LARGE_INTEGER.h>

//0x50 bytes (sizeof)
struct _POP_IO_INFO
{
    struct _MDL* DumpMdl;                                                   //0x0
    enum _POP_IO_STATUS IoStatus;                                           //0x4
    ULONGLONG IoStartCount;                                                 //0x8
    ULONGLONG IoBytesCompleted;                                             //0x10
    ULONGLONG IoBytesInProgress;                                            //0x18
    ULONGLONG RequestSize;                                                  //0x20
    union _LARGE_INTEGER IoLocation;                                        //0x28
    ULONGLONG FileOffset;                                                   //0x30
    VOID* Buffer;                                                           //0x38
    UCHAR AsyncCapable;                                                     //0x3c
    ULONGLONG BytesToRead;                                                  //0x40
    ULONG Pages;                                                            //0x48
};
/* Used in */
// _POP_HIBER_CONTEXT

