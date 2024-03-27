#pragma once
/* ------------------ */


//0x10 bytes (sizeof)
struct _PO_MEMORY_RANGE_ARRAY_RANGE
{
    ULONG PageNo;                                                           //0x0
    ULONG StartPage;                                                        //0x4
    ULONG EndPage;                                                          //0x8
    ULONG CheckSum;                                                         //0xc
};
/* Used in */
// _PO_MEMORY_RANGE_ARRAY

