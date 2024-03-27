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
    WheaErrSrcTypeGeneric = 5,
    WheaErrSrcTypeINIT = 6,
    WheaErrSrcTypeBOOT = 7,
    WheaErrSrcTypeSCIGeneric = 8,
    WheaErrSrcTypeIPFMCA = 9,
    WheaErrSrcTypeIPFCMC = 10,
    WheaErrSrcTypeIPFCPE = 11,
    WheaErrSrcTypeGenericV2 = 12,
    WheaErrSrcTypeSCIGenericV2 = 13,
    WheaErrSrcTypeBMC = 14,
    WheaErrSrcTypePMEM = 15,
    WheaErrSrcTypeDeviceDriver = 16,
    WheaErrSrcTypeMax = 17
};
/* Used in */
// _WHEAP_ERROR_SOURCE
// _WHEA_ERROR_PACKET_V2
// _WHEA_ERROR_SOURCE_DESCRIPTOR

