#pragma once
/* ------------------ */

#include <_SINGLE_LIST_ENTRY.h>
#include <_DEVICE_OBJECT.h>
#include <_SYSTEM_POWER_STATE.h>
#include <_DEVICE_POWER_STATE.h>

//0x70 bytes (sizeof)
struct _PI_BUS_EXTENSION
{
    ULONG Flags;                                                            //0x0
    UCHAR NumberCSNs;                                                       //0x4
    UCHAR* ReadDataPort;                                                    //0x8
    UCHAR DataPortMapped;                                                   //0x10
    UCHAR* AddressPort;                                                     //0x18
    UCHAR AddrPortMapped;                                                   //0x20
    UCHAR* CommandPort;                                                     //0x28
    UCHAR CmdPortMapped;                                                    //0x30
    ULONG NextSlotNumber;                                                   //0x34
    struct _SINGLE_LIST_ENTRY DeviceList;                                   //0x38
    struct _SINGLE_LIST_ENTRY CardList;                                     //0x40
    struct _DEVICE_OBJECT* PhysicalBusDevice;                               //0x48
    struct _DEVICE_OBJECT* FunctionalBusDevice;                             //0x50
    struct _DEVICE_OBJECT* AttachedDevice;                                  //0x58
    ULONG BusNumber;                                                        //0x60
    enum _SYSTEM_POWER_STATE SystemPowerState;                              //0x64
    enum _DEVICE_POWER_STATE DevicePowerState;                              //0x68
};
/* Used in */
// _BUS_EXTENSION_LIST

