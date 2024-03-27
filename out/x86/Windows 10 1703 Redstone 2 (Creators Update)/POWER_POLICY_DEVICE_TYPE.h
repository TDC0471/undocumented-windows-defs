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
    PolicyCsBatterySaver = 10,
    PolicyImmediateDozeS4Predicted = 11,
    PolicyImmediateDozeS4PredictedNoWake = 12,
    PolicyImmediateDozeS4AdaptiveBudget = 13,
    PolicyImmediateDozeS4AdaptiveReserveNoWake = 14,
    PolicyDeviceMax = 15
};
/* Used in */
// _POP_ACTION_TRIGGER
// _POP_POLICY_DEVICE
// _POP_POWER_ACTION
// _POP_THERMAL_ZONE

