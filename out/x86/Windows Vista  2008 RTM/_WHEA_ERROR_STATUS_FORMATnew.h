#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
enum _WHEA_ERROR_STATUS_FORMAT
{
    WheaErrorStatusFormatIPFSalRecord = 0,
    WheaErrorStatusFormatIA32MCA = 1,
    WheaErrorStatusFormatEM64TMCA = 2,
    WheaErrorStatusFormatAMD64MCA = 3,
    WheaErrorStatusFormatPCIExpress = 4,
    WheaErrorStatusFormatNMIPort = 5,
    WheaErrorStatusFormatOther = 6,
    WheaErrorStatusFormatMax = 7
};
/* Used in */
// _WHEA_ERROR_PACKET

