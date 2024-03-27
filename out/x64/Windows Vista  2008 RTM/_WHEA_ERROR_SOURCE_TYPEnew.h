#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
enum _WHEA_ERROR_SOURCE_TYPE
{
    WheaErrSrcTypeMCE = 0,
    WheaErrSrcTypeCMC = 1,
    WheaErrSrcTypeCPE = 2,
    WheaErrSrcTypeNMI = 3,
    WheaErrSrcTypePCIe = 4,
    WheaErrSrcTypeOther = 5,
    WheaErrSrcTypeMax = 6
};
/* Used in */
// _WHEA_ERROR_PACKET

