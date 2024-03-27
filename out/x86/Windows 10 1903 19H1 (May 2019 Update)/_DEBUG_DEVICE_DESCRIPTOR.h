#pragma once
/* ------------------ */

#include <DEBUG_DEVICE_ADDRESS.h>
#include <DEBUG_MEMORY_REQUIREMENTS.h>
#include <KD_NAMESPACE_ENUM.h>
#include <_DEBUG_TRANSPORT_DATA.h>

//0xa8 bytes (sizeof)
struct _DEBUG_DEVICE_DESCRIPTOR
{
    ULONG Bus;                                                              //0x0
    ULONG Slot;                                                             //0x4
    USHORT Segment;                                                         //0x8
    USHORT VendorID;                                                        //0xa
    USHORT DeviceID;                                                        //0xc
    UCHAR BaseClass;                                                        //0xe
    UCHAR SubClass;                                                         //0xf
    UCHAR ProgIf;                                                           //0x10
    union
    {
        UCHAR Flags;                                                        //0x11
        struct
        {
            UCHAR DbgHalScratchAllocated:1;                                 //0x11
            UCHAR DbgBarsMapped:1;                                          //0x11
            UCHAR DbgScratchAllocated:1;                                    //0x11
        };
    };
    UCHAR Initialized;                                                      //0x12
    UCHAR Configured;                                                       //0x13
    struct DEBUG_DEVICE_ADDRESS BaseAddress[6];                             //0x14
    struct DEBUG_MEMORY_REQUIREMENTS Memory;                                //0x60
    ULONG Dbg2TableIndex;                                                   //0x80
    USHORT PortType;                                                        //0x84
    USHORT PortSubtype;                                                     //0x86
    VOID* OemData;                                                          //0x88
    ULONG OemDataLength;                                                    //0x8c
    enum KD_NAMESPACE_ENUM NameSpace;                                       //0x90
    WCHAR* NameSpacePath;                                                   //0x94
    ULONG NameSpacePathLength;                                              //0x98
    ULONG TransportType;                                                    //0x9c
    struct _DEBUG_TRANSPORT_DATA TransportData;                             //0xa0
};
/* Used in */
// HAL_PRIVATE_DISPATCH
// _LOADER_PARAMETER_EXTENSION

