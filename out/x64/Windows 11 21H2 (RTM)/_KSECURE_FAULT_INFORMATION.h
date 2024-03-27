#pragma once
/* ------------------ */


//0x18 bytes (sizeof)
struct _KSECURE_FAULT_INFORMATION
{
    ULONGLONG FaultCode;                                                    //0x0
    ULONGLONG FaultVa;                                                      //0x8
    ULONGLONG FaultPa;                                                      //0x10
};
/* Used in */
// _KPRCB

