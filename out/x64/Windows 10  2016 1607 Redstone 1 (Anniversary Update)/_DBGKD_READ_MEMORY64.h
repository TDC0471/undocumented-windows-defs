#pragma once
/* ------------------ */


//0x10 bytes (sizeof)
struct _DBGKD_READ_MEMORY64
{
    ULONGLONG TargetBaseAddress;                                            //0x0
    ULONG TransferCount;                                                    //0x8
    ULONG ActualBytesRead;                                                  //0xc
};
/* Used in */
// _DBGKD_MANIPULATE_STATE32
// _DBGKD_MANIPULATE_STATE64

