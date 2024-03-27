#pragma once
/* ------------------ */


//0x20 bytes (sizeof)
struct _PO_MEMORY_RANGE_ARRAY_RANGE
{
    ULONGLONG PageNo;                                                       //0x0
    ULONGLONG StartPage;                                                    //0x8
    ULONGLONG EndPage;                                                      //0x10
    ULONG CheckSum;                                                         //0x18
};
/* Used in */
// _PO_MEMORY_RANGE_ARRAY

