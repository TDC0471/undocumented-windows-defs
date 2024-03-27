#pragma once
/* ------------------ */

#include <_GUID.h>
#include <_LARGE_INTEGER.h>
#include <_IO_IRP_EXT_TRACK_OFFSET_HEADER.h>
#include <_IO_ADAPTER_CRYPTO_PARAMETERS.h>

//0x30 bytes (sizeof)
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
    ULONG DiskIoAttributionHandle;                                          //0xc
    struct _GUID ActivityId;                                                //0x10
    union
    {
        union _LARGE_INTEGER Timestamp;                                     //0x20
        ULONG ZeroingOffset;                                                //0x20
        struct
        {
            struct _IO_IRP_EXT_TRACK_OFFSET_HEADER* FsTrackOffsetBlob;      //0x20
            LONGLONG FsTrackedOffset;                                       //0x24
        };
        struct _IO_ADAPTER_CRYPTO_PARAMETERS AdapterCryptoParameters;       //0x20
    };
};
