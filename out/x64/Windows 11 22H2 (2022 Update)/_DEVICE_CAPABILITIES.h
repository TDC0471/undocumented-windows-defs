#pragma once
/* ------------------ */

#include <_DEVICE_POWER_STATE.h>
#include <_SYSTEM_POWER_STATE.h>

//0x40 bytes (sizeof)
struct _DEVICE_CAPABILITIES
{
    USHORT Size;                                                            //0x0
    USHORT Version;                                                         //0x2
    ULONG DeviceD1:1;                                                       //0x4
    ULONG DeviceD2:1;                                                       //0x4
    ULONG LockSupported:1;                                                  //0x4
    ULONG EjectSupported:1;                                                 //0x4
    ULONG Removable:1;                                                      //0x4
    ULONG DockDevice:1;                                                     //0x4
    ULONG UniqueID:1;                                                       //0x4
    ULONG SilentInstall:1;                                                  //0x4
    ULONG RawDeviceOK:1;                                                    //0x4
    ULONG SurpriseRemovalOK:1;                                              //0x4
    ULONG WakeFromD0:1;                                                     //0x4
    ULONG WakeFromD1:1;                                                     //0x4
    ULONG WakeFromD2:1;                                                     //0x4
    ULONG WakeFromD3:1;                                                     //0x4
    ULONG HardwareDisabled:1;                                               //0x4
    ULONG NonDynamic:1;                                                     //0x4
    ULONG WarmEjectSupported:1;                                             //0x4
    ULONG NoDisplayInUI:1;                                                  //0x4
    ULONG Reserved1:1;                                                      //0x4
    ULONG WakeFromInterrupt:1;                                              //0x4
    ULONG SecureDevice:1;                                                   //0x4
    ULONG ChildOfVgaEnabledBridge:1;                                        //0x4
    ULONG DecodeIoOnBoot:1;                                                 //0x4
    ULONG Reserved:9;                                                       //0x4
    ULONG Address;                                                          //0x8
    ULONG UINumber;                                                         //0xc
    enum _DEVICE_POWER_STATE DeviceState[7];                                //0x10
    enum _SYSTEM_POWER_STATE SystemWake;                                    //0x2c
    enum _DEVICE_POWER_STATE DeviceWake;                                    //0x30
    ULONG D1Latency;                                                        //0x34
    ULONG D2Latency;                                                        //0x38
    ULONG D3Latency;                                                        //0x3c
};
/* Used in */
// _IO_STACK_LOCATION

