#pragma once
/* ------------------ */


//0xc bytes (sizeof)
struct _DBGKD_READ_WRITE_IO32
{
    ULONG DataSize;                                                         //0x0
    ULONG IoAddress;                                                        //0x4
    ULONG DataValue;                                                        //0x8
};
/* Used in */
// _DBGKD_MANIPULATE_STATE32

