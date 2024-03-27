#pragma once
/* ------------------ */


//0xc bytes (sizeof)
struct _DBGKD_READ_MEMORY32
{
    ULONG TargetBaseAddress;                                                //0x0
    ULONG TransferCount;                                                    //0x4
    ULONG ActualBytesRead;                                                  //0x8
};
/* Used in */
// _DBGKD_MANIPULATE_STATE32

