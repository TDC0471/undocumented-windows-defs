#pragma once
/* ------------------ */

#include <_GUID.h>
#include <_LARGE_INTEGER.h>

//0x24 bytes (sizeof)
struct _IOP_IRP_EXTENSION
{
    union
    {
        USHORT ExtensionFlags;                                              //0x0
        struct
        {
            USHORT Allocated:1;                                             //0x0
            USHORT PropagateId:1;                                           //0x0
            USHORT TimeStamped:1;                                           //0x0
            USHORT SpareBits:13;                                            //0x0
        };
    };
    USHORT TypesAllocated;                                                  //0x2
    UCHAR GenericExtension[4];                                              //0x4
    VOID* VerifierContext;                                                  //0x8
    struct _GUID ActivityId;                                                //0xc
    union _LARGE_INTEGER Timestamp;                                         //0x1c
};
