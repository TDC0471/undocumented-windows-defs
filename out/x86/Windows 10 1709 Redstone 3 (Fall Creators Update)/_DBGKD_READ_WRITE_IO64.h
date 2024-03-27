#pragma once
/* ------------------ */


//0x10 bytes (sizeof)
struct _DBGKD_READ_WRITE_IO64
{
    ULONGLONG IoAddress;                                                    //0x0
    ULONG DataSize;                                                         //0x8
    ULONG DataValue;                                                        //0xc
};
/* Used in */
// _DBGKD_MANIPULATE_STATE64

