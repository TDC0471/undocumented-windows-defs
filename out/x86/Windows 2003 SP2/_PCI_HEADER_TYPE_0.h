#pragma once
/* ------------------ */


//0x30 bytes (sizeof)
struct _PCI_HEADER_TYPE_0
{
    ULONG BaseAddresses[6];                                                 //0x0
    ULONG CIS;                                                              //0x18
    USHORT SubVendorID;                                                     //0x1c
    USHORT SubSystemID;                                                     //0x1e
    ULONG ROMBaseAddress;                                                   //0x20
    UCHAR CapabilitiesPtr;                                                  //0x24
    UCHAR Reserved1[3];                                                     //0x25
    ULONG Reserved2;                                                        //0x28
    UCHAR InterruptLine;                                                    //0x2c
    UCHAR InterruptPin;                                                     //0x2d
    UCHAR MinimumGrant;                                                     //0x2e
    UCHAR MaximumLatency;                                                   //0x2f
};
/* Used in */
// _PCI_COMMON_CONFIG

