#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
enum _PNP_VETO_TYPE
{
    PNP_VetoTypeUnknown = 0,
    PNP_VetoLegacyDevice = 1,
    PNP_VetoPendingClose = 2,
    PNP_VetoWindowsApp = 3,
    PNP_VetoWindowsService = 4,
    PNP_VetoOutstandingOpen = 5,
    PNP_VetoDevice = 6,
    PNP_VetoDriver = 7,
    PNP_VetoIllegalDeviceRequest = 8,
    PNP_VetoInsufficientPower = 9,
    PNP_VetoNonDisableable = 10,
    PNP_VetoLegacyDriver = 11,
    PNP_VetoInsufficientRights = 12,
    PNP_VetoAlreadyRemoved = 13
};
/* Used in */
// _PLUGPLAY_EVENT_BLOCK
// _PNP_DEVICE_EVENT_ENTRY

