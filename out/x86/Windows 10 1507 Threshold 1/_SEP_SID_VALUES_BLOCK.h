#pragma once
/* ------------------ */


//0x10 bytes (sizeof)
struct _SEP_SID_VALUES_BLOCK
{
    ULONG BlockLength;                                                      //0x0
    LONG ReferenceCount;                                                    //0x4
    ULONG SidCount;                                                         //0x8
    ULONG SidValuesStart;                                                   //0xc
};
/* Used in */
// _SEP_LOGON_SESSION_REFERENCES
// _TOKEN

