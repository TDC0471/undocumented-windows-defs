#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
enum _PNP_DEVICE_ACTION_REQUEST
{
    AssignResources = 0,
    ClearDeviceProblem = 1,
    ClearProblem = 2,
    ClearEjectProblem = 3,
    HaltDevice = 4,
    QueryPowerRelations = 5,
    Rebalance = 6,
    ReenumerateBootDevices = 7,
    ReenumerateDeviceOnly = 8,
    ReenumerateDeviceTree = 9,
    ReenumerateRootDevices = 10,
    RequeryDeviceState = 11,
    ResetDevice = 12,
    ResourceRequirementsChanged = 13,
    RestartEnumeration = 14,
    SetDeviceProblem = 15,
    StartDevice = 16,
    StartSystemDevicesPass0 = 17,
    StartSystemDevicesPass1 = 18
};
/* Used in */
// _PNP_DEVICE_ACTION_ENTRY

