#pragma once
/* ------------------ */

#include <_SINGLE_LIST_ENTRY.h>
#include <_DEVICE_OBJECT.h>
#include <_SYSTEM_POWER_STATE.h>
#include <_DEVICE_POWER_STATE.h>

//0x44 bytes (sizeof)
struct _PI_BUS_EXTENSION
{
    ULONG Flags;                                                            //0x0
    ULONG NumberCSNs;                                                       //0x4
    UCHAR* ReadDataPort;                                                    //0x8
    UCHAR DataPortMapped;                                                   //0xc
    UCHAR* AddressPort;                                                     //0x10
    UCHAR AddrPortMapped;                                                   //0x14
    UCHAR* CommandPort;                                                     //0x18
    UCHAR CmdPortMapped;                                                    //0x1c
    ULONG NextSlotNumber;                                                   //0x20
    struct _SINGLE_LIST_ENTRY DeviceList;                                   //0x24
    struct _SINGLE_LIST_ENTRY CardList;                                     //0x28
    struct _DEVICE_OBJECT* PhysicalBusDevice;                               //0x2c
    struct _DEVICE_OBJECT* FunctionalBusDevice;                             //0x30
    struct _DEVICE_OBJECT* AttachedDevice;                                  //0x34
    ULONG BusNumber;                                                        //0x38
    enum _SYSTEM_POWER_STATE SystemPowerState;                              //0x3c
    enum _DEVICE_POWER_STATE DevicePowerState;                              //0x40
};
/* Used in */
// _BUS_EXTENSION_LIST

