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
            USHORT BusRange:1;                                              //0x2
            USHORT DevicePathLength:5;                                      //0x2
            USHORT StartBusNumber:8;                                        //0x2
            union
            {
                USHORT Bdf;                                                 //0x4
                struct
                {
                    UCHAR SubordinateBus;                                   //0x4
                    UCHAR SecondaryBus;                                     //0x5
                };
            };
        };
    };
    WCHAR* DevicePath;                                                      //0x8
};
/* Used in */
// _EXT_IOMMU_DEVICE_ID

