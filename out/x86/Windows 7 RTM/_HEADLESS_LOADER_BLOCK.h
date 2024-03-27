#pragma once
/* ------------------ */

#include <_GUID.h>

//0x34 bytes (sizeof)
struct _HEADLESS_LOADER_BLOCK
{
    UCHAR UsedBiosSettings;                                                 //0x0
    UCHAR DataBits;                                                         //0x1
    UCHAR StopBits;                                                         //0x2
    UCHAR Parity;                                                           //0x3
    ULONG BaudRate;                                                         //0x4
    ULONG PortNumber;                                                       //0x8
    UCHAR* PortAddress;                                                     //0xc
    USHORT PciDeviceId;                                                     //0x10
    USHORT PciVendorId;                                                     //0x12
    UCHAR PciBusNumber;                                                     //0x14
    USHORT PciBusSegment;                                                   //0x16
    UCHAR PciSlotNumber;                                                    //0x18
    UCHAR PciFunctionNumber;                                                //0x19
    ULONG PciFlags;                                                         //0x1c
    struct _GUID SystemGUID;                                                //0x20
    UCHAR IsMMIODevice;                                                     //0x30
    UCHAR TerminalType;                                                     //0x31
};
/* Used in */
// _LOADER_PARAMETER_EXTENSION

