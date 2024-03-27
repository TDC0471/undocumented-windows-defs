#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
enum _WHEA_ERROR_TYPE
{
    WheaErrTypeProcessor = 0,
    WheaErrTypeMemory = 1,
    WheaErrTypePCIExpress = 2,
    WheaErrTypeNMI = 3,
    WheaErrTypePCIXBus = 4,
    WheaErrTypePCIXDevice = 5,
    WheaErrTypeGeneric = 6
};
/* Used in */
// _WHEA_ERROR_PACKET

