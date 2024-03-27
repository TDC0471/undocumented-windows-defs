#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
union _WHEA_ERROR_RECORD_HEADER_FLAGS
{
    ULONG Recovered:1;                                                      //0x0
    ULONG PreviousError:1;                                                  //0x0
    ULONG Simulated:1;                                                      //0x0
    ULONG DeviceDriver:1;                                                   //0x0
    ULONG CriticalEvent:1;                                                  //0x0
    ULONG PersistPfn:1;                                                     //0x0
    ULONG SectionsTruncated:1;                                              //0x0
    ULONG RecoveryInProgress:1;                                             //0x0
    ULONG Throttle:1;                                                       //0x0
    ULONG Reserved:23;                                                      //0x0
    ULONG AsULONG;                                                          //0x0
};
/* Used in */
// _WHEA_ERROR_RECORD_HEADER

