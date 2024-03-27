#pragma once
/* ------------------ */


//0x8 bytes (sizeof)
union _WHEA_PCIEXPRESS_ERROR_VALIDBITS
{
    ULONGLONG PortType:1;                                                   //0x0
    ULONGLONG Version:1;                                                    //0x0
    ULONGLONG CommandStatus:1;                                              //0x0
    ULONGLONG DeviceId:1;                                                   //0x0
    ULONGLONG DeviceSerialNumber:1;                                         //0x0
    ULONGLONG BridgeControlStatus:1;                                        //0x0
    ULONGLONG ExpressCapability:1;                                          //0x0
    ULONGLONG AerInfo:1;                                                    //0x0
    ULONGLONG Reserved:56;                                                  //0x0
    ULONGLONG ValidBits;                                                    //0x0
};
/* Used in */
// _WHEA_PCIEXPRESS_ERROR

