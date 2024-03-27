#pragma once
/* ------------------ */

#include <_LARGE_INTEGER.h>
#include <_WHEA_NOTIFICATION_DESCRIPTOR.h>

//0x34 bytes (sizeof)
struct _WHEA_GENERIC_ERROR_DESCRIPTOR
{
    USHORT Type;                                                            //0x0
    UCHAR Reserved;                                                         //0x2
    UCHAR Enabled;                                                          //0x3
    ULONG ErrStatusBlockLength;                                             //0x4
    ULONG RelatedErrorSourceId;                                             //0x8
    UCHAR ErrStatusAddressSpaceID;                                          //0xc
    UCHAR ErrStatusAddressBitWidth;                                         //0xd
    UCHAR ErrStatusAddressBitOffset;                                        //0xe
    UCHAR ErrStatusAddressAccessSize;                                       //0xf
    union _LARGE_INTEGER ErrStatusAddress;                                  //0x10
    struct _WHEA_NOTIFICATION_DESCRIPTOR Notify;                            //0x18
};
/* Used in */
// _WHEA_ERROR_SOURCE_DESCRIPTOR

