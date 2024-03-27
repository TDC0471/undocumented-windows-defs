#pragma once
/* ------------------ */

#include <_GUID.h>
#include <_LARGE_INTEGER.h>
#include <_IO_IRP_EXT_TRACK_OFFSET_HEADER.h>

//0x28 bytes (sizeof)
struct _IOP_IRP_EXTENSION
{
    union
    {
        USHORT ExtensionFlags;                                              //0x0
        struct
        {
            USHORT Allocated:1;                                             //0x0
            USHORT PropagateId:1;                                           //0x0
            USHORT SpareBits:14;                                            //0x0
        };
    };
    USHORT TypesAllocated;                                                  //0x2
    UCHAR GenericExtension[4];                                              //0x4
    VOID* VerifierContext;                                                  //0x8
    struct _GUID ActivityId;                                                //0xc
    union
    {
        union _LARGE_INTEGER Timestamp;                                     //0x1c
        ULONG ZeroingOffset;                                                //0x1c
        struct
        {
            struct _IO_IRP_EXT_TRACK_OFFSET_HEADER* FsTrackOffsetBlob;      //0x1c
            LONGLONG FsTrackedOffset;                                       //0x20
        };
    };
};
