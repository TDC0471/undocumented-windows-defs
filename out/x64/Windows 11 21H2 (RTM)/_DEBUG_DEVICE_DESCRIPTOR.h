#pragma once
/* ------------------ */

#include <DEBUG_DEVICE_ADDRESS.h>
#include <DEBUG_MEMORY_REQUIREMENTS.h>
#include <KD_NAMESPACE_ENUM.h>
#include <_DEBUG_TRANSPORT_DATA.h>
#include <_DEBUG_IOMMU_EFI_DATA.h>

//0x110 bytes (sizeof)
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
            UCHAR DbgUncachedMemory:1;                                      //0x11
            UCHAR DbgSynthetic:1;                                           //0x11
        };
    };
    UCHAR Initialized;                                                      //0x12
    UCHAR Configured;                                                       //0x13
    struct DEBUG_DEVICE_ADDRESS BaseAddress[6];                             //0x18
    struct DEBUG_MEMORY_REQUIREMENTS Memory;                                //0xa8
    ULONG Dbg2TableIndex;                                                   //0xc8
    USHORT PortType;                                                        //0xcc
    USHORT PortSubtype;                                                     //0xce
    VOID* OemData;                                                          //0xd0
    ULONG OemDataLength;                                                    //0xd8
    enum KD_NAMESPACE_ENUM NameSpace;                                       //0xdc
    WCHAR* NameSpacePath;                                                   //0xe0
    ULONG NameSpacePathLength;                                              //0xe8
    ULONG TransportType;                                                    //0xec
    struct _DEBUG_TRANSPORT_DATA TransportData;                             //0xf0
    struct _DEBUG_IOMMU_EFI_DATA EfiIoMmuData;                              //0x100
};
/* Used in */
// HAL_PRIVATE_DISPATCH
// _LOADER_PARAMETER_EXTENSION

