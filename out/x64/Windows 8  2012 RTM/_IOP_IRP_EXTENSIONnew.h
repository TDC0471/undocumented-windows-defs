#pragma once
/* ------------------ */

#include <_GUID.h>
#include <_LARGE_INTEGER.h>

//0x20 bytes (sizeof)
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
            USHORT SpareBits:5;                                             //0x0
        };
    };
    USHORT TypesAllocated;                                                  //0x2
    struct _GUID ActivityId;                                                //0x4
    union _LARGE_INTEGER Timestamp;                                         //0x18
};
