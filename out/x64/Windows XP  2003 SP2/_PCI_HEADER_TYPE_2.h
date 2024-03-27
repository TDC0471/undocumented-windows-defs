#pragma once
/* ------------------ */


//0x30 bytes (sizeof)
struct _PCI_HEADER_TYPE_2
{
    ULONG SocketRegistersBaseAddress;                                       //0x0
    UCHAR CapabilitiesPtr;                                                  //0x4
    UCHAR Reserved;                                                         //0x5
    USHORT SecondaryStatus;                                                 //0x6
    UCHAR PrimaryBus;                                                       //0x8
    UCHAR SecondaryBus;                                                     //0x9
    UCHAR SubordinateBus;                                                   //0xa
    UCHAR SecondaryLatency;                                                 //0xb
    struct
    {
        ULONG Base;                                                         //0xc
        ULONG Limit;                                                        //0x10
    } Range[4];                                                             //0xc
    UCHAR InterruptLine;                                                    //0x2c
    UCHAR InterruptPin;                                                     //0x2d
    USHORT BridgeControl;                                                   //0x2e
};
/* Used in */
// _PCI_COMMON_CONFIG

