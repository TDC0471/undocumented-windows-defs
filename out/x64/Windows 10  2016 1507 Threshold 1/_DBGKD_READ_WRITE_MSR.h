#pragma once
/* ------------------ */


//0xc bytes (sizeof)
struct _DBGKD_READ_WRITE_MSR
{
    ULONG Msr;                                                              //0x0
    ULONG DataValueLow;                                                     //0x4
    ULONG DataValueHigh;                                                    //0x8
};
/* Used in */
// _DBGKD_MANIPULATE_STATE32
// _DBGKD_MANIPULATE_STATE64

