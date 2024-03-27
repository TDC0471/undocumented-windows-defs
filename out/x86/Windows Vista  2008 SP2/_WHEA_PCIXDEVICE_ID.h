#pragma once
/* ------------------ */


//0x10 bytes (sizeof)
struct _WHEA_PCIXDEVICE_ID
{
    USHORT VendorId;                                                        //0x0
    USHORT DeviceId;                                                        //0x2
    ULONG ClassCode:24;                                                     //0x4
    ULONG FunctionNumber:8;                                                 //0x4
    ULONG DeviceNumber:8;                                                   //0x8
    ULONG BusNumber:8;                                                      //0x8
    ULONG SegmentNumber:8;                                                  //0x8
    ULONG Reserved1:8;                                                      //0x8
    ULONG Reserved2;                                                        //0xc
};
/* Used in */
// _WHEA_PCIXDEVICE_ERROR

