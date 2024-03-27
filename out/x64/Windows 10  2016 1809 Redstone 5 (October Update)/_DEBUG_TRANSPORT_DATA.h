#pragma once
/* ------------------ */


//0x8 bytes (sizeof)
struct _DEBUG_TRANSPORT_DATA
{
    ULONG HwContextSize;                                                    //0x0
    UCHAR UseSerialFraming;                                                 //0x4
    UCHAR ValidUSBCoreId;                                                   //0x5
    UCHAR USBCoreId;                                                        //0x6
};
/* Used in */
// _DEBUG_DEVICE_DESCRIPTOR

