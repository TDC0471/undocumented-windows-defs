#pragma once
/* ------------------ */

#include <_GUID.h>

//0x40 bytes (sizeof)
struct _HEADLESS_LOADER_BLOCK
{
    UCHAR UsedBiosSettings;                                                 //0x0
    UCHAR DataBits;                                                         //0x1
    UCHAR StopBits;                                                         //0x2
    UCHAR Parity;                                                           //0x3
    ULONG BaudRate;                                                         //0x4
    ULONG PortNumber;                                                       //0x8
    UCHAR* PortAddress;                                                     //0x10
    USHORT PciDeviceId;                                                     //0x18
    USHORT PciVendorId;                                                     //0x1a
    UCHAR PciBusNumber;                                                     //0x1c
    USHORT PciBusSegment;                                                   //0x1e
    UCHAR PciSlotNumber;                                                    //0x20
    UCHAR PciFunctionNumber;                                                //0x21
    ULONG PciFlags;                                                         //0x24
    struct _GUID SystemGUID;                                                //0x28
    UCHAR IsMMIODevice;                                                     //0x38
    UCHAR TerminalType;                                                     //0x39
};
/* Used in */
// _LOADER_PARAMETER_EXTENSION

