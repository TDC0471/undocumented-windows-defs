#pragma once
/* ------------------ */


//0x30 bytes (sizeof)
struct _IO_COUNTERS
{
    ULONGLONG ReadOperationCount;                                           //0x0
    ULONGLONG WriteOperationCount;                                          //0x8
    ULONGLONG OtherOperationCount;                                          //0x10
    ULONGLONG ReadTransferCount;                                            //0x18
    ULONGLONG WriteTransferCount;                                           //0x20
    ULONGLONG OtherTransferCount;                                           //0x28
};
/* Used in */
// _EJOB

