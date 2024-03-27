#pragma once
/* ------------------ */


//0x50 bytes (sizeof)
struct _PROCLOCALGIC
{
    UCHAR Type;                                                             //0x0
    UCHAR Length;                                                           //0x1
    USHORT Reserved;                                                        //0x2
    ULONG Identifier;                                                       //0x4
    ULONG AcpiProcessorId;                                                  //0x8
    ULONG Flags;                                                            //0xc
    ULONG ParkingProtocolVersion;                                           //0x10
    ULONG PerformanceInterruptGsi;                                          //0x14
    ULONGLONG ParkedPhysicalAddress;                                        //0x18
    ULONGLONG ControllerPhysicalAddress;                                    //0x20
    ULONGLONG Gicv;                                                         //0x28
    ULONGLONG Gich;                                                         //0x30
    ULONG VgicMaintenanceInterrupt;                                         //0x38
    ULONGLONG GicrBaseAddress;                                              //0x3c
    ULONGLONG Mpidr;                                                        //0x44
    UCHAR ProcessorPowerEfficiencyClass;                                    //0x4c
    UCHAR Reserved2[3];                                                     //0x4d
};
