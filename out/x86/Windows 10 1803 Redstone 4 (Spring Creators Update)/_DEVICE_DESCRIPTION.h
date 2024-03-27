#pragma once
/* ------------------ */

#include <_INTERFACE_TYPE.h>
#include <_DMA_WIDTH.h>
#include <_DMA_SPEED.h>
#include <_LARGE_INTEGER.h>

//0x40 bytes (sizeof)
struct _DEVICE_DESCRIPTION
{
    ULONG Version;                                                          //0x0
    UCHAR Master;                                                           //0x4
    UCHAR ScatterGather;                                                    //0x5
    UCHAR DemandMode;                                                       //0x6
    UCHAR AutoInitialize;                                                   //0x7
    UCHAR Dma32BitAddresses;                                                //0x8
    UCHAR IgnoreCount;                                                      //0x9
    UCHAR Reserved1;                                                        //0xa
    UCHAR Dma64BitAddresses;                                                //0xb
    ULONG BusNumber;                                                        //0xc
    ULONG DmaChannel;                                                       //0x10
    enum _INTERFACE_TYPE InterfaceType;                                     //0x14
    enum _DMA_WIDTH DmaWidth;                                               //0x18
    enum _DMA_SPEED DmaSpeed;                                               //0x1c
    ULONG MaximumLength;                                                    //0x20
    ULONG DmaPort;                                                          //0x24
    ULONG DmaAddressWidth;                                                  //0x28
    ULONG DmaControllerInstance;                                            //0x2c
    ULONG DmaRequestLine;                                                   //0x30
    union _LARGE_INTEGER DeviceAddress;                                     //0x38
};
