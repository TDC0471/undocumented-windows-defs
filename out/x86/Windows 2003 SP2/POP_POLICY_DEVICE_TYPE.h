#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
enum POP_POLICY_DEVICE_TYPE
{
    PolicyDeviceSystemButton = 0,
    PolicyDeviceThermalZone = 1,
    PolicyDeviceBattery = 2,
    PolicyInitiatePowerActionAPI = 3,
    PolicySetPowerStateAPI = 4,
    PolicyImmediateDozeS4 = 5,
    PolicySystemIdle = 6
};
/* Used in */
// _POP_ACTION_TRIGGER

