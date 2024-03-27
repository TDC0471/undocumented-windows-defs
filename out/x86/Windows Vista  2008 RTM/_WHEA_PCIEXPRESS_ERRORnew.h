#pragma once
/* ------------------ */

#include <PCI_EXPRESS_DEVICE_TYPE.h>
#include <_PCIE_DEVICE_ID.h>

//0xd0 bytes (sizeof)
struct _WHEA_PCIEXPRESS_ERROR
{
    ULONGLONG ValidationBits;                                               //0x0
    enum PCI_EXPRESS_DEVICE_TYPE PortType;                                  //0x8
    ULONG Version;                                                          //0xc
    ULONG CommandStatus;                                                    //0x10
    ULONG Reserved;                                                         //0x14
    struct _PCIE_DEVICE_ID DeviceId;                                        //0x18
    ULONGLONG DeviceSN;                                                     //0x28
    ULONG BridgeCtrlSts;                                                    //0x30
    UCHAR ExpressCapability[60];                                            //0x34
    UCHAR AerInfo[96];                                                      //0x70
};
/* Used in */
// _WHEA_ERROR_PACKET

