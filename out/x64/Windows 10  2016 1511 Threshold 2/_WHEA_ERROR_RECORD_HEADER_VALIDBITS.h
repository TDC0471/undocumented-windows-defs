#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
union _WHEA_ERROR_RECORD_HEADER_VALIDBITS
{
    ULONG PlatformId:1;                                                     //0x0
    ULONG Timestamp:1;                                                      //0x0
    ULONG PartitionId:1;                                                    //0x0
    ULONG Reserved:29;                                                      //0x0
    ULONG AsULONG;                                                          //0x0
};
/* Used in */
// _WHEA_ERROR_RECORD_HEADER

