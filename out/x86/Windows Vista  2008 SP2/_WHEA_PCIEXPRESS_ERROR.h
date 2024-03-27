#pragma once
/* ------------------ */

#include <_WHEA_PCIEXPRESS_ERROR_VALIDBITS.h>
#include <WHEA_PCIEXPRESS_DEVICE_TYPE.h>
#include <_WHEA_PCIEXPRESS_VERSION.h>
#include <_WHEA_PCIEXPRESS_COMMAND_STATUS.h>
#include <_WHEA_PCIEXPRESS_DEVICE_ID.h>
#include <_WHEA_PCIEXPRESS_BRIDGE_CONTROL_STATUS.h>

//0xd0 bytes (sizeof)
struct _WHEA_PCIEXPRESS_ERROR
{
    union _WHEA_PCIEXPRESS_ERROR_VALIDBITS ValidBits;                       //0x0
    enum WHEA_PCIEXPRESS_DEVICE_TYPE PortType;                              //0x8
    union _WHEA_PCIEXPRESS_VERSION Version;                                 //0xc
    union _WHEA_PCIEXPRESS_COMMAND_STATUS CommandStatus;                    //0x10
    ULONG Reserved;                                                         //0x14
    struct _WHEA_PCIEXPRESS_DEVICE_ID DeviceId;                             //0x18
    ULONGLONG DeviceSerialNumber;                                           //0x28
    union _WHEA_PCIEXPRESS_BRIDGE_CONTROL_STATUS BridgeControlStatus;       //0x30
    UCHAR ExpressCapability[60];                                            //0x34
    UCHAR AerInfo[96];                                                      //0x70
};
/* Used in */
// _WHEA_ERROR_PACKET

