#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
enum _WHEA_ERROR_SEVERITY
{
    WheaErrSevRecoverable = 0,
    WheaErrSevFatal = 1,
    WheaErrSevCorrected = 2,
    WheaErrSevInformational = 3
};
/* Used in */
// _WHEA_ERROR_PACKET_V2
// _WHEA_ERROR_RECORD_HEADER
// _WHEA_ERROR_RECORD_SECTION_DESCRIPTOR

