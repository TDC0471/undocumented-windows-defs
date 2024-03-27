#pragma once
/* ------------------ */


//0xc bytes (sizeof)
struct _DBGKD_WRITE_MEMORY32
{
    ULONG TargetBaseAddress;                                                //0x0
    ULONG TransferCount;                                                    //0x4
    ULONG ActualBytesWritten;                                               //0x8
};
/* Used in */
// _DBGKD_MANIPULATE_STATE32

