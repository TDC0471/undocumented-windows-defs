#pragma once
/* ------------------ */


//0x6c bytes (sizeof)
struct _OBP_SYSTEM_DOS_DEVICE_STATE
{
    ULONG GlobalDeviceMap;                                                  //0x0
    ULONG LocalDeviceCount[26];                                             //0x4
};
/* Used in */
// _OBP_SILODRIVERSTATE

