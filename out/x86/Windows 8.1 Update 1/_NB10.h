#pragma once
/* ------------------ */


//0x14 bytes (sizeof)
struct _NB10
{
    ULONG Signature;                                                        //0x0
    ULONG Offset;                                                           //0x4
    ULONG TimeStamp;                                                        //0x8
    ULONG Age;                                                              //0xc
    CHAR PdbName[1];                                                        //0x10
};
/* Used in */
// _CVDD

