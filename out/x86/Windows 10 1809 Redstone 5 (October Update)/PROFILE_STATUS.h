#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
enum PROFILE_STATUS
{
    DOCK_NOTDOCKDEVICE = 0,
    DOCK_QUIESCENT = 1,
    DOCK_ARRIVING = 2,
    DOCK_DEPARTING = 3,
    DOCK_EJECTIRP_COMPLETED = 4
};
/* Used in */
// _DEVICE_NODE

