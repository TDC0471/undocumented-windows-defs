#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
union _KSR_CAPABILITIES
{
    ULONG PerrenialDatabase:1;                                              //0x0
    ULONG SkipSubAllocator:1;                                               //0x0
    ULONG Reserved:30;                                                      //0x0
    ULONG AsULong;                                                          //0x0
};
/* Used in */
// _KSR_FIRMWARE_INFORMATION

