#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
struct _WMI_BUFFER_STATE
{
    ULONG Free:1;                                                           //0x0
    ULONG InUse:1;                                                          //0x0
    ULONG Flush:1;                                                          //0x0
    ULONG Unused:29;                                                        //0x0
};
/* Used in */
// _WMI_BUFFER_HEADER

