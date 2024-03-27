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
    VetoEvent = 6,
    BlockedDriverEvent = 7,
    InvalidIDEvent = 8,
    DevicePropertyChangeEvent = 9,
    DeviceInstanceRemovalEvent = 10,
    DeviceInstanceStartedEvent = 11,
    MaxPlugEventCategory = 12
};
/* Used in */
// _PLUGPLAY_EVENT_BLOCK

