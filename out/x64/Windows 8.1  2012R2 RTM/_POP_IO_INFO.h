#pragma once
/* ------------------ */

#include <_MDL.h>
#include <_POP_IO_STATUS.h>
#include <_LARGE_INTEGER.h>

//0x60 bytes (sizeof)
struct _POP_IO_INFO
{
    struct _MDL* DumpMdl;                                                   //0x0
    enum _POP_IO_STATUS IoStatus;                                           //0x8
    ULONGLONG IoStartCount;                                                 //0x10
    ULONGLONG IoBytesCompleted;                                             //0x18
    ULONGLONG IoBytesInProgress;                                            //0x20
    ULONGLONG RequestSize;                                                  //0x28
    union _LARGE_INTEGER IoLocation;                                        //0x30
    ULONGLONG FileOffset;                                                   //0x38
    VOID* Buffer;                                                           //0x40
    UCHAR AsyncCapable;                                                     //0x48
    ULONGLONG BytesToRead;                                                  //0x50
    ULONG Pages;                                                            //0x58
};
/* Used in */
// _POP_HIBER_CONTEXT

