#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
enum _INTERFACE_TYPE
{
    InterfaceTypeUndefined = -1,
    Internal = 0,
    Isa = 1,
    Eisa = 2,
    MicroChannel = 3,
    TurboChannel = 4,
    PCIBus = 5,
    VMEBus = 6,
    NuBus = 7,
    PCMCIABus = 8,
    CBus = 9,
    MPIBus = 10,
    MPSABus = 11,
    ProcessorInternal = 12,
    InternalPowerBus = 13,
    PNPISABus = 14,
    PNPBus = 15,
    MaximumInterfaceType = 16
};
/* Used in */
// _ARBITER_LIST_ENTRY
// _CM_FULL_RESOURCE_DESCRIPTOR
// _DEVICE_NODE
// _IO_RESOURCE_REQUIREMENTS_LIST

