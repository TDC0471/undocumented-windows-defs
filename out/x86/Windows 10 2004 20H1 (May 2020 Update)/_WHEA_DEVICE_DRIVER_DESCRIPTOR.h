#pragma once
/* ------------------ */

#include <_GUID.h>
#include <_WHEA_ERROR_SOURCE_CONFIGURATION_DD.h>

//0x60 bytes (sizeof)
struct _WHEA_DEVICE_DRIVER_DESCRIPTOR
{
    USHORT Type;                                                            //0x0
    UCHAR Enabled;                                                          //0x2
    UCHAR Reserved;                                                         //0x3
    struct _GUID SourceGuid;                                                //0x4
    USHORT LogTag;                                                          //0x14
    USHORT Reserved2;                                                       //0x16
    ULONG PacketLength;                                                     //0x18
    ULONG PacketCount;                                                      //0x1c
    UCHAR* PacketBuffer;                                                    //0x20
    struct _WHEA_ERROR_SOURCE_CONFIGURATION_DD Config;                      //0x24
    struct _GUID CreatorId;                                                 //0x30
    struct _GUID PartitionId;                                               //0x40
    ULONG MaxSectionDataLength;                                             //0x50
    ULONG MaxSectionsPerRecord;                                             //0x54
    UCHAR* PacketStateBuffer;                                               //0x58
    LONG OpenHandles;                                                       //0x5c
};
/* Used in */
// _WHEA_ERROR_SOURCE_DESCRIPTOR

