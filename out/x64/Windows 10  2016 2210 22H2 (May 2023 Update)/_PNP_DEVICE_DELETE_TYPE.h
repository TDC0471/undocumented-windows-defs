#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
enum _PNP_DEVICE_DELETE_TYPE
{
    QueryRemoveDevice = 0,
    CancelRemoveDevice = 1,
    RemoveDevice = 2,
    SurpriseRemoveDevice = 3,
    EjectDevice = 4,
    RemoveFailedDevice = 5,
    RemoveUnstartedFailedDevice = 6,
    MaxDeviceDeleteType = 7
};
/* Used in */
// _DEVICE_OBJECT_LIST
// _PENDING_RELATIONS_LIST_ENTRY

