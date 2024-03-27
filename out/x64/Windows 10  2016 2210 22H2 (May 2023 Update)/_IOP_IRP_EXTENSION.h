#pragma once
/* ------------------ */

#include <_GUID.h>
#include <_LARGE_INTEGER.h>
#include <_IO_IRP_EXT_TRACK_OFFSET_HEADER.h>
#include <_IO_ADAPTER_CRYPTO_PARAMETERS.h>
#include <_COPY_INFORMATION.h>

//0x50 bytes (sizeof)
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
    ULONGLONG DiskIoAttributionHandle;                                      //0x10
    struct _GUID ActivityId;                                                //0x18
    union
    {
        union _LARGE_INTEGER Timestamp;                                     //0x28
        ULONG ZeroingOffset;                                                //0x28
        struct
        {
            struct _IO_IRP_EXT_TRACK_OFFSET_HEADER* FsTrackOffsetBlob;      //0x28
            LONGLONG FsTrackedOffset;                                       //0x30
        };
        struct _IO_ADAPTER_CRYPTO_PARAMETERS AdapterCryptoParameters;       //0x28
    };
    union
    {
        ULONGLONG Value;                                                    //0x38
        ULONGLONG UserFlags:32;                                             //0x38
        ULONGLONG SystemFlags:16;                                           //0x38
        ULONGLONG UserFlagsId:16;                                           //0x38
    } DriverFlags;                                                          //0x38
    struct _COPY_INFORMATION CopyInformation;                               //0x40
};
