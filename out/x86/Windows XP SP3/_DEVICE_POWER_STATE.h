#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
enum _DEVICE_POWER_STATE
{
    PowerDeviceUnspecified = 0,
    PowerDeviceD0 = 1,
    PowerDeviceD1 = 2,
    PowerDeviceD2 = 3,
    PowerDeviceD3 = 4,
    PowerDeviceMaximum = 5
};
/* Used in */
// PCI_POWER_STATE
// _DEVICE_CAPABILITIES
// _DEVICE_OBJECT_POWER_EXTENSION
// _PI_BUS_EXTENSION
// _POWER_STATE

