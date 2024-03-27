#pragma once
/* ------------------ */

#include <_GUID.h>
#include <_WHEA_ERROR_SOURCE_CONFIGURATION_DD.h>

//0x74 bytes (sizeof)
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
    struct _WHEA_ERROR_SOURCE_CONFIGURATION_DD Config;                      //0x28
    struct _GUID CreatorId;                                                 //0x40
    struct _GUID PartitionId;                                               //0x50
    ULONG MaxSectionDataLength;                                             //0x60
    ULONG MaxSectionsPerRecord;                                             //0x64
    UCHAR* PacketStateBuffer;                                               //0x68
    LONG OpenHandles;                                                       //0x70
};
/* Used in */
// _WHEA_ERROR_SOURCE_DESCRIPTOR

