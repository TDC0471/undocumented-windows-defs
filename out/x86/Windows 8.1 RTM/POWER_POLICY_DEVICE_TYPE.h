#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
enum POWER_POLICY_DEVICE_TYPE
{
    PolicyDeviceSystemButton = 0,
    PolicyDeviceThermalZone = 1,
    PolicyDeviceBattery = 2,
    PolicyDeviceMemory = 3,
    PolicyInitiatePowerActionAPI = 4,
    PolicySetPowerStateAPI = 5,
    PolicyImmediateDozeS4 = 6,
    PolicySystemIdle = 7,
    PolicyDeviceWakeAlarm = 8,
    PolicyDeviceFan = 9,
    PolicyDeviceMax = 10
};
/* Used in */
// _POP_ACTION_TRIGGER
// _POP_POLICY_DEVICE
// _POP_POWER_ACTION
// _POP_THERMAL_ZONE
