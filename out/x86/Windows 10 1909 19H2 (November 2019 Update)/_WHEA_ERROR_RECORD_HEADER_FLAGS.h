#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
union _WHEA_ERROR_RECORD_HEADER_FLAGS
{
    ULONG Recovered:1;                                                      //0x0
    ULONG PreviousError:1;                                                  //0x0
    ULONG Simulated:1;                                                      //0x0
    ULONG DeviceDriver:1;                                                   //0x0
    ULONG Reserved:28;                                                      //0x0
    ULONG AsULONG;                                                          //0x0
};
/* Used in */
// _WHEA_ERROR_RECORD_HEADER

