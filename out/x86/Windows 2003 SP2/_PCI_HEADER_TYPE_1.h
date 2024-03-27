#pragma once
/* ------------------ */


//0x30 bytes (sizeof)
struct _PCI_HEADER_TYPE_1
{
    ULONG BaseAddresses[2];                                                 //0x0
    UCHAR PrimaryBus;                                                       //0x8
    UCHAR SecondaryBus;                                                     //0x9
    UCHAR SubordinateBus;                                                   //0xa
    UCHAR SecondaryLatency;                                                 //0xb
    UCHAR IOBase;                                                           //0xc
    UCHAR IOLimit;                                                          //0xd
    USHORT SecondaryStatus;                                                 //0xe
    USHORT MemoryBase;                                                      //0x10
    USHORT MemoryLimit;                                                     //0x12
    USHORT PrefetchBase;                                                    //0x14
    USHORT PrefetchLimit;                                                   //0x16
    ULONG PrefetchBaseUpper32;                                              //0x18
    ULONG PrefetchLimitUpper32;                                             //0x1c
    USHORT IOBaseUpper16;                                                   //0x20
    USHORT IOLimitUpper16;                                                  //0x22
    UCHAR CapabilitiesPtr;                                                  //0x24
    UCHAR Reserved1[3];                                                     //0x25
    ULONG ROMBaseAddress;                                                   //0x28
    UCHAR InterruptLine;                                                    //0x2c
    UCHAR InterruptPin;                                                     //0x2d
    USHORT BridgeControl;                                                   //0x2e
};
/* Used in */
// _PCI_COMMON_CONFIG

