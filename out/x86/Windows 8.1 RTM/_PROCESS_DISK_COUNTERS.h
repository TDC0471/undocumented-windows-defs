#pragma once
/* ------------------ */


//0x28 bytes (sizeof)
struct _PROCESS_DISK_COUNTERS
{
    ULONGLONG BytesRead;                                                    //0x0
    ULONGLONG BytesWritten;                                                 //0x8
    ULONGLONG ReadOperationCount;                                           //0x10
    ULONGLONG WriteOperationCount;                                          //0x18
    ULONGLONG FlushOperationCount;                                          //0x20
};
/* Used in */
// _EJOB
// _EPROCESS

