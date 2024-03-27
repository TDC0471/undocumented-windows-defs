#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
enum _BUS_DATA_TYPE
{
    ConfigurationSpaceUndefined = -1,
    Cmos = 0,
    EisaConfiguration = 1,
    Pos = 2,
    CbusConfiguration = 3,
    PCIConfiguration = 4,
    VMEConfiguration = 5,
    NuBusConfiguration = 6,
    PCMCIAConfiguration = 7,
    MPIConfiguration = 8,
    MPSAConfiguration = 9,
    PNPISAConfiguration = 10,
    SgiInternalConfiguration = 11,
    MaximumBusDataType = 12
};
/* Used in */
// HAL_PRIVATE_DISPATCH
// _BUS_HANDLER

