#pragma once
/* ------------------ */


//0xc bytes (sizeof)
struct _DEBUG_TRANSPORT_DATA
{
    ULONG HwContextSize;                                                    //0x0
    ULONG SharedVisibleDataSize;                                            //0x4
    UCHAR UseSerialFraming;                                                 //0x8
    UCHAR ValidUSBCoreId;                                                   //0x9
    UCHAR USBCoreId;                                                        //0xa
};
/* Used in */
// _DEBUG_DEVICE_DESCRIPTOR

