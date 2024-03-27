#pragma once
/* ------------------ */


//0x10 bytes (sizeof)
struct _EXT_IOMMU_DEVICE_ID_PCI
{
    union
    {
        ULONGLONG AsUINT64;                                                 //0x0
        struct
        {
            USHORT PciSegmentNumber;                                        //0x0
            USHORT PhantomFunctionBits:2;                                   //0x2
            USHORT Reserved:6;                                              //0x2
            USHORT StartBusNumber:8;                                        //0x2
            USHORT Bdf;                                                     //0x4
            USHORT DevicePathLength;                                        //0x6
        };
    };
    USHORT* DevicePath;                                                     //0x8
};
/* Used in */
// _EXT_IOMMU_DEVICE_ID

