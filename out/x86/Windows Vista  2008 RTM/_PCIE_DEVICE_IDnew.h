#pragma once
/* ------------------ */


//0x10 bytes (sizeof)
struct _PCIE_DEVICE_ID
{
    USHORT VendorID;                                                        //0x0
    USHORT DeviceID;                                                        //0x2
    ULONG ClassCode:24;                                                     //0x4
    ULONG FunctionNumber:8;                                                 //0x4
    ULONG DeviceNumber:8;                                                   //0x8
    ULONG Segment:16;                                                       //0x8
    ULONG PrimaryBusNumber:8;                                               //0x8
    ULONG SecondaryBusNumber:8;                                             //0xc
    ULONG Reserved1:2;                                                      //0xc
    ULONG SlotNumber:14;                                                    //0xc
    ULONG Reserved2:8;                                                      //0xc
};
/* Used in */
// _WHEA_PCIEXPRESS_ERROR

