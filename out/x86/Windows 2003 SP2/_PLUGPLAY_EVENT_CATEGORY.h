#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
enum _PLUGPLAY_EVENT_CATEGORY
{
    HardwareProfileChangeEvent = 0,
    TargetDeviceChangeEvent = 1,
    DeviceClassChangeEvent = 2,
    CustomDeviceEvent = 3,
    DeviceInstallEvent = 4,
    DeviceArrivalEvent = 5,
    PowerEvent = 6,
    VetoEvent = 7,
    BlockedDriverEvent = 8,
    InvalidIDEvent = 9,
    MaxPlugEventCategory = 10
};
/* Used in */
// _PLUGPLAY_EVENT_BLOCK

