#pragma once
/* ------------------ */

#include <_PCI_BUSMASTER_RID_TYPE.h>

//0xc bytes (sizeof)
struct _PCI_BUSMASTER_DESCRIPTOR
{
    enum _PCI_BUSMASTER_RID_TYPE Type;                                      //0x0
    ULONG Segment;                                                          //0x4
    union
    {
        struct
        {
            UCHAR Bus;                                                      //0x8
            UCHAR Device;                                                   //0x9
            UCHAR Function;                                                 //0xa
            UCHAR Reserved;                                                 //0xb
        } DeviceRid;                                                        //0x8
        struct
        {
            UCHAR Bus;                                                      //0x8
            UCHAR Device;                                                   //0x9
            UCHAR Function;                                                 //0xa
            UCHAR Reserved;                                                 //0xb
        } BridgeRid;                                                        //0x8
        struct
        {
            UCHAR SecondaryBus;                                             //0x8
            UCHAR SubordinateBus;                                           //0x9
        } MultipleBridges;                                                  //0x8
    };
};
/* Used in */
// HAL_PRIVATE_DISPATCH

